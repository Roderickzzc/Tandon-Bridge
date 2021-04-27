#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Money
{
 public:
 friend Money operator +(const Money & amount1, const Money & amount2);
	//Returns the sum of the values of amount1 and amount2.
 friend Money operator -(const Money & amount1, const Money & amount2);
	//Returns amount1 minus amount2.
 friend Money operator -(const Money & amount);
	//Returns the negative of the value of amount.
 friend bool operator ==(const Money & amount1, const Money & amount2);
	//Returns true if amount1 and amount2 have the same value; false otherwise.
 friend bool operator <(const Money & amount1, const Money & amount2);
	//Returns true if amount1 is less than amount2; false otherwise.
 Money(long dollars, int cents);
	//Initializes the object so its value represents an amount with
	//the dollars and cents given by the arguments. If the amount
	//is negative, then both dollars and cents should be negative.
 Money(long dollars);
	//Initializes the object so its value represents $dollars.00.
 Money();
	//Initializes the object so its value represents $0.00.
 double get_value() const;
	//Returns the amount of money recorded in the data portion of the calling
	//object.
 friend istream & operator >>(istream & ins, Money & amount);
	//Overloads the >> operator so it can be used to input values of type
	//Money. Notation for inputting negative amounts is as in − $100.00.
	//Precondition: If ins is a file input stream, then ins has already been
	//connected to a file.
 friend ostream & operator <<(ostream & outs, const Money & amount);
	//Overloads the << operator so it can be used to output values of type
	//Money. Precedes each output value of type Money with a dollar sign.
	//Precondition: If outs is a file output stream, then outs has already been
	//connected to a file.
 void changeValue(double amt);
private:
	long all_cents;
};

Money operator+(const Money& amount1, const Money& amount2) {
	Money temp;
	temp.all_cents = amount1.all_cents + amount2.all_cents;
	return temp;
}

Money operator -(const Money& amount1, const Money& amount2)
{
	Money temp;
	temp.all_cents = amount1.all_cents - amount2.all_cents;
	return temp;
}

Money operator -(const Money& amount) {
	Money temp;
	temp.all_cents =  - amount.all_cents;
	return temp;
}

bool operator ==(const Money& amount1, const Money& amount2) {
	if (amount1.all_cents == amount2.all_cents) {
		return true;
	}
	else
	{
		return false;
	}
}

bool operator <(const Money& amount1, const Money& amount2) {
	if (amount1.all_cents < amount1.all_cents) {
		return true;
	}
	else {
		return false;
	}
}

Money::Money(long dollars, int cents) {
	all_cents = dollars * 100 + cents;
}

Money::Money(long dollars) {
	all_cents = dollars * 100;
}

Money::Money() {
	all_cents = 0;
}

double Money::get_value() const {
	return all_cents*0.01;
}

int digit_to_int(char c) {
	return(static_cast<int>(c) - static_cast<int>('0'));
}

istream& operator >>(istream& ins, Money& amount) {
	char one_char, decimal_point, digit1, digit2;
	long dollars;
	int cents;
	bool negative;
	ins >> one_char;
	if (one_char == '-') {
		negative = true;
		ins >> one_char;
	}
	else {
		negative = false;
	}

	ins >> dollars >> decimal_point >> digit1 >> digit2;

	if (one_char != '$' || decimal_point != '.' || !isdigit(digit1) || !isdigit(digit2)) {
		cout << "The input is not valid.";
		exit(1);
	}

	cents = digit_to_int(digit1) * 10 + digit_to_int(digit2);
	amount.all_cents = dollars * 100 + cents;

	if (negative) {
		amount.all_cents = -amount.all_cents;
	}

	return ins;
}

ostream& operator <<(ostream& outs, const Money& amount) {

	long positive_cents, dollars, cents;

	positive_cents = labs(amount.all_cents);
	dollars = positive_cents / 100;
	cents = positive_cents % 100;
	if (amount.all_cents < 0) {
		outs << "-$" << dollars << '.';
	}
	else {
		outs << "$" << dollars << ".";
	}

	if (cents < 10) {
		outs << '0';
	}

	outs << cents;

	return outs;
}

void Money::changeValue(double amt) {
	this->all_cents = amt * 100;
}

class Check {
private:
	int checkNumber;
	Money amount;
	bool isCashed;
public:
	Check(int x, Money y, bool isTrue):checkNumber(x), amount(y), isCashed(isTrue) {}
	void setCheckNum(int num);
	void setAmount(Money amt);
	void setIsCashed(bool isCash);
	int getCheckNum() const { return checkNumber; }
	Money getAmount() const { return amount; }
	bool getIsCashed() const { return isCashed; }

	friend istream& operator >>(istream& ins, Check& chk);
	friend ostream& operator <<(ostream& outs, const Check& chkInfo);

};
void Check::setCheckNum(int num) {
	this->checkNumber = num;
}
void Check::setAmount(Money amt) {
	amount = amt;
}
void Check::setIsCashed(bool isCash) {
	this->isCashed = isCash;
}

istream& operator >>(istream& ins, Check& chk) {
	int cashd;
	int no;
	Money amt;

	while (!(ins >> no) || !(ins >> amt) || !(ins >> cashd)) {
		ins.clear();
		cin.ignore(80, '\n');
		cout << "Invalid input for check." << endl;
	}

	cin.ignore(80, '\n');
	chk.checkNumber = no;
	chk.amount = amt;
	chk.isCashed = cashd;

	return ins;
}

ostream& operator <<(ostream& outs, const Check& chkInfo) {
	outs << "Check no: " << chkInfo.checkNumber << ", Amount: " << chkInfo.amount << ", ";
	if (chkInfo.isCashed) {
		outs << "Cashed";
	}
	else {
		outs << "Not Cashed";
	}
	return outs;
}

double sumCashedChecks(vector<Check>& check_vector);
double sumUncashedChecks(vector<Check>& check_vector);
double sumDeposits(vector<Money>& deposit_vector);
double calculatedBalance(double old_balance, double sum_deposits, double sum_uncashed_checks, double sum_cashed_checks);
double bankAccountBalance(double old_balance, double sum_deposits, double sum_cashed_checks);
double accountBalanceDifference(double bank_balance, double calculated_balance);
void listCashedChecks(vector<Check> cashed_check_vector);
void listUncashedChecks(vector<Check> uncashed_check_vector);

int main() {
	int check_num; 
	double check_amt;
	bool stop=false, is_cash,contin;
	vector<Check> check_vec;
	while (stop == false) {
		cout << "Please enter the check number, check amount and whether the check is cashed.(1 for Yes and 0 for No)"<<endl;
		cin >> check_num >> check_amt >> is_cash;
		Money m(check_amt);
		Check input_check(check_num, m, is_cash);
		check_vec.push_back(input_check);

		cout << "Continue? (1 for Yes and 0 for No)." << endl;
		cin >> contin;
		if (contin == 0) {
			stop = true;
		}
	}


	int deposit;
	vector<Money> deposit_vec;
	stop = false;
	while (stop == false) {
		cout << "Please enter a deposit" << endl;
		cin >> deposit;
		Money m2(deposit);

		deposit_vec.push_back(m2);

		cout << "Continue? (1 for Yes and 0 for No)." << endl;
		cin >> contin;
		if (contin == 0) {
			stop = true;
		}
	}

	double sum_cashed_checks;
	sum_cashed_checks = sumCashedChecks(check_vec);

	double sum_uncashed_checks;
	sum_uncashed_checks = sumUncashedChecks(check_vec);

	double sum_deposits;
	sum_deposits = sumDeposits(deposit_vec);

	double old_account_balance;
	cout << "Please enter your old account balance:" << endl;
	cin >> old_account_balance;
	//old_account_balance *= 100;
	Money old_balance(old_account_balance);

	double balance_from_bank;
	cout << "Please enter your new account balance:" << endl;
	cin >> balance_from_bank;
	//balance_from_bank *= 100;
	Money new_balance(balance_from_bank);

	cout << endl;
	cout << "Checkbook Summary:" << endl;
	cout << "------------------" << endl;
	cout << "Sum of cashed checks: $" << sum_cashed_checks << endl;
	cout << "Sum of uncashed checks: $" << sum_uncashed_checks << endl;
	cout << "Sum of deposits: $" << sum_deposits << endl;

	double calculated_account_balance;
	calculated_account_balance = calculatedBalance(old_balance.get_value(), sum_deposits, sum_uncashed_checks, sum_cashed_checks);
	cout << "New Calculated Balance: $" << calculated_account_balance << endl;

	double bank_balance;
	bank_balance = bankAccountBalance(old_balance.get_value(), sum_deposits, sum_cashed_checks);
	cout << "Bank Balance: $" << bank_balance << endl;

	double balance_difference;
	balance_difference = accountBalanceDifference(calculated_account_balance, bank_balance);
	cout << "Balance Difference: $" << balance_difference << endl;

	listCashedChecks(check_vec);
	listUncashedChecks(check_vec);

	return 0;
}

double sumCashedChecks(vector<Check>& check_vector) {
	double sum = 0;
	for (int i = 0; i < check_vector.size(); i++) {
		
		if (check_vector[i].getIsCashed() == true) {
			sum += check_vector[i].getAmount().get_value();
		}
	}
	return sum;
}
double sumUncashedChecks(vector<Check>& check_vector) {
	double sum = 0;
	for (int i = 0; i < check_vector.size(); i++) {
		
		if (check_vector[i].getIsCashed() == false) {
			sum += check_vector[i].getAmount().get_value();
		}
	}
	return sum;
}
double sumDeposits(vector<Money>& deposit_vector) {
	double sum=0;
	for (int i = 0; i < deposit_vector.size(); i++) {
		sum += deposit_vector[i].get_value();
	}
	return sum;
}
double calculatedBalance(double old_balance, double sum_deposits, double sum_uncashed_checks, double sum_cashed_checks) {
	return old_balance + sum_deposits - (sum_cashed_checks + sum_uncashed_checks);
}
double bankAccountBalance(double old_balance, double sum_deposits, double sum_cashed_checks) {
	return old_balance + sum_deposits - sum_cashed_checks;
}
double accountBalanceDifference(double bank_balance, double calculated_balance) {
	return calculated_balance - bank_balance;
}
void listCashedChecks(vector<Check> cashed_check_vector) {
	vector<int> cashed_check_id;
	cout << "Cashed Checks: ";
	
	for (int i = 0; i < cashed_check_vector.size(); i++) {
		if (cashed_check_vector[i].getIsCashed() == true) {
			cashed_check_id.push_back(cashed_check_vector[i].getCheckNum());
			//cout << "$" << cashed_check_vector[i].getAmount().get_value() << " ";
		}
	}
	sort(cashed_check_id.begin(), cashed_check_id.end());
	for (int i = 0; i < cashed_check_id.size(); i++) {
		cout << "Check NO."<<cashed_check_id[i]<<" ";
	}
	cout << endl;
}
void listUncashedChecks(vector<Check> uncashed_check_vector) {
	vector<int> uncashed_check_id;
	cout << "Uncashed Checks: ";
	
	for (int i = 0; i < uncashed_check_vector.size(); i++) {
		if (uncashed_check_vector[i].getIsCashed() == false) {
			uncashed_check_id.push_back(uncashed_check_vector[i].getCheckNum());
			//cout << "$" << uncashed_check_vector[i].getAmount().get_value() << " ";
		}
	}
	sort(uncashed_check_id.begin(), uncashed_check_id.end());
	for (int i = 0; i < uncashed_check_id.size(); i++) {
		cout << "Check NO." << uncashed_check_id[i] << " ";
	}
	cout << endl;
}

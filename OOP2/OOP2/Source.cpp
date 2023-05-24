#include<iostream>
#include<string>
#include<vector>
#include<iterator>



class MyClass
{
private:
	int _a;
	int _b;
public:
	int getA() {
		return _a;
	}
	int getB() {
		return _b;
	}
	void setA(int a) {
		_a = a;
	}
	void setB(int b) {
		_b = b;
	}
	void print() {
		std::cout << "a = " << _a << "\nb = " << _b << std::endl;
	}
};

class Person {
private:
	std::string _name;
	int _age;
public:
	Person() : _name("\x1b[33mVasya2"), _age(37) {}
	void print() {
		std::cout << "\n" << _name << "\n" << _age << "\n";
	}
};

class Pupil {
private:
	std::string _name;
	int _age;
	std::vector<int>vec1;
public:
	Pupil() : _name("Vasya1"), _age(27) {}
	void setVec(const std::vector<int>&vec) {
		vec1 = vec;
		for(int i = 0;i  < vec1.size(); i++)
		{
			std::cout << vec1[i] << ' ';
		}
		std::cout << "\n\n";

	}
	void print() {
		std::cout << "\n" << _name << "\n" << _age << "\n";
	}
};

class Professor {
private:
	std::string _name;
	int _age;
	std::string _degree;
public:
	Professor(): _name("Vasya"), _age(21), _degree("Master"){}
	void print() {
		std::cout << "\n" << _name << "\n" << _age << "\n" << _degree << "\n";
	}
};

class Client {
private:
	std::string _name;
	int _age;
	double _bill;

public:
	Client(std::string name, int age, double bill) {
		_name = name, _age = age, _bill = bill;
	}

	void ShowData() {
		std::cout << "Name client is " << _name << "\n";
		std::cout << "Client age is " << _age << "\n";
		std::cout << "Client bill's  " << _bill << "\n";
	}
};

class Bank {
private:
	std::vector<Client*>_clients;

public:
	void AddClient(Client* client) {
		_clients.push_back(client);
	}

	void ShowClients() {
		std::vector<Client*>::iterator it;
		for (it = _clients.begin(); it != _clients.end(); it++) //(const auto &it : _clients)
			(**it).ShowData();
	}

	void ShowClients(int index) {
		if (index > _clients.size())
			return;
		(*_clients.at(index - 1)).ShowData();
	}
};


	





int main() {
	std::vector<int>V { 11,12,9 };
	MyClass m1;
	//m1.setA(5);
	//m1.setB(10);
	//m1.print();

	Person p1;
	Pupil pu1;
	Professor pr1;
	//p1.print();
	//pu1.setVec(V);
	//pu1.print();
	//pr1.print();


	Bank* bank = new Bank();
	Client* client1 = new Client("Vasya11", 59, 111011);
	Client* client2 = new Client("Vasya12", 39, 111111);
	Client* client3 = new Client("Vasya13", 22, 111211);
	Client* client4 = new Client("Vasya14", 39, 111311);
	Client* client5 = new Client("Vasya15", 49, 111411);
	bank->AddClient(client1);
	bank->AddClient(client2);
	bank->AddClient(client3);
	bank->AddClient(client4);
	bank->AddClient(client5);
	bank->ShowClients();
	bank->ShowClients(1);


	
	system("pause");
	return 0;
}
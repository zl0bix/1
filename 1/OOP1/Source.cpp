#include<iostream>
#include<vector>
#include<string>
#include<iterator>//библиотека для итераторов
class MyClass {
private:
	int _data;
public:
	int data;
protected:
	//int data;
public:
	int sum(int data) {
		return _data + data;
	}
};

class Tovar {
private:
	std::string _name = "";
	int _price = 1;
public:
	Tovar(): _name("Вася"), _price(99){}
	Tovar(std::string name, int price) {
		_name = name;
		_price = price;
	}
	void show() {
		std::cout << _name << "\n" << _price<<"\n";
	}
	void setName(std::string& name) {
		_name = name;
	}
	void setPrice(int price) {
		_price = price;
	}
	std::string getName() {
		return _name;
	}
	int getPrice() {
		return _price;
	}
};

class Employees {
private:
	int _id;
	std::string _name;
public:
	Employees(): _name("Figggg"), _id(3627847264672){}
	Employees(std::string name, int id) {
		_name = name;
		_id = id;
	}
	void show() {
		std::cout << _name << "\n" << _id << "\n";
	}
	void setName(std::string name) {
		_name = name;
	}
	void setId(int id) {
		_id = id;
	}
	std::string getName() {
		return _name;
	}
	int getId() {
		return _id;
	}
	~Employees() {

	}
};
class Person
{
public:
	Person(std::string name, int age):_name(name),_age(age){}
	//~Person();
	
	void show() {
		std::cout << std::endl;
		std::cout << " name " << _name << std::endl;
		std::cout << " age " << _age << std::endl;
	}
	//Person (std::string name, int age) : _name(name),_age(age){}

private:
	std::string _name;
	int _age;
};




int main(){
	/*
	setlocale(LC_ALL, "rus");
	MyClass myObject;
	myObject.data = 100;
	Tovar tov1;
	std::string  name1 = "Лёша";
	tov1.setName(name1);
	tov1.setPrice(11);
	tov1.show();
	std::cout << tov1.getName();
	Tovar tov2("Vova",12);
	Tovar tov3("Floooop",1111);
	std::cout << "------------------------" << std::endl;
	tov2.show();
	tov3.show();
	Employees St1;
	St1.setName("Asya");
	St1.setId(121213313);
	St1.show();
	Employees *St2 = new Employees("Fuh",1263136);
	St2->getName();
	delete St2;
	*/

	std::vector <int> arr{ 17878,22,33,1,22,111 };
	/*arr.push_back(7);// 7 в конец
	std::cout<<arr.size()<<std::endl;
	arr.pop_back();//удоляет последний элемент
	arr.begin();//возвращает первый элемент
	arr.end();//возвращает последний элемент
	arr.erase(arr.begin()+2);//удаляет указанный аргумент
	arr.at(0);//обращение к элементам вектора
	arr.at(0) = 1000;
	for (int i = 0; i < arr.size(); i++){
		std::cout << arr.at(i) << ' ';
	}
	*/
	std::vector<int>::iterator it;
	it = arr.begin();
	std::cout << *it;      // !=  
	for (it = arr.begin(); it < arr.end();it++)//(const auto &it:arr)
	{
		std::cout << *it << ' ';
	}
	
	Person p1(" J ", 21);
	Person p2(" J1 ", 221);
	Person p3(" J11 ", 211);
	std::vector<Person>pipl;
	std::vector<Person>::iterator it1;
	pipl.push_back(p1);
	pipl.push_back(p2);
	pipl.push_back(p3);
	it1 = pipl.begin();
	
	
	(*(it1+1)).show();
	

		


	return 0;
}
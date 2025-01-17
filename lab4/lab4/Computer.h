#include "Header.h"

class Computer {
protected:
	char brand[MAXSTRINGSIZE];
	char modelName[MAXSTRINGSIZE];
public:
	Computer();

	~Computer();

	Computer(char* brandStr, char* modelnameStr);

	Computer(const Computer& other);

	char* getBrand();

	char* getModelName();

	void setBrand(const char* newBrand);

	void setModelName(const char* newModelName);

	friend std::ofstream& operator << (std::ofstream& a, Computer& obj);

	friend std::ifstream& operator >> (std::ifstream& a, Computer& obj);
};
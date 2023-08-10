#include <iostream>
#include <string>

struct NameType {
  std::string firstName;
  std::string middleName;
  std::string lastName;
};

struct DataType {
  u_int day;
  u_int month;
  u_int year;
};
struct ContactType {
  std::string email;
  std::string phone;
  std::string fac;
};
struct AddressType {
  std::string houseNO;
  std::string streetNO;
  std::string commune;
  std::string destrict;
  std::string province;
};

enum class Gender {
  Male,
  Female
};

class EmployeeType {
private:
  int emp;
  NameType name;
  Gender gender;
  DataType birthDate;
  ContactType contact;
  AddressType address;
public:
  EmployeeType();
  EmployeeType(int emp, NameType name, Gender gender, DataType birthDate, ContactType contact, AddressType address) : 
    emp(emp), name(name), gender(gender), birthDate(birthDate), contact(contact), address(address) {}

  int getEmp() const { return emp; }
  void setEmp(int emp) { this->emp = emp; }

  NameType getName() const { return name; }
  void setName(NameType name) { this->name = name; }

  Gender getGender() const { return gender; }
  void setGender(Gender gender) { this->gender = gender; }

  DataType getBirthDate() const { return birthDate; }
  void setBirthDate(DataType birthDate) { this->birthDate = birthDate; }

  ContactType getContact() const { return contact; }
  void setContact(ContactType contact) { this->contact = contact; }

  AddressType getAddress() const { return address; }
  void setAddress(AddressType address) { this->address = address; }

  void showInfo() const {
    std::cout << "Employee ID: " << emp << std::endl;
    std::cout << "Name: " << name.firstName << " " << name.middleName << " " << name.lastName << std::endl;
    std::cout << "Gender: " << (gender == Gender::Male ? "Male" : "Female") << std::endl;
    std::cout << "Birth Date: " << birthDate.day << "/" << birthDate.month << "/" << birthDate.year << std::endl;
    std::cout << "Contact: \n\tEmail: " << contact.email << "\n\tPhone: " << contact.phone << "\n\tFax: " << contact.fac << std::endl;
    std::cout << "Address: \n\tHouse No.: " << address.houseNO
              << "\n\tStreet No.: " << address.streetNO
              << "\n\tCommune: " << address.commune
              << "\n\tDistrict: " << address.destrict
              << "\n\tProvince: " << address.province
              << std::endl;
}
};

int main(){

}


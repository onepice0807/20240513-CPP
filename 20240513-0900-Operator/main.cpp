#include <iostream>
#include <string>

using namespace std;

class SonData {
private:
	// �̸�, ����,�Ҽ���, ������, ���� , ����
	// ����, ������, Ű, ĳ����, ������, �ֹ�, ����, Ȩ�׶���, ��ų
	string name;
	int age;
	string affiliatedTeam;
	string position;
	string nationality;
	bool gender; // true : ����, false : ����

public:
	void  SetName(string value) {
		name = value;
	}
	string GetName() {
		return name;
	}

	void  SetAge(int value) {
		age = value;
	}
	int GetAge() {
		return age;
	}

	void  SetAffiliatedTeam(string value) {
		affiliatedTeam = value;
	}
	string GetAffiliatedTeam() {
		return affiliatedTeam;
	}

	void  SetPosition(string value) {
		position = value;
	}
	string GetPosition() {
		return position;
	}

	void  SetNationality(string value) {
		nationality = value;
	}
	string GetNationality() {
		return nationality;
	}

	void  SetGender(bool value) {
		gender = value;
	}
	bool GetGender() {
		return gender;
	}
	void  SetGender(bool value) {
		gender = value;
	}
	bool GetGender() {
		return gender;
	}
	void  SetGender(bool value) {
		gender = value;
	}
	bool GetGender() {
		return gender;
	}


};

int main() {
	// �౸���ӿ��� �ʿ��� ������� ����Ÿ�� ���ϰ�
	// ĸ��ȭ�ؼ� ��ü�� ����� ���� �����ϰ� ����غ�����

	SonData sonData;

	sonData.SetName("�����");
	sonData.SetAge(31);
	sonData.SetAffiliatedTeam("��Ʈ��");
	sonData.SetPosition("��������");
	sonData.SetNationality("���ѹα�");
	sonData.SetGender(true);

	cout << "�̸� : " << sonData.GetName() << endl;
	cout << "���� : " << sonData.GetAge() << endl;
	cout << "�Ҽ��� : " << sonData.GetAffiliatedTeam() << endl;
	cout << "������ : " << sonData.GetPosition() << endl;
	cout << "���� : " << sonData.GetNationality() << endl;
	if (sonData.GetGender()) {
		cout << "���� : ����" << endl;
	}
	else {
		cout << "���� : ����: " << endl;
	}

	return 0;
}
#include <iostream>
#include <string>

using namespace std;

class SonData {
private:
	// 이름, 나이,소속팀, 포지션, 국적 , 성별
	// 성별, 몸무게, 키, 캐리어, 포지션, 주발, 국적, 홈그라운드, 스킬
	string name;
	int age;
	string affiliatedTeam;
	string position;
	string nationality;
	bool gender; // true : 남자, false : 여자

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
	// 축구게임에서 필요한 손흥민의 데이타를 취하고
	// 캡슐화해서 객체를 만들고 값을 저장하고 출력해보세요

	SonData sonData;

	sonData.SetName("손흥민");
	sonData.SetAge(31);
	sonData.SetAffiliatedTeam("토트넘");
	sonData.SetPosition("좌측윙어");
	sonData.SetNationality("대한민국");
	sonData.SetGender(true);

	cout << "이름 : " << sonData.GetName() << endl;
	cout << "나이 : " << sonData.GetAge() << endl;
	cout << "소속팀 : " << sonData.GetAffiliatedTeam() << endl;
	cout << "포지션 : " << sonData.GetPosition() << endl;
	cout << "국적 : " << sonData.GetNationality() << endl;
	if (sonData.GetGender()) {
		cout << "성별 : 남성" << endl;
	}
	else {
		cout << "성별 : 여성: " << endl;
	}

	return 0;
}
#include <iostream>
using namespace std;
class  Student
{
public:
	int id;
	float score;
	Student(int i = 0, float s = 0.0) :id(i), score(s) {};
	void max(Student* stuArr, int size)
	{
		float maxScore = stuArr[0].score;
		int maxid = stuArr[0].id;
		for (int i = 1; i < size; i++)
		{
			if (stuArr[i].score > maxScore)
			{
				maxScore = stuArr[i].score;
				maxid = stuArr[i].id;
			}
		}
		cout << "最高成绩者:id=" << maxid << ",score=" << maxScore << endl;
	};

	 
};

int main()
{
	Student stuArr[5] = {
		Student(101, 85.5), 
		Student(102, 92.0), 
		Student(103, 78.0), 
		Student(104, 95.5), 
		Student(105, 88.0)
	};
	stuArr[0].max(stuArr, 5);
	return 0;
}
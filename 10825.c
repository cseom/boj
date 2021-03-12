#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class score
{
public:
	string name;
	int kor, eng, mat;
};

bool compare(score a,score b)
{
	if (a.kor == b.kor && a.eng == b.eng && a.mat == b.mat)
		return a.name < b.name;
	if (a.kor == b.kor && a.eng == b.eng)
		return a.mat > b.mat;
	if (a.kor == b.kor)
		return a.eng < b.eng;
	return (a.kor > b.kor);
}

int	main(void)
{
	int n;
	cin >> n;

	vector<score> v(n);


	for (int i = 0; i < n; i++)
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].mat;
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++)
		cout << v[i].name << "\n";
	return (0);
}

#include <algorithm>
#include <vector>
#include <iostream>
#include <random>
using namespace std;

class likefun
{
public:
	void operator()(int i)
	{
		cout << i;
	}
};

void PrintV(int v)
{
	cout << v << " ";
}

int AddV(int v)
{
	return ++v;
}

bool large(int a)
{
	if (a > 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void show(vector<int> v)
{
	for_each(v.begin(), v.end(), PrintV);
	cout << endl;
}

int myrandom (int i) { return std::rand()%i;}

int main()
{
	vector<int> v;//示例容器
	vector<int> new_v;//复制容器
	vector<int> reunion;//合并容器
	reunion.resize(30);
	vector<int>::iterator it;//返回迭代器
	bool flag;//返回的bool值
	int num = 0;//返回的下标
	new_v.resize(10);
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//for_each
	for_each(v.begin(), v.end(), PrintV);//遍历，需要一个函数指针或者仿函数
	for_each(v.begin(), v.end(), likefun());
	cout << endl;
	//transform操作后放入新区域
	transform(v.begin(), v.end(), new_v.begin(), AddV);
	show(new_v);
	//find
	it = find(v.begin(), v.end(), 2);//查找，返回迭代器
	cout << *it << endl;
	cout << "---------------" << endl;

	//find_if
	it = find_if(v.begin(), v.end(), large);
	cout << *it << endl;
	//adjacent_find
	it = adjacent_find(v.begin(), v.end());
	cout << *it << endl;//因为vector中没有相同的，所以返回v.end()
	//binary_search
	flag = binary_search(v.begin(), v.end(), 10);
	cout << flag << endl;//二分查找，返回0和1
	//count
	num = count(v.begin(), v.end(),5);
	cout << num << endl;//查找等于这个元素的个数
	//count_if
	num = count_if(v.begin(), v.end(), large);
	cout << num << endl;//查找这个范围的个数
	cout << "---------------" << endl;

	//sort
	sort(v.begin(), v.end());
	show(v);
	//randon_shuffle
	random_shuffle(v.begin(), v.end(),myrandom);
	show(v);
	//merge
	merge(v.begin(), v.end(), new_v.begin(), new_v.end(),reunion.begin());
	show(reunion);//合并两个有序容器到一个新的空容器，注意，容器的容量要足够
	//reverse
	reverse(v.begin(), v.end());
	show(v);
	cout << "---------------" << endl;

	//replace
	replace(v.begin(), v.end(), 3, 300);
	show(v);//把某个数字替换为另外一个数字
	//replace_if
	replace_if(v.begin(), v.end(), large, 10);
	show(v);//交换某个范围的数字
	//swap
	swap(v[1],v[2]);
	show(v);//交换两个元素
	cout << "---------------" << endl;

	//fill
	fill(v.begin(), v.end(),10);
	show(v);//快速填充
	//copy
	copy(v.begin(), v.end(), reunion.begin());
	show(v);//拷贝容器
	cout << "---------------" << endl;

	//差集
	set_difference(v.begin(), v.end(), new_v.begin(), new_v.end(), reunion.begin());
	show(reunion);
	//交集
	set_intersection(v.begin(), v.end(), new_v.begin(), new_v.end(), reunion.begin());
	show(reunion);
	//并集
	set_union(v.begin(), v.end(), new_v.begin(), new_v.end(), reunion.begin());
	show(reunion);
	cout << "---------------" << endl;

	cout << "end" << endl;
	return 0;
}

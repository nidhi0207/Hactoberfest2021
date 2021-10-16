//we cannot resize array means if array is of size 10 then we cannot store
//11th element but vector can resize itself if size increases
//in array we have to copy the elements ina bigger array

using namespace std;
#include<iostream>
#include<vector>

template <class T>

void display(vector<T> &v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
		
		//cout<<v.at(i)<<" ";
	}
	cout<<endl;
}
int main()
{
	int ele;
	vector<int> vec1;// zero length vector
	vector<char> vec2(4);//four element character vector
	vec2.push_back('s');
	vector<char> vec3(vec2);//vec3 from vec2
	vector<int>  v(6,3);//6-element vector 3s
	
	//for(int i=0;i<4;i++)
	//{
	//	cout<<"enter an element to add to this vector"<<endl;
	//	cin>>ele;
	//	vec1.push_back(ele);
	//}
	
	//vec1.pop_back();//will remove last element
	//display(vec1);
	
	//insert will require iterator
	//vector<int> :: iterator iter=vec1.begin();//making an iterator and pointing it towards begin of the vector
	//vec1.insert(iter+1,5,566);//will copy 5 times 566 at position 2
	
	//vec1.insert(iter+1,84);
	
	display(vec1);
	display(vec2);
	display(vec3);
	display(v);
	return 0;
}

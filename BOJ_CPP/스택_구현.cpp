#include<iostream>

using namespace std;

typedef struct tagStack {
private:
	int STACK_MAX;
	int top;
	int* arr;

public:
	tagStack() {
		this->STACK_MAX = 3;
		this->top = 0;//현재 입력될 자리를 가리킴
		this->arr = new int[STACK_MAX];
	}

	void doubleLength() {
		int* tmp = new int[STACK_MAX *= 2];
		this->arr = tmp;
	}

	void push(int _num) {
		if (top == STACK_MAX) doubleLength();
		this->arr[top++]=_num;
	}

	void pop() {
		if (!this->isEmpty()) cout << this->arr[top--] << endl;
		else cout << "이미 빈 스택입니다." << endl;
	}

	bool isEmpty() {
		if(top==0)return true;
		else false;
	}
}STACK,stack;

int main() {

	//배열의 제일 뒤를 top으로 인덱스 지정 후 
	//값을 넣거나 뺄 때마다 index 이동
	stack s;
	s.push(3);
	s.pop();
	s.push(4);
	s.pop();
	s.push(5);
	s.pop();

	
}
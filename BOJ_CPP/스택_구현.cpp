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
		this->top = 0;//���� �Էµ� �ڸ��� ����Ŵ
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
		else cout << "�̹� �� �����Դϴ�." << endl;
	}

	bool isEmpty() {
		if(top==0)return true;
		else false;
	}
}STACK,stack;

int main() {

	//�迭�� ���� �ڸ� top���� �ε��� ���� �� 
	//���� �ְų� �� ������ index �̵�
	stack s;
	s.push(3);
	s.pop();
	s.push(4);
	s.pop();
	s.push(5);
	s.pop();

	
}
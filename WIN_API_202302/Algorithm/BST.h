#pragma once

struct Node
{
	Node() {}
	Node(int key) : key(key) {}

	Node* left = nullptr;
	Node* right = nullptr;
	Node* parent = nullptr;

	int key = -1;
	int data = 0; // 구색맞추기
};

class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();

	void Insert(int key);
	void PrintTree(Node* root);

	Node* Search(Node* root, int key);
	Node* Min(Node* root);
	Node* Max(Node* root);

	Node* Previous(Node* root);
	Node* Next(Node* root);
	
	void Replace(Node* node1, Node* node2); // node1 은 교체된 다음 삭제
	void Delete(Node* node); // 해당 노드 삭제

public:
	Node* _root = nullptr;
	
};
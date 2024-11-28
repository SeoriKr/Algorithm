#include <iostream>
#include <algorithm>
#include <vector>

#include <stack>

using namespace std;

vector<int> visited;
vector<vector<int>> relation;

void dfs(int node_parent)
{
	stack<int> stkNode;

	visited.push_back(node_parent);
	
	for (auto it = relation[node_parent].begin(); it != relation[node_parent].end(); it++)
	{
		stkNode.push(*it);
	}

	while (!stkNode.empty())
	{
		int node_child = stkNode.top();

		stkNode.pop();

		if (find(visited.begin(), visited.end(), node_child) == visited.end())
		{
			visited.push_back(node_child);
			dfs(node_child);
		}
	}

	cout << "Now I'm at " << node_parent << endl;

}

int main()
{
	relation = { { 1 }, { 0, 2, 5 }, { 1, 3, 4 }, { 2 }, { 2 }, { 1 } };

	dfs(0);
}

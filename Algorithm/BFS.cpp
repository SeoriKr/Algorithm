#include <iostream>
#include <algorithm>
#include <vector>

#include <queue>

using namespace std;
 
set<int> visited;
vector<vector<int>> relation;

void bfs(int node)
{
	queue<int> qNodes;

	qNodes.insert(node);
	visited.insert(node);

	while (!qNodes.empty())
	{
		int nodeNow = qNodes.front();
		qNodes.pop();

		cout << "Now I'm at the : " << nodeNow << endl;

		if (visited.find(nodeNow) == visited.end())
		{
			visited.insert(nodeNow);

			for (auto nearNode : relation[node])
			{
				qNodes.insert(nearNode);
			}
		}
	}
}

int main()
{
	relation = { { 1 }, { 0, 2, 5 }, { 1, 3, 4 }, { 2 }, { 2 }, { 1 } };

	bfs(0);
}
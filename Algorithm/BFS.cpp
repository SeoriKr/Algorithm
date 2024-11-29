#include "Utility.h"

#include <queue>

using namespace std;
 
set<int> visited;
vector<vector<int>> relation;

void bfs(int node)
{
	queue<int> qNodes;

	qNodes.push(node);

	while (!qNodes.empty())
	{
		int nodeNow = qNodes.front();
		qNodes.pop();

		cout << "Now I'm at the : " << nodeNow << endl;
		
		visited.insert(nodeNow);

		for (auto nearNode : relation[nodeNow])
		{
			if (visited.find(nearNode) == visited.end())
			{
				qNodes.push(nearNode);
			}
		}
	}
}

int main()
{
	relation = { { 1 }, { 0, 2, 5 }, { 1, 3, 4 }, { 2 }, { 2 }, { 1 } };

	bfs(0);
}
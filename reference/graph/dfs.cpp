#include <vector>

using namespace std;

// adj list version
vector<int> adj[1000000 + 1];
bool visited[1000000 + 1];

void dfs(int x)
{
  visited[x] = true;
  for (int nxt : adj[x])
  {
    if (!visited[nxt])
      dfs(nxt);
  }
}

// grid version
int r, c;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

char adj2[10000][10000];
bool visited2[10000][10000];

void dfs2(int x, int y)
{
  if (visited2[x][y])
    return;
  visited2[x][y] = true;
  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= r || ny >= c)
      continue;
    if (!visited2[nx][ny] && adj2[nx][ny] == 'H')
    {
      dfs2(nx, ny);
    }
  }
}
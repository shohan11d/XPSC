using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int adj_matrix[a][a];
  memset(adj_matrix, 0, sizeof(adj_matrix));
  while (b--) {
    int c, d;
    cin >> c >> d;
    adj_matrix[c - 1][d - 1] = 1;  // Convert 1-based to 0-based
    adj_matrix[d - 1][c - 1] = 1;  // Convert 1-based to 0-based
  }

  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      if(i==j)adj_matrix[i][j]=1;
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      cout << adj_matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
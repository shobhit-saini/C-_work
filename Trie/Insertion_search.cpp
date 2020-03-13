/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h> 
using namespace std; 
struct TrieNode
{
    struct TrieNode* children[26];
    bool isend;
};
struct TrieNode *getnode()
{
    int i;
    struct TrieNode *temp = new TrieNode;
    temp->isend = 0;
    for(i = 0; i < 26; i++)
        temp->children[i] = NULL;
    return temp;
}
void insert(struct TrieNode *root, string str)
{
    int i;
    struct TrieNode *search = root;
    for(i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a';
        if(!search->children[index])
        {
            search->children[index] = getnode();
        }
        search = search->children[index];
    }
    search->isend = 1;
}
bool search(struct TrieNode* root, string key)
{
    int i;
    struct TrieNode* search = root;
    for(i = 0; i < key.length(); i++)
    {
        int index = key[i]-'a';
        if(search->children[index])
            search = search->children[index];
        else
            return 0;
    }
    return (search->isend);
}
int main()
{
    int i;
  string arr[] = {"shobhit", "shoahit", "shobha", "shobs"};
  struct TrieNode *root = getnode();
  int n = sizeof(arr)/sizeof(arr[i]);
  for(i = 0; i < n; i++)
  {
      insert(root, arr[i]);
  }
  bool result;
  result = search(root, "shobs");
  cout << "shobs:" << result << "\n";
  result = search(root, "shobhita");
  cout << "shobhita:" << result << "\n";
    result = search(root, "shob");
    cout << "shob:" << result;
}

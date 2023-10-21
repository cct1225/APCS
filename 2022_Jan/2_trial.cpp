#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, m;
    vector<int> v, w, f;
    cin >> n >> m;
    vector<int> s(n), t(n), l(n, 0);

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    while(v.size() != 1)
    {
        if(n % 2 == 0) // Even rounds
        {
            w.clear();
            f.clear();
            for(int i = 0; i < n - 2; i += 2)
            {
                if(s[v[i]] * t[v[i]] >= s[v[i + 1]] * t[v[i + 1]])
                {
                    l[v[i + 1]]++;
                    s[v[i]] = s[v[i]] + (s[v[i + 1]] * t[v[i + 1]]) / t[v[i]] * 2;
                    t[v[i]] = t[v[i]] + (s[v[i + 1]] * t[v[i + 1]]) / s[v[i]] * 2;
                    s[v[i + 1]] = s[v[i + 1]] + s[v[i + 1]] / 2;
                    t[v[i + 1]] = t[v[i + 1]] + t[v[i + 1]] / 2;
                    w.push_back(v[i]);
                    f.push_back(v[i + 1]);
                }
                else
                {
                    l[v[i]]++;
                    s[v[i]] = s[v[i]] + s[v[i]] / 2;
                    t[v[i]] = t[v[i]] + t[v[i]] / 2;
                    s[v[i + 1]] = s[v[i + 1]] + (s[v[i]] * t[v[i]]) / t[v[i + 1]] * 2;
                    t[v[i + 1]] = t[v[i + 1]] + (s[v[i]] * t[v[i]]) / s[v[i + 1]] * 2;
                    w.push_back(v[i + 1]);
                    f.push_back(v[i]);
                }
            }

            // Handle elimination
            for(int i = 0; i < f.size(); i++)
            {
                if(l[f[i]] == m)
                {
                    f.erase(f.begin() + i);
                    i--; // Adjust loop variable after erasing
                }
            }

            v.clear();
            v.insert(v.end(), w.begin(), w.end());
            v.insert(v.end(), f.begin(), f.end());
        }
        else // Odd rounds
        {
            int left = v.back(); // Get the last element
            v.pop_back(); // Remove the last element
            for(int i = 0; i < n - 2; i += 2)
            {
                if(s[v[i]] * t[v[i]] >= s[v[i + 1]] * t[v[i + 1]])
                {
                    l[v[i + 1]]++;
                    s[v[i]] = s[v[i]] + (s[v[i + 1]] * t[v[i + 1]]) / t[v[i]] * 2;
                    t[v[i]] = t[v[i]] + (s[v[i + 1]] * t[v[i + 1]]) / s[v[i]] * 2;
                    s[v[i + 1]] = s[v[i + 1]] + s[v[i + 1]] / 2;
                    t[v[i + 1]] = t[v[i + 1]] + t[v[i + 1]] / 2;
                    if(l[v[i + 1]] == m)
                    {
                        v.push_back(v[i]);
                        n--;
                    }
                    else
                    {
                        v.push_back(v[i]);
                        v.push_back(v[i + 1]);
                    }
                    w.push_back(v[i]);
                    f.push_back(v[i + 1]);
                }
                else
                {
                    l[v[i]]++;
                    s[v[i]] = s[v[i]] + s[v[i]] / 2;
                    t[v[i]] = t[v[i]] + t[v[i]] / 2;
                    s[v[i + 1]] = s[v[i + 1]] + (s[v[i]] * t[v[i]]) / t[v[i + 1]] * 2;
                    t[v[i + 1]] = t[v[i + 1]] + (s[v[i]] * t[v[i]]) / s[v[i + 1]] * 2;
                    if(l[v[i]] == m)
                    {
                        v.push_back(v[i + 1]);
                        v.erase(v.begin() + i);
                        i--; // Adjust loop variable after erasing
                    }
                    else
                    {
                        v.push_back(v[i + 1]);
                        v.push_back(v[i]);
                    }
                    w.push_back(v[i + 1]);
                    f.push_back(v[i]);
                }
            }

            // Handle elimination
            for(int i = 0; i < f.size(); i++)
            {
                if(l[f[i]] == m)
                {
                    f.erase(f.begin() + i);
                    i--; // Adjust loop variable after erasing
                }
            }

            v.clear();
            v.insert(v.end(), w.begin(), w.end());
            v.push_back(left);
            v.insert(v.end(), f.begin(), f.end());
        }
    }

    cout << "Winner: " << v[0] << endl;

    return 0;
}

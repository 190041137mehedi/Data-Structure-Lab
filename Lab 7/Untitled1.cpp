#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    unordered_map <string,float> umap;
    umap["Mehedi"] = 1.23;
    umap["Agni"] = 4.56;
    umap["Rafit"] = 7.56;
    umap.insert(make_pair("Sakib", 4.44));
    cout << umap["Mehedi"] << endl;
    if(umap.find("Agni") == umap.end()) cout << "Not found" ;
    else cout << "Found" << endl;

    for(auto it: umap){
        cout << it.first << " " << it.second << endl;
    }
    cout << umap.size()<<endl;
    unordered_map <string, float> :: iterator it;
    for(it=umap.begin(); it!=umap().end; it++)
        cout << it->first << " " << it ->second << endl;
}

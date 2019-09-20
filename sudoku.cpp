#include<iostream>
using namespace std;
#define n 9

bool sor(int s[n][n], int x, int szam){
    for(int y=0;y<n;y++)
        if(s[x][y]==szam) return true;
    
    return false;
}

bool oszlop(int s[n][n], int y, int szam){
    for(int x=0;x<n;x++)
        if(s[x][y]==szam) return true;
    
    return false;
}

bool negyzet(int s[n][n], int startx, int starty, int szam){
    for(int x=startx;x<startx+3;x++)
        for(int y=starty;y<starty+3;y++)
            if(s[x][y]==szam) return true;
    
    return false;
}

bool ismeretlen(int s[n][n], int &x, int &y){
    for(x=0;x<n;x++)
        for(y=0;y<n;y++)
            if(!s[x][y]) return true; 
            
    return false;
}

bool lehet(int s[n][n], int x, int y, int szam){
    return !sor(s,x,szam) && !oszlop(s,y,szam) && !negyzet(s,x-x%3,y-y%3,szam) && !s[x][y];
}

bool solve(int s[n][n]){
    int x,y;
    if(!ismeretlen(s,x,y)) return true;
    for(int i=1;i<=n;i++){
        if(lehet(s,x,y,i)){
            s[x][y]=i;
            if(solve(s)) return true;
            s[x][y]=0;
        }
    }
    return false;
}

int main(){
    int s[n][n]={{0,0,0,0,0,0,0,0,0}};
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
			cin >> s[i][j];
			if(s[i][j]<0 || s[i][j]>9){cout << "ERROR"; return 0;}
		}
    }
    if(solve(s)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout << s[i][j] << ' ';
            cout << '\n';
        }
    }
    else cout << "ERROR";
    return 0;
}
//by: 4rt3xp0
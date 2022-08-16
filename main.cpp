#include <iostream>
#include <string>

using namespace std;

std::string findsubstr(string s, int k);
int CompterVoy(string chaine);


int main()
{
    std::string text,res;
    int ch;

    std::cout << "Entrer le texte                     : ";std::cin >> text;
    std::cout << "Entrer la longueur de la sous-chaine: ";std::cin >> ch;
    std::cout<<std::endl;
    res=findsubstr(text,ch);
    std::cout<<res<<std::endl;
    std::cout<<"La nombre de voyelle est: "<<CompterVoy(res)<<std::endl;
    return 0;
}

string findsubstr(string s, int k)
{
    int c=0;
    int maxim=0;
    int lon=s.size();
    std::string f;
    std::string sub;

    for(int i=0;i<=(lon-k);i++)
    {
        sub=s.substr(i,k);
        std::cout<<"La sous-chaine est: "<<sub<<std::endl;
        for(int j=0;j<k;j++)
        {
            if((sub.at(j)=='a')||(sub.at(j)=='e')||(sub.at(j)=='i')||(sub.at(j)=='o')||(sub.at(j)=='u'))
            {
                c++;
            }
            else if((sub.at(j)=='A')||(sub.at(j)=='E')||(sub.at(j)=='I')||(sub.at(j)=='O')||(sub.at(j)=='U'))
            {
                c++;
            }
            else
            {
                c+=0;
            }
        }
        if(maxim<c)
        {
            f=sub;
            maxim=c;
            c=0;
        }
    }
    return f;
}

int CompterVoy(string chaine)
{
    int co=0;

    for(int j=0;j<size(chaine);j++)
    {
        if((chaine.at(j)=='a')||(chaine.at(j)=='e')||(chaine.at(j)=='i')||(chaine.at(j)=='o')||(chaine.at(j)=='u'))
            {
                co++;
            }
            else if((chaine.at(j)=='A')||(chaine.at(j)=='E')||(chaine.at(j)=='I')||(chaine.at(j)=='O')||(chaine.at(j)=='U'))
            {
                co++;
            }
            else
            {
                continue;
            }
    }

    return co;
}

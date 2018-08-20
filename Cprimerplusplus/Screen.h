class Window_mgr;
{
    void clear();
};//声明需要友员函数

class Screen{
    friend void Windows_mgr::clear();
private:
    unsigned height=0,with=0;
    unsigned cursor=0;
    std::string content;
public:
    Screen()=default;
    Screen(unsigned ht,unsigned wd):height(ht),width(wd),content(ht *wd,' '){}
    Screen(unsigned ht,unsigned wd,char c):height(ht),width(wd),content(ht * wd,c){}
};//承认友员身份

void Window_mgr::clear()
{
    Screen myScreen(10,20,'X');
    cout<<"清理之前的内容是："<<endl;
    cout<<myScreen.contents<<end;
    myScreen.contents="";
    cout<<"清理之后的内容是:"<<endl;
    cout<<myScreen.contents<<end;
}

int main()
{
    Windows_mgr w;
    w.clear();
    return 0;
}

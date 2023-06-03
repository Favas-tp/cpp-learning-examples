#ifndef DATE_H
#define DATE_H
 
class Date
{
    public:
        Date( int,int,int );
        void print() const;
        ~Date();
    private:
        int month;
        int day;
        int year;

        int checkDay( int ) const;
}; 

#endif
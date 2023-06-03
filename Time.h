#ifndef TIME_H
#define TIME_H

class Time
{
    public:
       Time();
       void setTime( int, int, int );
       int &bad( int );
      int get( void );

       void printUniversal() ;
       void printStandard();
    private:
      const int n = 13;
       int hour;
       int minute;
       int second;   

};
#endif
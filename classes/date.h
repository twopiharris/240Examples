#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class date{
  private:
    int m_day, m_month, m_year;
    char *m_date;
  public:
    void set_date(int day, int month, int year);
    void set_string_date(const char *date);
}; // end class def

#endif // DATE_H_INCLUDED

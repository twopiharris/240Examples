#include <cstring>

class date {
  private:
    int m_day, m_month, m_year;
    char *m_date;
  public:
    void set_date(int day, int month, int year){
      m_day = day;
      m_month = month;
      m_year = year;
    } // end set_date;

    void set_string_date(const char *date){
      m_date = new char[50];
      strcpy(m_date, date);
    } // end set_string_date
}; // end class def

int main(){
  date today;
  date yesterday;
  today.set_date(9,9,2010);
  yesterday.set_string_date("Sep 8, 2010");

  return 0;
} // end main

#include <cstring>
#include "date.h"

void date::set_date(int day, int month, int year){
  m_day = day;
  m_month = month;
  m_year = year;
}

void date::set_string_date(const char *date){
  m_date = new char[50];
  strcpy(m_date, date);
}

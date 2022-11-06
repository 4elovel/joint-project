#pragma once

#include <iostream>
#include <string>
#include "Card.h"
#include "Pocket.h"

class User : public Card, public Pocket
{
public:

  User();

  virtual ~User();

protected:

  unsigned long int u_id;
  std::string u_name;
  unsigned short int u_age;
  std::string u_main_currency;
  std::string u_login;
  std::string u_gmail;
  std::string u_password;
  std::string u_secret_question;
  std::string u_secret_answer;

  void setU_id(unsigned long int value)
  {
    u_id = value;
  }

  unsigned long int getU_id()
  {
    return u_id;
  }

  void setU_name(std::string value)
  {
    u_name = value;
  }

  std::string getU_name()
  {
    return u_name;
  }

  void setU_age(unsigned short int value)
  {
    u_age = value;
  }

  unsigned short int getU_age()
  {
    return u_age;
  }

  void setU_main_currency(std::string value)
  {
    u_main_currency = value;
  }

  std::string getU_main_currency()
  {
    return u_main_currency;
  }

  void setU_login(std::string value)
  {
    u_login = value;
  }

  std::string getU_login()
  {
    return u_login;
  }

  void setU_gmail(std::string value)
  {
    u_gmail = value;
  }

  std::string getU_gmail()
  {
    return u_gmail;
  }

  void setU_password(std::string value)
  {
    u_password = value;
  }

  std::string getU_password()
  {
    return u_password;
  }

  void setU_secret_question(std::string value)
  {
    u_secret_question = value;
  }

  std::string getU_secret_question()
  {
    return u_secret_question;
  }

  void setU_secret_answer(std::string value)
  {
    u_secret_answer = value;
  }

  std::string getU_secret_answer()
  {
    return u_secret_answer;
  }

  void u_ch_pass(std::string old_pass, std::string new_pass);
      void u_ch_gmail(std::string pass, std::string new_gmail);
      std::string u_pass_rec();
};



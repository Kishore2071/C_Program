#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

void passcheck();
int getpasswordvisiblility();
void getpassword();
int uppercase();
int lowercase();
int number();
int specialcharacter();
int Sequence();


//variable declartion
char password[100];
char passwordvisibleinput[100];
char warning[100];
int passwordvisible = 1;
int run=1;
int i;

//main function 
int main() {
  printf("\n\n\t\tWelcome to the password checker\n\n\n");
  while (run==1){
    strcpy(warning,"");
    if (getpasswordvisiblility()) {
      strcat(warning, "warning:\n\n");
      getpassword();
      passcheck();
      uppercase();
      
      
    }
    
  }
    
} 

void passcheck(){
  if(strlen(password) < 8) {
    printf("\n\n # ---- Very Weak\n\n");
    strcat(warning, "--> Password Length is lesser than 8\n");
  }

  else if (!uppercase() || !lowercase() || !number() || !specialcharacter())
  printf("\n\n# ---- Weak\n\n");
  else if (Sequence(1) || Sequence(0))
  printf("\n\n# ---- Average\n\n");
  else {
    printf("\n\n# ---- Very Strong\n\n");
    exit(1);
  }
}


int getpasswordvisiblility(){
  printf("visible the password in console ? (yes/no)");
  scanf("%s",passwordvisibleinput);
  if (strcmp(passwordvisibleinput,"yes")==0){
    passwordvisible=1;
    return 1;
  }
  else if (strcmp(passwordvisibleinput,"no")==0){
    passwordvisible=0;
    return 1;
  }
  else
  {
    printf("\n\ninvalid input\n\n");
    exit(0);
    
   
  }  
    
}

void getpassword(){
  if (passwordvisible){
    printf("enter the password :");
    scanf("%s",password);
  }
  else
  {
    char *password = getpass("\nenter the password");
  }
  
}
int uppercase(){
  int upper=0;
  for(int i=0; i<=strlen(password); i++){
    if(isupper(password[i])){
      upper=1;
      break;
    }

  }
  if(!upper){
    strcat(warning,"--> Upper case letteris missing\n");
  }
}
int lowercase() {
  int lower = 0;
  for (int i=0; i <= strlen(password); i++) {
    if(islower(password[i])) {
      lower = 1;
      break;
      }
  }
  if(!lower)
  strcat(warning, "--> Lower case letter is missing\n");
  return lower;
}

int number(){
  int num=0;
  for ( i = 0; i <=strlen(password); i++)
  {
    if(isdigit(password[i])){
      num=1;
      break;
    }
  }
  if(!num)
  strcat(warning,"--> Number is missing\n");
  return num;
  
}
int specialcharacter() {
  int special_character= 0;
  for (int i=0; i <= strlen(password); i++) {
    int ascii = (int)password[i];
    if(
        ( ascii >= 32 && ascii <= 47 ) ||
        ( ascii >= 58 && ascii <= 64 ) ||
        ( ascii >= 91 && ascii <= 96 ) ||
        ( ascii >= 123 && ascii <= 126 )) {
          special_character = 1;
          break;
          }
        }
        if(!special_character)
        strcat(warning, "--> Speical character is missing\n");
        return special_character;
}

int Sequence(int onlyDigit) {
  int sequence2 = 0, sequence3 = 0, is_sequence = 0, old_number;
  for (int i=1; i <= strlen(password); i++) {
    if(onlyDigit == isdigit(password[i]) || onlyDigit == 0) {
      if(sequence3) {
        is_sequence = 1;
        strcat(warning, "--> Avoid Sequence of Numbers or characters\n");
        break;
        }
        old_number = (int) password[i-1];
        if(old_number - (int)password[i] == 1 ||
          old_number - (int)password[i] == -1) {
            if(sequence2 == 1) {
              sequence3 = 1;
              }
              else {
                sequence2 = 1;
                }
           }
       }
      }
        return is_sequence;
}

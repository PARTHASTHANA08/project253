//  including ezbutton module (easy button module)
#include<ezButton.h>

//  connect both buttons to pin 4 and 22
const int button1 = 4;
const int button2 = 22;

//  defining a variable to track count of button press
int count = 0;

//  creating button objects
ezButton push_button1(button1);
ezButton push_button2(button2);

void setup()
{
  //  change the baud rate to 9600 if required
  Serial.begin(115200);
  
  //  set debounce time for both the button objects
  push_button1.setDebounceTime(50);  
  push_button2.setDebounceTime(50);

}

void loop()
{
  //  loop both the push_buttons : continuous polling
   push_button1.loop();
    if(push_button1.isPressed()){
      Serial.println("The Button Is Pressed");
    }


  //  check if push_button1 is pressed : store the button push count into count variable
  if (push_button1.isPressed())
  {
   count += 1; 
   Serial.print("Number : ");
   Serial.println(count);
  }

  //  else if push_button2 is pressed : print the table of the number stored in variable count
  else if (push_button2.isPressed())
  {
    //  draft a loop to print the table
    
    Serial.print(count*1);
    Serial.print(count*2); 
    Serial.print(count*3); 
    Serial.print(count*4); 
    Serial.print(count*5); 
    Serial.print(count*6); 
    Serial.print(count*7); 
    Serial.print(count*8); 
    Serial.print(count*9); 
    Serial.print(count*10); 
    count = 0;
    //  reset the number to 0, once table is printed
  }
 
}

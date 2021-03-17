#include <cstdlib>
#include <iostream>
#include <cstring>
#include <exception>
#include <string>
#include <cassert>
#include <stdexcept>
#include <array>
#include "snowman.hpp"
using namespace std;
namespace ariel{
    string snowman(int in){
        /*first of all we check if the number that we got is small then "11111111" or he biger  then
          the "44444444" ,so if he is not fall here , we can continue   */
        if( in >  Im_the_max||in < Im_the_min ) {
            throw std ::out_of_range("Invalid Input");
        }
       /*we make an array that we put inside the numbers from the user, to get the them after , with a string */
        array<int,the_tool_box>arr= {0};
        /* we make for loop the get the numbers inside the array , we  doing %10 , to get the last number
           then we put them from the end to the start , and the divide by 10 to go to next number*/
        for(int i = 0; i<the_size_of; i++){
            int temp = in%num;
           /* here we check each number to see if we get number smaller then 1 or bigger then 4 , if we get this the program will trow exception*/
            if (temp<1||temp>4){
               throw std ::out_of_range("Invalid Input");}
            arr.at(put_in_place-i) = temp;
            in = in/num;
        }
        /* now we make the option for every number that we got. 
           then we choose from this array what to put to build the snow man */
            //HHHHH
            //HHHHH
           //XU(LNR)YU
           //XD(TTT)YD
            //(BBB)
        const array<string,option> H ={" ", "      \n _===_", "  ___ \n .....", "_ \n /_\\", " ___  \n (_*_)"};
        const array<string,option> N ={"",",", ".", "_", " "};
        const array<string,option> L ={"","." ,"o" ,"O" ,"-" };
        const array<string,option>R ={"","." ,"o","O" ,"-" };
        const array<string,option>XU ={""," " ,"\\" ," " ," " };
        const array<string,option>XD ={"","<" ," " ,"/" ," " };
        const array<string,option>YU ={""," " ,"/" ," " ," " };
        const array<string,option>YD = {"",">" ," " ,"\\" ," " };
        const array<string,option>T = {""," : " ,"] [" ,"> <" ,"   " };
        const array<string,option>B = {"" , " : " ,"\" \"" ,"___" ,"   " };
        /* here we dvide the build for 4 parst , 
        the top that make the hat
        the up that build the head include eye`s  , nose and arms if they go up
        the down that make the troso and the arms if they go down 
        the buttom that make the buttom part of the snow man*/ 
        string top = H.at(arr.at(head));// _===_
        string up = XU.at(arr.at(left_arm)) +"(" + L.at(arr.at(left_eye)) +N.at(arr.at(nose)) + R.at(arr.at(right_eye)) + ")" + YU.at(arr.at(right_arm)); //(.,.)
        string down = XD.at(arr.at(left_arm))+"("+ T.at(arr.at(torso))+")" +YD.at(arr.at(right_arm));// ( : )
        string buttom = " (" + B.at(arr.at(bot))+ ")";//( : )
        return top +"\n" + up + "\n" + down +"\n" + buttom;
    }
}
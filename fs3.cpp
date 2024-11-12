#include <iostream>

void swap(float* px, float* py){
		float t = (*py);
		(*py)=(*px);
		(*px)=t;}
        
int main (){
		float a=84.0;
		float b=-72.0;
        float* pa= &a;
        float* pb= &b;
		swap(pa,pb);
		std::cout << a << " et " << b << std::endl;
        return 0;}

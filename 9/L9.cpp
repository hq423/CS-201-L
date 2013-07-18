int main() 

{ 




Animal *animal; 




    string speciesName="human"; 

Human human(speciesName); 




animal = &human; 




animal->Action(); 




speciesName="dog"; 

Dog dog(speciesName); 




animal=& dog; 




animal->Action(); 




system("pause"); 




return 0; 

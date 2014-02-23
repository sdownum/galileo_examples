
char cpuid_vendor[32];

void cpuid() 
{
	asm("mov $0, %eax\n"
		"cpuid\n"
		"mov %ebx, (cpuid_vendor)\n"
		"mov %edx, (cpuid_vendor + 4)\n"
		"mov %ecx, (cpuid_vendor + 8)");
        Serial.println(cpuid_vendor); 
        return; 
}

void setup() {
  // put your setup code here, to run once:
  char *msg = "Bye";
  
  Serial.begin(9600);
  cpuid();
  Serial.println(msg);
}

void loop() {
  
  // put your main code here, to run repeatedly: 
  
}

all: main.o Galilean_Refractor.o Newtonian_Reflector.o Planet.o Gas_Giant.o Rocky_Planet.o Dwarf_Planet.o
	g++ main.o Galilean_Refractor.o Newtonian_Reflector.o Planet.o Gas_Giant.o Rocky_Planet.o Dwarf_Planet.o -o myProg

main.o: 
	g++ -c main.cpp

main-test.o:
	g++ -c main-test.cpp

main_unit_tests.o:
	g++ -c main_unit_tests.cpp

Galilean_Refractor.o:
	g++ -c Galilean_Refractor.cpp

Newtonian_Reflector.o:
	g++ -c Newtonian_Reflector.cpp

Planet.o:
	g++ -c Planet.cpp

Gas_Giant.o:
	g++ -c Gas_Giant.cpp

Rocky_Planet.o:
	g++ -c Rocky_Planet.cpp

Dwarf_Planet.o:
	g++ -c Dwarf_Planet.cpp



clean:
	rm *.o

efficiency_test: main.o Galilean_Refractor.o Newtonian_Reflector.o Planet.o Gas_Giant.o Rocky_Planet.o Dwarf_Planet.o
	g++ main.o Galilean_Refractor.o Newtonian_Reflector.o Planet.o Gas_Giant.o Rocky_Planet.o Dwarf_Planet.o -o effTesting
	./effTesting < input.txt
	@echo "Running test: efficiency"



testing: main.o Galilean_Refractor.o Newtonian_Reflector.o Planet.o Gas_Giant.o Rocky_Planet.o Dwarf_Planet.o
	g++ main.o Galilean_Refractor.o Newtonian_Reflector.o Planet.o Gas_Giant.o Rocky_Planet.o Dwarf_Planet.o -o testing
	
	@echo " "
	./testing < inputWrong.txt > outputWrong.txt
	diff outputWrong.txt outputWrong-exp.txt
	@echo "Wrong input test passed!"
	@echo " "

	./testing < inputDwarf.txt > outputDwarf.txt
	diff outputDwarf.txt outputDwarf-exp.txt
	@echo "Dwarf planet test passed!"
	@echo " "

	./testing < inputRocky.txt > outputRocky.txt
	diff outputRocky.txt outputRocky-exp.txt
	@echo "Rocky planet test passed!"
	@echo " "

	./testing < inputGas.txt > outputGas.txt
	diff outputGas.txt outputGas-exp.txt
	@echo "Gas giant planet test passed!"
	@echo " "



	

unit_test: main_unit_tests.o Galilean_Refractor.o Newtonian_Reflector.o Planet.o Gas_Giant.o Rocky_Planet.o Dwarf_Planet.o
	g++ main_unit_tests.o Galilean_Refractor.o Newtonian_Reflector.o Planet.o Gas_Giant.o Rocky_Planet.o Dwarf_Planet.o -o unit_test
	./unit_test



# IoTSensorsLibrary_ttcn3
Library to read and control various IoT sensors, written in TTCN-3 (for the
Eclipse Titan tool)

TTCN-3 and Titan (https://projects.eclipse.org/projects/tools.titan) are more
and more used in IoT testing.
(see https://projects.eclipse.org/projects/technology.iottestware
     https://github.com/IoTKETI/oneM2MTester
     http://www.eglobalmark.com/armour/
)
TTCN-3, as an imperative (test) language - beyond simulating IoT devices - is
also suitable to implement real devices e.g.on Raspberry Pi (2, 3, Zero ...).
What is it good for? For at least two purposes:
1) Easy to manage and control a pool of real devices in field or near-to-field
   (radio) conditions. Number and types of devices is determined by runtime con-
   figuration and is downloaded to the devices (to connected Pis) real time. I.e.
   the same HW and tools can be used to "simulate" the pool of devices of an envi-
   ronmental monitoring system and in the following test session smart parking.
   Pi can execute several different device behaviours in parellel.
2) When testing an IoT system, read and control of real sensors give access to
   real field data, i.e. to check not only the protocol and communication beha-
   vior of the system, but also the correctness of the data submitted by the de-
   vices.

Content of the directories:
- src: library code to control sensors; these are the modules you need to import
       to your own code (NOTE the @status of the functions used!)
- test: test cases used to verify the code in the src directory; they are also 
        examples on using the library functions;
- config: contans runtime configuration files to execute the tests; also useful
          as examples when configuring your own code.
- bin: directory to build and execute sensor library code tests. DON'T FORGET
       TO EMPTY IT BEFORE COMITTING ANY CODE! ->
       cd bin && rm * && cd ..
          
How to run the test code in this library? See HowToExecute.txt!

Let the FUN be with you!

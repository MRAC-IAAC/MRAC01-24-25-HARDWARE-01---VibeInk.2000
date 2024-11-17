# MRAC01(24/25): HARDWARE 01 - VibeInk.2000
This Project was part of the Hardware I Module in the MRAC1 course, it ran in conjunction with the Studio I module. The goal was to design an end effector for the ABB 6620 robotic arm, the end effector needed to include an Arduino controlled actuator. The purpose of the end effector is to spill.

## INDEX 
- [OVERVIEW](#overview)
- [REQUIREMENTS](#requirements)
- [ARDUINO](#arduino)
- [DEMO](#demo)
- [AUTHORS](#authors)
- [REFERNCES](#references)
  
## OVERVIEW

### IMPETUS

This project drew its key inspiration from sound induced standing waves in fluid jets. We aimed to create a device that can similarly induce standing waves in a fluid jet. In this case the fluid jet being black acrylic paint. 

### STRATEGY

There were two strategies that we followed in order to introduce a standing wave into the fluid jet. The first strategy is to hit the tube which is channelling the fluid jet at a specific rate in order to manually introduce a frequency. The second strategy is to change the centre of mass of the fluid channelling tube, through rotating imbalance.
This excited fluid jet is then moved along a path at a specific speed and height through an ABB6620 robotic arm. The outcome is captured a by a page fixed horizontally on the floor.

## REQUIREMENTS

![exploted](https://github.com/user-attachments/assets/b8b13584-ed41-4a3a-a26f-5ea651172d89)

### SOFTWARE
- Rhino (3D Modelling Software)
- Grasshopper (Toolpath Design and I/O)
- Arduino IDE (End Effector Actuation)

### HARDWARE
- Laser Cutter
- 3D Printer
- Industrial Robotic Arm (preferrebaly 6 axis)

### LIST OF MATERIALS

The follwoing is a detailed list of all the components used to manufactur the end effector.

[List of Materials.pdf](https://github.com/user-attachments/files/17791006/List.of.Materials.pdf)


## ARDUINO

This is a circuit diagram showing the manner in which the Arduino Diagrtam is wired.

[Circuit Diagram.pdf](https://github.com/user-attachments/files/17791009/Circuit.Diagram.pdf)

## DEMO

### END EFFECTOR


![DSCF4351-min](https://github.com/user-attachments/assets/dd8fe926-c866-4d6d-8291-be1a1f8a35b0)

![DSCF4341-min](https://github.com/user-attachments/assets/8fa318b5-6347-4047-b84e-59d8d95682fb)

![DSCF4369-min](https://github.com/user-attachments/assets/6d4abbea-2b2d-4caa-a9c8-de7064ca0b5f)


### PAINTINGS


![IMG_6410-min](https://github.com/user-attachments/assets/5a807d86-840e-4c5e-bbc0-316a9f65783a)

![IMG_6570-min](https://github.com/user-attachments/assets/bdc68eb8-fe5c-4d04-978b-eb34f1158df0)

![IMG_6553](https://github.com/user-attachments/assets/853bb007-abc2-4c56-beba-7da433562e86)


## AUTHORS

- Nacho Fuentes-Cantillana Monereo   https://es.linkedin.com/in/nacho-monereo
- Neil Trouw   https://za.linkedin.com/in/neil-trouw-832755262
- Krystene Kontos   https://ca.linkedin.com/in/krystyne-athanasia-kontos

## REFERENCES

- Cantilever beam vibration mode shape functions | download scientific diagram. Available at: https://www.researchgate.net/figure/Cantilever-beam-vibration-mode-shape-functions_fig1_261145369 (Accessed: 11 November 2024).
- byjgagneastro, P. (2020) The physics of kettle streams, Coffee ad Astra. Available at: https://coffeeadastra.com/2020/05/23/the-physics-of-kettle-streams/ (Accessed: 11 November 2024).
- Figure 2. (a) the sinusoidal perturbation applied on a parameter P, and... Available at: https://www.researchgate.net/figure/a-The-sinusoidal-perturbation-applied-on-a-parameter-p-and-the-square-wave-function_fig2_271724917 (Accessed: 11 November 2024).
- Portillo, D. https://www.researchgate.net/figure/Oscillatory-fluid-motion-within-a-fluidic-oscillator-at-various-phase-angles-PH_fig1_353538440


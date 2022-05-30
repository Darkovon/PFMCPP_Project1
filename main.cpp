#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: baby
//  action 1: the baby cries
baby.cry();
//  action 2: the baby grabs
baby.grab();
//  action 3: the baby eats
baby.eat();
//  2)
//  Noun: bird
//  action 1: the bird flies
bird.fly();
//  action 2: the bird sleeps
bird.sleep();
//  action 3: the bird pecks
bird.peck();
//  3)
//  Noun: bitwig
//  action 1:  bitwig checks the contents of custom VST folder
bitwig.customVstFolderContent();
//  action 2: bitwig deactivates the audio engine upon CPU overload
bitwig.deactivateAudioEngine();
//  action 3: bitwig sleeps a VST when not in use
bitwig.sleepVST();
//  4)
//  Noun: lightsaber
//  action 1: the lightsaber cuts
lightsaber.cut();
//  action 2: the lightsaber deflects a blaster bolt
lightsaber.blasterDeflect();
//  action 3: the lightsaber changes to a random color
lightsaber.randomColor();
//  5)
//  Noun: iphone
//  action 1: the iphone takes a picture
iphone.takePicture();
//  action 2: the iphone sends a text
iphone.sendText();
//  action 3: the iphone updates its current GPS location
iphone.gpsLocationUpdate();
//  6)
//  Noun: death star
//  action 1: the death star enters hyperspace
deathStar.enterHyperspace();
//  action 2: the death star fires on its current target
deathStar.fire();
//  action 3: the death star activates its tractor beam
deathStar.activateTractorBeam();
//  7)
//  Noun: Jim
//  action 1: Jim sells paper
jim.sellPaper();
//  action 2: Jim pranks Dwight
jim.prankDwight();
//  action 3: Jim makes a phone call
jim.call();
//  8)
//  Noun: matkat
//  action 1: matkat reviews the most recent replit commit
matkat.replitReview();
//  action 2: matkat creates a new project
matkat.projectCreate();
//  action 3: matkat reads through slack notifications
matkat.readSlack();
//  9)
//  Noun: spider
//  action 1: the spider emits an aura of evilness
spider.evilAura();
//  action 2: the spider spontaneously combusts
spider.combust();
//  action 3: the spider leaves Skyler alone
spider.peaceful();
//  10)
//  Noun: red bull
//  action 1: red bull gives you wings
redBull.giveWings();
//  action 2: red bull wakes you up
redBull.goodMorning();
//  action 3: red bull helps you focus
redBull.increaseFocus();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    char choice; //This will hold a single character, representing one of the user's choice.
    bool quit = false; //If quit is true, then the program ends.
    do {
        bool alive = true, fight = false, hamster = false,loop=false; //Alive will send the user to choose between continue or ending the program if set to true. Their character doesn't necessarly need to be dead.
        std::cout << "||TEXT ADVENTURE #3,493,728,892||\nImagine, that you will, you are chilling in your house.\nYou are sitting on your comfortable beige sofa.\nWhile you are staring out into space, you get an idea to do something.\n";
        do {
            std::cout << "The ideas are: A) Look at your phone, B) Get up from the sofa, C) Take a nap, or D) Nothing.\nWhat do plan to do?\n";
            std::cin >> choice;
            switch (choice)
            {
            case 'A': //User looks at their phone
                loop = false;
                do
                {
                    std::cout << "While you are looking at your phone, you see a message pop up saying, looking behind you.\nWill you A) Look or B) Not Look?\n";
                    std::cin >> choice;
                    switch (choice)
                    {
                    case 'A': //User looks behind them
                        loop = false;
                        do {
                            std::cout << "You look and see a big man standing behind your sofa, even though it is against a wall.\nHe flips the sofa and after you land, he challeges you to a fight.\nWill you? A) Yes or B) No\n";
                            std::cin >> choice;
                            switch (choice)
                            {
                            case 'A': //Challenge accepted!
                                loop = false;
                                fight = true;
                                break;
                            case 'B': //Pls don't hurt me!
                                loop = false;
                                std::cout << "You choose not to fight him. So he pummels you into the ground\nYou are dead\n";
                                alive = false;
                                break;
                            default:
                                loop = true;
                                std::cout << "Invalid option chosen.\n";
                                break;
                            }
                        } while (loop);
                        break;
                    case 'B': //User ignores text
                        loop = false;
                        std::cout << "You decide to ignore the message and keep scrolling on your phone.\nA big meaty hand grabs your head and squishes it.\nYou are dead\n";
                        alive = false;
                        break;
                    default:
                        loop = true;
                        std::cout << "Invalid option chosen.\n";
                        break;
                    }
                } while (loop);
                break;
            case 'B': //User gets up from sofa
                loop = false;
                do {
                    std::cout << "You get up from the couch. What will you do now?\nWill you A) Go get a CocaCola, B) Look out the window, or C) Sit back down.\n";
                    std::cin >> choice;
                    switch (choice)
                    {
                    case 'A'://User gets a CocaCola
                        loop = false;
                        do {
                            std::cout << "You go to the fridge and decide to drink some CocaCola. Someone said it tasted good.\nSuddenly a huge man emerges from behind the sofa, even thought it was behind a wall.\nHe challenges you to a fight.\nWill you? A) Yes or B) No\n";
                            std::cin >> choice;
                            switch (choice) //Challenge Accepted
                            {
                            case 'A':
                                loop = false;
                                fight = true;
                                break;
                            case 'B'://Pls don't hurt me
                                loop = false;
                                std::cout << "You choose not to fight him. So he pummels you into the ground\nYou are dead\n";
                                alive = false;
                                break;
                            default:
                                loop = true;
                                std::cout << "Invalid option chosen.\n";
                                break;
                            }
                        } while (loop);
                        break;
                    case 'B'://User looks out the window
                        loop = false;
                        std::cout << "You look out your window. You hear the birds singing and see that the flowers are blooming.\nWhen suddenly you see an airplane flying down towards you. You scream right as it crashes into your house.\nYou are dead.\n";
                        alive = false;
                        break;
                    case 'C'://User sits back down
                        loop = false;
                        do {
                            std::cout << "You decide you are too cool to go anywhere, so you sit back down and continue to stare into space.\n\nWhen suddenly a man throws you and your sofa across the room. He challenges you to a fight.\nWill you? A) Yes or B) No\n";
                            std::cin >> choice;
                            switch (choice)
                            {
                            case 'A'://Challenge Accepted
                                loop = false;
                                fight = true;
                                break;
                            case 'B'://Pls don't hurt me
                                loop = false;
                                std::cout << "You choose not to fight him. So he pummels you into the ground\nYou are dead\n";
                                alive = false;
                                break;
                            default:
                                loop = true;
                                std::cout << "Invalid option chosen.\n";
                                break;
                            }
                        } while (loop);
                        break;
                    default:
                        loop = true;
                        std::cout << "Invalid option chosen.\n";
                        break;
                    }
                } while (loop);
                break;
            case 'C'://Take a nap
                do {
                    std::cout << "You decide to take a little nap.\nWhile you're dreaming, you find yourself lost in a dark forest.You see three paths ahead of you.\n";
                    std::cout << "To the northwest, a path leading to a rocky cliffside.\nTo the north, a path leading to a pitch black void surrounded by crooked and prickly trees.\nTo the east, a path leading to a rocky shore.\nWhich way will you go ? \nA) Northwest, B) North, C) Northeast, D) The way you came or E) Up\n";
                    std::cin >> choice;
                    switch (choice)
                    {
                    case 'A'://Go Northwest
                        loop = false;
                        std::cout << "You decide to go northwest and scale the rocky cliff.\n";
                        std::cout << "After scaling the face of the cliff for quite sometime, you finally get to the top when your reciever goes off.\n";
                        std::cout << "You answer, telling the person on the other end you've reached the inflitration point. He responds \"Snake... Right on time as always.\"\n\"Let's get started... Commencing Operation Intrude F014.\"\n";
                        std::cout << "The voice on the other end says. \"Let's go over this one more time. Your mission is to infiltrate Zanzibar Land and rescue the kidnapped Czech biologist, Dr. Kio Marv.\".\n\"Snake, we've provided you with a new anti-personnel sensor. Try switching it on.\".\n";
                        std::cout << "So you switch it on and it explodes. You shoot up from that dream.\n";
                        break;
                    case 'B'://Go North
                        loop = false;
                        do {
                            std::cout << "You decide to go north, into the tunnel of darkness. After you walk for sometime, you look around and see nothing but darkness. You try reaching out to feel a tree but you feel nothing.\nYou start to feel scared as you really have no idea where you are.\n";
                            std::cout << "Suddenly a giant pair of red cat-like eyes appear in front of you. What will you do?\nA) Scream at the top of your lungs or B) Stand there, frozen in terror\n";
                            std::cin >> choice;
                            switch (choice)
                            {
                            case 'A'://Scream
                                loop = false;
                                do {
                                    std::cout << "You proceed to scream at the top of your lungs. The pairs of eyes close sideways before you feel like something as grabbed you.\nWhen you wake up, you find a big man is shaking you violently. You manage to break out of his grabs and get off the couch. He challenges you to a fight.\nWill you? A) Yes or B) No\n";
                                    std::cin >> choice;
                                    switch (choice)
                                    {
                                    case 'A'://Challenge Accepted
                                        loop = false;
                                        fight = true;
                                        break;
                                    case 'B'://Pls don't hurt me
                                        loop = false;
                                        std::cout << "You choose not to fight him. So he pummels you into the ground\nYou are dead\n";
                                        alive = false;
                                        break;
                                    default:
                                        loop = true;
                                        std::cout << "Invalid option chosen.\n";
                                        break;
                                    }
                                } while (loop);
                                break;
                            case 'B'://Stand
                                loop = false;
                                std::cout << "You just stand there, completely overwelmed with terror. The pairs of eyes, blink sideways and stare at you some more, before it disappers.\nYou wake up from your nap, feeling a little unsettled.\n";
                                break;
                            default:
                                loop = true;
                                std::cout << "Invalid option chosen.\n";
                                break;
                            }
                        } while (loop);
                        break;
                    case 'C'://Go East
                        loop = false;
                        do {
                            std::cout << "You head northeast towards the rocky shore. As the waves, crash against the rocks, you decide to go into the water.\nAs you swim further away from shore, you begin to see a various of aquatic wildlife. You approach a coral reef and you hear a pinging sound coming from the cave the reef is surrounding.\nWill you A) Swim into it, or B) Keep swimming.\n";
                            std::cin >> choice;
                            switch (choice)
                            {
                            case 'A'://Follow
                                loop = false;
                                std::cout << "You decide to swim into the cave but as you swim deeper, the pinging sound begins to sound quietier and you begin to hear a ghostly choir.\nIt's starts getting louder the further in you swim, until all you can hear are their wails and are surrounded by darkness.\nIt becomes too spooky for you, so you wake up from your nap";
                                break;
                            case 'B'://Igrore
                                loop = false;
                                do {
                                    std::cout << "You decide to ignore it and keep swimming. Despite you swimming away from the reef, the pinging sound keeps getting louder and faster, until it's a long high pitched sound.\nYou wonder where it's coming from and soon you see a cruise missle speeding towards you.\nJust as you're about to be hit, you feel something hit you in the face and you wake up to find yourself flying towards the wall in your house.\nYou see a big man standing where your sofa used to be. He challenges you to a fight.\nWill you? A) Yes or B) No\n";
                                    std::cin >> choice;
                                    switch (choice)
                                    {
                                    case 'A'://Challenge Accepted
                                        loop = false;
                                        fight = true;
                                        break;
                                    case 'B'://Pls don't hurt me
                                        loop = false;
                                        std::cout << "You choose not to fight him. So he pummels you into the ground\nYou are dead\n";
                                        alive = false;
                                        break;
                                    default:
                                        loop = true;
                                        std::cout << "Invalid option chosen.\n";
                                        break;
                                    }
                                } while (loop);
                                break;
                            default:
                                std::cout << "Invalid option chosen.\n";
                                break;
                            }
                        } while (loop);
                        break;
                    case 'D'://Turn Back
                        loop = false;
                        std::cout << "You decide to just go back the way you came. As you are walking, you start to hear a humming noise. You begin to look around. You don't see anything, so you keep on walking.\nThe noise starting getting louder, so you look around again. You still don't see anything.\nThat's when a plane from the Hamster Airforce divebombs you.\nYou then wake up to find a hamster on your chest.\n";
                        hamster = true;
                        break;
                    case 'E'://Ascend
                        loop = false;
                        std::cout << "You decide that it's time to go home because your planet needs you.\nYou float upwards, both in your dream and in real life.\nOh, and you died on the way back to your home planet.\n";
                        alive = false;
                        break;
                    default:
                        loop = true;
                        std::cout << "Invalid option chosen.\n";
                        break;
                    }
                } while (loop);
                break;
            case 'D'://Nothing
                loop = false;
                std::cout << "You continue to sit on your sofa, staring off into space.\n\n\n\n\n\n\n\nThis is boring.\nSo, a giant meteor crashes down on your house and you die. The end.\n";
                alive = false;
                break;
            default:
                loop = true;
                std::cout << "Invalid option chosen.\n";
                break;
            }
        }while (loop);
        //--------------------You fight the man--------------------------------
        if (fight)
        {
            std::cout << "You accept the man's challenge to a fight. He let's you make the first move.\nWhat will you do?\nA) Throw a wild haymaker, B)Use CocaCola, C) Summon Meteor, or D) Defend\n";
            std::cin >> choice;
            switch (choice)
            {
            case 'A'://Attack
                std::cout << "You attempt a wild haymaker. He sees it coming from a mile away and dodges it. You miss. He then smashes your head into the ground.\nYou are dead\n";
                alive = false;
                break;
            case 'B'://Use Item
                std::cout << "You quickly run to the refridgerator and put out a can of CocaCola. You shake it up really good and then open the can facing towards him.\nYou end up flying around the house and crashing into him. You end up sending him flying out the window.You've won the fight.\n As you stand around wondering what to do next, you see a little hamster running around your house and decide to pick it up.\n";
                hamster = true;
                break;
            case 'C'://Use Magic Attack
                std::cout << "You proceed to summon a meteor to crush him. You end up summoning a massive meteor and it crushes your house with both of you inside.\nYou are dead\n";
                alive = false;
                break;
            case 'D'://Defend
                std::cout << "You decide to waste your first strike by holding your arms in a blocking position to defend yourself against his attack. He proceeds to grab your sofa and hurl it at you.\nYou are dead\n";
                alive = false;
                break;
            default://Nothing
                std::cout << "You are unsure what to do in this fight, so you just kind of stand there. He takes advantage of your mis-input and throws a knife at your head. It cleves your skull.\nYou are dead.\n";
                alive = false;
                break;
            }
        }
        //--------------You have a hamster----------------------------------
        else if (hamster)
        {
            loop = false;
            do {
                std::cout << "So you have a hamster. That's pretty freaking cool but what are you going to do with it?\nA) Donate it to an animal shelter, B) Post a video of it to Instagram, C) Name him George, or D) Find a cage\n";
                std::cin >> choice;
                switch (choice)
                {
                case 'A'://Donate it
                    loop = false;
                    std::cout << "You decide you don't want the hamster but you don't want to just get rid of it. So you put the hamster in a box, remembering to leave airholes in it and drive to the nearest animal shelter.\nThey unfortunately don't take hamsters.\n\nSo the drive to the second nearest animal shelter and they are able to take the hamster.\nYou feel pretty good about yourself since you were able to give a small defenseless animal a place to live. You then kick a homeless person who asking you for some change as you head back to the car.\n";
                    alive = false;
                    break;
                case 'B'://Post video
                    loop = false;
                    std::cout << "You decide you want to exploit this cute little animal to get clout on Instagram. So you get your phone and begin recording him with some food.\nHe doesn't seem like he wants to eat. So you impatiently starting shove the food into his mouth and begin recording.\nHe ends up spitting the food back out. You exclaim \"Genius!\" and proceed to upload to Instagram and get about 500 likes.\nContent, you head into your bedroom and the hamster scurries away.\n";
                    alive = false;
                    break;
                case 'C'://Name him George
                    loop = false;
                    std::cout << "You decide you will name him George and you will hug him, and pet him, and squeeze him. And pat him and pet him. And rub him and carass him and-\n You realize George is no longer him your hands. You look around and see him scurry into a hole in your wall. You scare him off. Nice.\n";
                    alive = false;
                    break;
                case 'D'://Get a cage
                    loop = false;
                    std::cout << "You decide to find a cage to imprison- I mean, to house him. You find a cage next to some garbage bins, bring it in wash it, dry it, and put the hamster in it. You leave him some food while you go shopping for more stuff for the hamster.\n";
                    std::cout << "You then care and love the hamster for the next 2 years. Those years were nice.\n";
                    alive = false;
                    break;
                default:
                    loop = true;
                    std::cout << "Invalid option chosen\n";
                    break;
                }
            } while (loop);
        }
        //-------------------------------Awaken from nap---------------------------------------------------------------------
        else if(alive)
        {
            loop = false;
            do {
                std::cout << "That nap was very spooky, so you get up and try to get your mind off of it and go outside.\nYou see a tree, some birbs flying, and a man.\nWhich one will you harass-I mean, interact with?\nA)That tree, B)Those birbs, or C)That man\n";
                std::cin >> choice;
                switch (choice)
                {
                case 'A'://Fight the tree
                    loop = false;
                    std::cout << "You decide you've had enough of that tree's nonsense. Standing there. Absorbing sunlight and water.\nSo you proceed to kick it. Repeatly.\nAn branch then falls on you and you die.\n";
                    alive = false;
                    break;
                case 'B'://Fight the birbs
                    loop = false;
                    std::cout << "You see some rocks on the side of the road and start throwing them at the birbs, because you're feeling particularly jerkish today.\nHowever, one of your rocks hits a fighter jet. So it launches a cruise missle at you.\nYou are dead.\n";
                    alive = false;
                    break;
                case 'C'://Fight the man
                    loop = false;
                    do {
                        std::cout << "You ran towards the man and hit him the back of the head. He asks why you did that.\nHow will you respond?\nA)\"I wanted to fight some and you look weak and feeble\", B) \"I'm making the mother of omlettes!\" or C)\"I felt like it. What are you going to do? Go back in time and attack me in my house?\"\n";
                        std::cin >> choice;
                        switch (choice)
                        {
                        case 'A':
                            loop = false;
                            std::cout << "You tell him you wanted to fight some and he looked weak and feeble. This is because your eyes clearly aren't working, since the man is an absolute unit. So he punches you into the ground. I hope you learned your lesson.";
                            alive = false;
                            break;
                        case 'B':
                            loop = false;
                            std::cout << "You declare you're making the mother of all omlettes and he shouldn't fret over every egg.\nHe is utterly confused by the sentence that you just said, since it just came out of nowhere. You then punch him to the sun.\nCongrats,you're an American hero or something like that. Now turn your computer off, right now.\n";
                            alive = false;
                            break;
                        case 'C':
                            loop = false;
                            std::cout << "You taunt him, saying \"What are you going to do? You gonna cry? You gonna pee your pants? You gonna invent a time machine, travel back in time, and beat me up?\" So he says he'll show and he'll go back in time and kick your butt, as he runs off.\n You'd like to see him try. You then take a nice deep breathe because today was a good day.\n";
                            alive = false;
                            break;
                        default:
                            loop = true;
                            std::cout << "Invalid option chosen\n";
                            break;
                        }
                    } while (loop);
                    break;
                default:
                    loop = true;
                    std::cout << "Invalid option chosen\n";
                    break;
                }
            } while (loop);
        }
        if (!alive)
        {
            std::cout << "Would you like to play again?\nType in \"N\" for no and anything else for yes.\n";
            std::cin >> choice;
            if (choice == 'N')
                quit = true;
        }
    } while (!quit);
}
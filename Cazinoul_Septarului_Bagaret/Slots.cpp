#include "Slots.h"



void Slots :: LoadCardPickingButtons()
{

    
    AdvancedWrite("1 - red , 2 - black\n");
    AdvancedWrite("3 keep your prize\n\n");    
    AdvancedWrite("@@@@@@@@@@@@@@@@@@@@                            ");
    AdvancedWrite("@@@@@@@@@@");
    AdvancedWrite("&", 8);
    AdvancedWrite("@@@@@@@@@\n");
    AdvancedWrite("@@@@");
    AdvancedWrite("#####", 1);
    AdvancedWrite("@@@");
    AdvancedWrite("#####", 1);
    AdvancedWrite("@@@                            @@@@@@@@");
    AdvancedWrite("&&&&&", 8);
    AdvancedWrite("@@@@@@@\n");
    AdvancedWrite("@@");
    AdvancedWrite("#################", 1);
    AdvancedWrite("@                            @@@@@");
    AdvancedWrite("&&&&&&&&&&&", 8);
    AdvancedWrite("@@@@\n");
    AdvancedWrite("@@");
    AdvancedWrite("#################", 1);
    AdvancedWrite("@                            @@@");
    AdvancedWrite("&&&&&&&&&&&&&&&", 8);
    AdvancedWrite("@@\n");
    AdvancedWrite("@@");
    AdvancedWrite("#################", 1);
    AdvancedWrite("@                            @");
    AdvancedWrite("&&&&&&&&&&&&&&&&&&", 8);
    AdvancedWrite("@\n");
    AdvancedWrite("@@@@");
    AdvancedWrite("#############", 1);
    AdvancedWrite("@@@                            @");
    AdvancedWrite("&&&&&&&&&&&&&&&&&&", 8);
    AdvancedWrite("@\n");
    AdvancedWrite("@@@@@@@");
    AdvancedWrite("#######", 1);
    AdvancedWrite("@@@@@@                            @@");
    AdvancedWrite("&&&&&&&&&&&&&&&&", 8);
    AdvancedWrite("@@\n");
    AdvancedWrite("@@@@@@@@@@");
    AdvancedWrite("#", 1);
    AdvancedWrite("@@@@@@@@@                            @@@@@@@@@");
    AdvancedWrite("&&&", 8);
    AdvancedWrite("@@@@@@@@\n\n");

}

void Slots :: Double(int& CardPickingGain) {

    int RandomIndex = 0;
    keypressed = 0;

    system("cls");

    while (CardPickingGain != 0 && keypressed != 3)
    {


        LoadCardPickingButtons();
        RandomIndex = 0;
        AdvancedWrite("\nRecent Cards: \n");

        if (CardHistoryLength != 0)
        {
            for (int i = 0; i <= CardHistoryLength - 1; i++)
                if (CardHistory[i] == 1)AdvancedWrite("r ");
                else if (CardHistory[i] == 2)AdvancedWrite("b ");
            
        }
       

     
        
        keypressed = InputHandler("\n", 3);
        if (keypressed == 3)
        {
            system("cls");
            break;
        }
        
        
        RandomIndex = (rand() % 2) + 1;
        
       

        if (keypressed == RandomIndex)
        {
            CardPickingGain *= 2;
            AdvancedWrite("You Won! (Your current gain is " + to_string(CardPickingGain) + " )\n\n");
        }
        else 
        {
            CardPickingGain = 0;
            AdvancedWrite("You lost!\n");
        }

        if (CardHistoryLength == 5)
        {
            for (int i = 0; i <= CardHistoryLength - 1; i++)
                CardHistory[i] = CardHistory[i + 1];
            CardHistory[CardHistoryLength - 1] = RandomIndex;



        }
        else CardHistory[CardHistoryLength++] = RandomIndex;

        system("pause");
        system("cls");

    }



}

bool Slots :: GivePrize(int NumberOfSymbols, int &InitialPrice, Symbol WonSymbol)
{

    if (NumberOfSymbols >= 2 && WonSymbol.GetIndex() == 1)
    {
        gain += InitialPrice * NumberOfSymbols / (6 - NumberOfSymbols) + cherry.GetValue();
        return true;
    }
    else if (NumberOfSymbols >= 3)
    {
        gain += InitialPrice * NumberOfSymbols / (6 - NumberOfSymbols) + WonSymbol.GetValue();
        return true;
    }
    
    return false;
}

void Slots :: CalculationOfPaymentLines(int& InitialPrice)
{
    gain = 0;
    srand(time(0));
    int index = 1;
    int SymbolNumber = 0;
    int keeplooping = 1;
    

    WinMessage.clear();

    AdvancedWrite(" _________\n", GlobalVariables :: SlotTextForegroundColorIndex , GlobalVariables :: SlotTextBackgroundColorIndex);  
    AdvancedWrite("|         |\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);

    //LINE 1,2,3

  
    for (int i = 1; i <= 3; i++) 
    {
        SymbolNumber = 0;
        keeplooping = 1;

        AdvancedWrite("|", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);

        for (int j = 1; j <= 5; j++) 
        {
            
            int procent = rand() % 100;
            if (procent <= seven.GetChance())SlotArray[i][j] = SymbolContainer[7];
            else SlotArray[i][j] = SymbolContainer[(rand() % 6) + 1];
            
            index = SlotArray[i][1].GetIndex();
           
            if (j != 5)
                AdvancedWrite(to_string(SlotArray[i][j].GetIndex()) + " ", GlobalVariables::InteriorSlotTextForegroundColorIndex, GlobalVariables::InteriorSlotTextBackgroundColorIndex);
            else AdvancedWrite(to_string(SlotArray[i][j].GetIndex()), GlobalVariables::InteriorSlotTextForegroundColorIndex, GlobalVariables::InteriorSlotTextBackgroundColorIndex);
          
            if (SlotArray[i][j].GetIndex() == index && keeplooping == 1 ) SymbolNumber++;
            else keeplooping = 0;
            
            
            
        }
    
        if (i == 2) AdvancedWrite("|  0\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);
        else if (i == 3) AdvancedWrite("|  |\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);
        else  AdvancedWrite("|\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);

        

        if (GivePrize(SymbolNumber, InitialPrice, SlotArray[i][1]) == true)
            WinMessage += "You won on the line " + to_string(i) + " a number of " + to_string(SymbolNumber) + " " + SlotArray[i][1].GetSymbolName() + " symbols" + '\n';


    }

    AdvancedWrite("|_________|__|\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);
    AdvancedWrite("| -     - |\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);
    AdvancedWrite("|---------|\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);
    AdvancedWrite("|_________|\n\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex);

    

    //LINE 4

   

    SymbolNumber = 0;
    keeplooping = 1;
    int ChangeIncrementation = 0;
    index = SlotArray[1][1].GetIndex();

    for (int i = 1;  i > 0 && keeplooping == 1; i = (ChangeIncrementation == 0)? (i+1) : (i-1) )
    {
        
       
        if (SlotArray[i][i].GetIndex() == index && ChangeIncrementation == 0) SymbolNumber++;
        else if (SlotArray[i][6 - i].GetIndex() == index && ChangeIncrementation == 1) SymbolNumber++;
        else keeplooping = 0;

        

        if (i == 3) ChangeIncrementation = 1;

    }
            
    if (GivePrize(SymbolNumber, InitialPrice, SlotArray[1][1]) == true)
        WinMessage += "You won on the line 4 a number of " + to_string(SymbolNumber) + " " + SlotArray[1][1].GetSymbolName() + " symbols" + '\n' + '\n';

    AdvancedWrite(WinMessage + '\n');



    //linia 5: a31 a22 a13 a24 a35

    //linia 6: a11 a12 a23 a34 a35

    //linia 7: a31 a32 a23 a14 a15

    //linia 8: a21 a32 a33 a34 a25

    //linia 9: a21 a12 a13 a14 a25

    //linia 10: a11 a22 a33 a24 a15

    //linia 11: a31 a22 a23 a24 a35

    //linia 12: a21 a32 a23 a14 a25

    //linia 13: a21 a12 a23 a34 a25

    //linia 14: a11 a22 a13 a24 a15

    //linia 15: a31 a22 a33 a24 a35



}

void Slots :: LoadTheHelpfulInformation()
{


    
    AdvancedWrite("Payouts are awarded from left to right and the number of similar symbols on each of the 4 paylines is calculated.\n\n", GlobalVariables :: SlotInfoTextForegroundColorIndex, GlobalVariables :: SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("Payment line 1: A B C D E\n", GlobalVariables :: SlotInfoTextForegroundColorIndex, GlobalVariables :: SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("Payment line 2: F G H I J\n", GlobalVariables :: SlotInfoTextForegroundColorIndex, GlobalVariables :: SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("Payment line 3: K L M N O\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("Payment line 4: A G M I E\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);


    AdvancedWrite(" _________\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("|         |\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("|A B C D E|\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("|F G H I J|  0\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("|K L M N O|  |\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("|_________|__|\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("| -     - |\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("|---------|\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("|_________| \n\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    


    AdvancedWrite("Symbols and indices:                      Chances:\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("1_cherry                                  1,2,3,4,5,6 have the chance to " + to_string(cherry.GetChance()) + "% to show, but 7 has a "+ to_string(seven.GetChance()) +" % chance \n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("2_plum\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex, 0, false);
    AdvancedWrite("3_orange                                  symbol value:\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("4_lemon                                   cherry - " + to_string(cherry.GetValue()) + " usd\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("5_grape                                   plum,orange,lemon - " + to_string(plum.GetValue()) + " usd\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("6_melon                                   grape,melon - " + to_string(grape.GetValue()) + " usd\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);
    AdvancedWrite("7_seven                                   seven - " + to_string(seven.GetValue()) + " usd \n\n", GlobalVariables::SlotInfoTextForegroundColorIndex, GlobalVariables::SlotInfoTextBackgroundColorIndex);

}

void Slots :: Roll(int &Balance, int &InitialPrice, SDL2SoundEffects &se)
{
    SlotDataInitialization(Balance , InitialPrice);

    while (Balance >= InitialPrice)
    {
        Balance -= InitialPrice;
        se.playSoundEffect(0);
        MatrixCreationAnimation(10, 0, 180);
        CalculationOfPaymentLines(InitialPrice);

        AdvancedWrite("Current Balance: " + to_string(Balance + gain) + '\n' + '\n');
        
        if (InitialPrice > Balance + gain)break;

        PlaySound(NULL, 0, 0);
        
        if (ShowInfo == 1) LoadTheHelpfulInformation();
        system("pause");

 
        system("cls");
        if (gain > 0)
        {
            if (InputHandler("\nDo you double ? (1-NO , 2 - YES)\n----------                                -----------\n|   NO   |                                |   YES   |\n----------                                -----------\n", 2) == 2)Double(gain);
                Balance += gain;
              
        }
    }

}

void Slots :: SlotDataInitialization(int &Balance, int &InitialPrice)
{
    

    cherry = Symbol(1, 50, 5 , "Cherry");
    plum = Symbol(2, 50, 20, "Plum");
    orange = Symbol(3, 50, 20, "Orange");
    lemon = Symbol(4, 50, 20, "Lemon");
    grape = Symbol(5, 50, 100, "Grape");
    melon = Symbol(6, 50, 100, "Melon");
    seven = Symbol(7, 10, 500, "Seven");
    SymbolContainer[1] = cherry;
    SymbolContainer[2] = plum;
    SymbolContainer[3] = orange;
    SymbolContainer[4] = lemon;
    SymbolContainer[5] = grape;
    SymbolContainer[6] = melon;
    SymbolContainer[7] = seven;

    if (InputHandler("You want to display the information about the slot on the screen? (1=YES , 2=NO)\n", 2) == 1)
        ShowInfo = 1;

    system("cls");


    InitialPrice = InputHandler("Enter the price: ", Balance);
    cout << endl;
}


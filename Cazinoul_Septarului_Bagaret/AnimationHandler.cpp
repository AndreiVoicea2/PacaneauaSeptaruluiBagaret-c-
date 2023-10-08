#include "AnimationHandler.h"


void IntroAnimation(int Iterations, int FirstFrameDelay, int FirstFrameTransitionDelay , int GeneralFrameDelay , int GeneralFrameTransitionDelay, int LastFrameDelay , int LastTransitionDelay, int ForeGroundColorIndex, int BackGroundColorIndex)
{

    while (Iterations != 0)
    {
        ///1
        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          %%%%%%%%#%%%%%/                                      (%%%#,              \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);
        AdvancedWrite("                                                                          %%%#(%%%%%%%%%%#%%%%%%%%%%%##**/                  /%%%%%#%%%#*           \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);
        AdvancedWrite("                                                                          %%%&%%%#%%%%%%%%%#%%%%%%%%%##%%%%%%%#/*,     ((%%%%%%%%%#%%#%%%/.        \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                          %%%%#%%%#&&&%%&&%#%%%%%%%%%(#%%%%%##%%%%%%%%%%%%#%%%%##%%%%#%%%%%#       \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                          #%&%(%%%%%#(#%%%%%%%%%%%%%%&%%%%%%(%%%%%%&&&&&%%%#%%%%%%#%%%&%%%         \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                          %%&%#%&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&%%%%%%%%%%%%%%&&&%%%&%&%%%           \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);       
        AdvancedWrite("                                                                          %%&%#%&&&@&@@&&&&&&&&@@@&&@&&@&&&&@&&&&&&&&&&&&&&&%%#%&%&&%#             \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);       
        AdvancedWrite("                                                                          %&&%#%&&&&&&&&%%%&&&&&&&&&&&&&&&&&&&%%&&&&&@@@&&&%%%&%&&&%.              \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                          %&&%#%&&&&%%#%&@&&&&%%##%%%%%%%%%%%#(%%#%&&&@@&&%#&&%&&%%                \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                          %&&%#%&&%%%@@#&&&&&&&&&%%%&&&&&&&&%%%&@@%%&&&&&%%&%&&%%                  \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                          %&&%%%%%%%@%&&&&%%%%%&&&&&&&&&&&&&&&%@@#%&&&&&%%&%&&%#                   \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                          %&&%%&&&&%%%&&&%           #&&&&&%&@&%&&&&&&&%&&%&&%                     \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                          %&&&&&&&&&&&&&&%        .&&&&&%&&&%%&&&&&&&&%&&&&&#                      \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                                %&&&&#&&&%&&&&&&&&&&&%&&&&&%                       \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                             %&&&&#&&&%&&&&&&&&&&&&&%&&&&&%                        \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                           %&&&&&&&%%&&&&&@@&&&&&&&%&&&&&%                         \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                         %&&@#&&&%&&&&&&@@@@@@&&&&%%&%@&&                          \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);       
        AdvancedWrite("                                                                                       %&&@%&&%%&&&&&@@@@@@@@@&&&%%&%@&&                           \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                     %&&@%&&#%&&&&&@@@@@@@@@@&&&&%&&@@&                            \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                   (&&@%&&#%&&&&&@@@@@@@@@@@@@&&&%&%@&&                            \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                  %&@@%&%%&&&&&&@@@@@@@@@@@@@&&&&%@%@&#                            \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                 .&&@%&%%&&&&&&@@@@@@@@@@@@@@&&&&%@%@@%                            \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                 %&@%&%&&&&&&&@@@@@@@@@@@@@@@&&&&%&%@@&                            \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                 &&@&&&&&&&&&&@@@@@@@@@@@@@&&&&&&%&&@@&                            \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                 %&@&&%&&&&&&&&&&&&&&&&&&&&&&&&&&%&&%@@%                           \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                 &&@%&%&%&&%%%%%%&%&%&&%%%%&&%%&&%%%&%@&%                          \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameDelay);        
        AdvancedWrite("                                                                                 %&&&&@&&&&@@@@&&&@@&&&&&@@@&&&@&@&&&&@&&#                         \n", ForeGroundColorIndex , BackGroundColorIndex , FirstFrameTransitionDelay, true);
        
        cout << endl;

        ///2
        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          ##((((///(////,                                                          \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%#%%%%%%%%%%#  ((###(/*/                       (%%%*                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%%(%%%%%#%%%%%%%%%%#%%%%%%%#/#,             (%%%%%#%%#,                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%%%(%%%#&&%%#%%%%#(#%#(#%%%%%%%%%%%%%(#(#%%%%%%#%%##%%%%%*              \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%%#%%%%###(%%%%%%%%%%%%%%%%%(#%%%%#%#%%%#%%&%%#%%%%%%%&%%#             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%&%#%&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%#%%%%%%%&%%%&%&%%%               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%#%&&&@@@&&&&&&&&@@@&@@&@@&&&@&&&&&&&&&&&&&&%%%&%&&%#                 \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%&%#%&&&&&&&%%%%&%&%&&&&&&&&&&&&&%&&&&&@@@&&&%%&%&&%%                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%#%&&&%#%@@@@&&&&&%%(%%%%%%%%##%@&#&&&@&&%%%&%&&%                     \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%#%&&%%@&@&&&&&&&&&&&%%%&%%%%&&&@@%&&&&&&%&%&&%(                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%####(%@&&&&       %%&&&&&&&&%&@&%&&&&&%%&%&&%                        \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&&&&&&&&&&&%         #&&&&%&&&%%&&&&&&%&&@&&%                         \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                               %&&&&%&&&%%&&&&&&&&%&%&&&                           \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                            #&&&&%&&&%&&&&&&&&&&&%&%&&&                            \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                         .%&&@#&&&%&&&&&@&&&&&&&%&%&&&                             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                       .&&&&%&&%%&&&&@@@@@@&&&&%&&@&&                              \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                     *&&@&&&%%&&&&@@@@@@@@@&&&%%&&&&/                              \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                    &&@%&&%%&&&&&@@@@@@@@@@&&&%&%@&/                               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                  &&@@%&#%&&&&&@@@@@@@@@@@@&&%%&@@&                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                 %&@%&%%&&&&&@@@@@@@@@@@@@&&&%&&@@%                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                /&@&&%%&&&&&@@@@@@@@@@@@@@&&&&&&@@&                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                %&@%&%&&&&&@&@@@@@@@@@@@&&&&&&&&&@&                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                %&@&%%&&&&&&&&&&&&&&&&&&&&&&&&%&%@@%                               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                &&@%&%&%&&%%%%&&%&%&&%%%&&%%&%%%%&@&%                              \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                %&&&@&&&&&@@@&&&&@&&&&&&&&&&&&&&&&&&&(                             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameTransitionDelay, true);

        cout << endl;
        cout << endl;

        ///3
        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          %%%%%%%%%%%%#     ,,                         /##                         \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%&#(%#%#%%%%%%%%%%%%%%%#(,(             *%%%%#%%/                      \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          #%%%%%%%&&%%#%%%#((%##%%%%%%%%%%%%(((#%%%%%%%%%#%%%%((                   \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          %%&%%%%%%#(%%%%%%%%%%%%%%%%##%%%%##%##%%%&%#%%%%%%%%%%                   \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%%&&&&&&&&&&&&&@&&&&&&&&&&%%%%%%%%%%%%%%%&%%&%&%%                     \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%%%&&@@&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&%%%&%&%%                       \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&%&&&&&%%%(((%%%%&&&&&&&&&&%%%&&&@@&&&%%&%&&%.                        \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&%&&%%%@&%&&&&&%%&&&%%%%%&&@@@@%&&&&&%&&&&%%                          \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%%%%%&&@&&&#/%%&&&&&&&&&&&&&@@#&&&&&%&%&&%                            \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%%%%%%%&&&*         &&&&#&@&%&&&&&&%&%&&%                             \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%%%&%%&&&&&*      &&&&#&&&%&&&&&&&%%&&&&                               \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                           %&&@#&&&%&&&&&&&&&%&&&&%                                \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                        %%&&%&&&%&&&&@&&&&&&%&&@&&                                 \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                      %&&@%&&%&&&&&@@@@@@&&&%&@&&                                  \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                    %&&@&&#%&&&&@@@@@@@@&&&%&%@&,                                  \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                  %&&@%&#%&&&&@@@@@@@@@@&&%&&@&(                                   \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                 &&@%&%%&&&&@@@@@@@@@@@&&&%&%@&*                                   \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                %&@%&%&&&&&@@@@@@@@@@@@&&&%&%@&                                    \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                &@%&%&&&&@@@@@@@@@@@@@@&&&%&%@@                                    \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                               .&&%%%&&&&&&&&&&@@&@&&&&&&&&&&@@%                                   \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                &&%&&&&&&&&&&&&&&&&&&&&&&&&%&&@&#                                  \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameDelay);
        AdvancedWrite("                                                                                &&&@&&&&@@@&@&&@&&&@@@@&&&@&&&&@&(                                 \n", ForeGroundColorIndex, BackGroundColorIndex, GeneralFrameTransitionDelay, true);
        
            
        cout << endl;
        cout << endl;
        cout << endl;


        ///4
        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          %%%%%%%%%%%(    .,.                      (%*                            \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%#%%#%%%%%%%%%%#%%%%#%#*/           (%%%%%%#,                         \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%%%%%#&&&%%%%#%%%%%(#%%%#%%%%%%%%%%%%%#%%##%%%%*                       \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%%&&&%%%%&&&&&&&&%&%%%%%#%%%%%%%%%%#%%%%%%%%%%                       \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%%&&&&&&&&&@@@@@&&&&&&&&&&&%%%&&%%%&&%%&%&%#                         \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%%&&&&&&%%%&&&&&&&&&&&&&&&&&&@@@@&&%%&%&%#                           \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&%&&%%%@@@&&&&&%(%%%%%%(#&@#%&&@&%%&%&&#                             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&%%%#@#&&&&&&&&&&&&&&&&&&&@@%&&&&%&&&%                               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%@&%%%&&&         &&&&%&@%%&&&&%&&&&%                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&&&&&&&&&      #&&&#&&%%&&&&&&%&%&&#                                 \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                         %%&&#&&#&&&&&&&&&%&%&&                                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                       %&&%&&%&&&&@@@&&&&%&%&&                                    \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                     &&@%&&%&&&&@@@@@&&&%&%@&.                                    \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                  #&&@%&#&&&&@@@@@@@@&&%%&@&#                                     \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                 &&@%&%%&&&&@@@@@@@@@&&%&%@&                                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                &&@&%%&&&&@@@@@@@@@@&&&%@%@#                                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               %&@&%&&&&&@@@@@@@@@@@&&&%&%@&                                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               %&%&%&&&&&@@@@@@@@@@&&&&%&%@&                                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               &&&&&&&&&&&&&&&&&&&&&&&&&%&%&&                                     \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               &&@@@&&&@&@&&&&&&&&&&&&&&&&&&&%                                    \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameTransitionDelay, true);

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        ///5
        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          %%%%%%%%%#   //**                  #%,                                 \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%%%#%#%%%%#%%%##%%#%#*       /%%%##%%#                               \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                          #%%%%%#&&##%%%%%%%%##%&%#%%%%%%#%%%%%##%%%,                            \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                          %&%%&&&&&&&&&&@&&&&&&&&%%%%%%%%%&%&#&%&%.                              \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                          #&%%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&%&%/                                \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                          %&%%&&&#&@@&&&&%(%%%%%##&&%&&@&%%&&&%                                  \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                          %&%%%%%&&&&&%&&&&&&&&&&&%@%&&&%&%&%                                    \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&&&&@&&.      %&&&%@%%&&&&%&&&%                                     \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                                        #&&&&&%%&&&&&&%&&&                                       \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                                     .%&&%&%&&&&&&&&&%&&&                                        \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                                   %&&%&&&&&&@@@@@&&%&@&                                         \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                                 %&@%&%&&&@@@@@@@&&%&&&(                                         \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                                &@#&%&&&&@@@@@@@@&&%&@&                                          \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                               &@%%&&&&&@@@@@@@@@&&%&@&                                          \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                              %&%&%&&&@@@@@@@@@&&&&%&@&                                          \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                              %&%%&&&&&&&&&&&&&&&&&%&%@                                          \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameDelay);
        AdvancedWrite("                                                                              #&%&&&&%%%%%%%&&&%&%%%%%%&(                                        \n", ForeGroundColorIndex , BackGroundColorIndex ,  GeneralFrameTransitionDelay, true);

        cout << endl;
        cout << endl;
        cout << endl;


        ///6
        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          %%%%%%%%%%%(    .,.                      (%*                            \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%#%%#%%%%%%%%%%#%%%%#%#*/           (%%%%%%#,                         \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%%%%%#&&&%%%%#%%%%%(#%%%#%%%%%%%%%%%%%#%%##%%%%*                       \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%%&&&%%%%&&&&&&&&%&%%%%%#%%%%%%%%%%#%%%%%%%%%%                       \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%%&&&&&&&&&@@@@@&&&&&&&&&&&%%%&&%%%&&%%&%&%#                         \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%%&&&&&&%%%&&&&&&&&&&&&&&&&&&@@@@&&%%&%&%#                           \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&%&&%%%@@@&&&&&%(%%%%%%(#&@#%&&@&%%&%&&#                             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&%%%#@#&&&&&&&&&&&&&&&&&&&@@%&&&&%&&&%                               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%@&%%%&&&         &&&&%&@%%&&&&%&&&&%                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&&&&&&&&&      #&&&#&&%%&&&&&&%&%&&#                                 \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                         %%&&#&&#&&&&&&&&&%&%&&                                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                       %&&%&&%&&&&@@@&&&&%&%&&                                    \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                     &&@%&&%&&&&@@@@@&&&%&%@&.                                    \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                  #&&@%&#&&&&@@@@@@@@&&%%&@&#                                     \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                 &&@%&%%&&&&@@@@@@@@@&&%&%@&                                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                &&@&%%&&&&@@@@@@@@@@&&&%@%@#                                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               %&@&%&&&&&@@@@@@@@@@@&&&%&%@&                                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               %&%&%&&&&&@@@@@@@@@@&&&&%&%@&                                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               &&&&&&&&&&&&&&&&&&&&&&&&&%&%&&                                     \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               &&@@@&&&@&@&&&&&&&&&&&&&&&&&&&%                                    \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameTransitionDelay, true);

        cout << endl;
        cout << endl;

        ///7
        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          %%%%%%%%%%%%#     ,,                         /##                         \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%&#(%#%#%%%%%%%%%%%%%%%#(,(             *%%%%#%%/                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%%%%%%%&&%%#%%%#((%##%%%%%%%%%%%%(((#%%%%%%%%%#%%%%((                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%&%%%%%%#(%%%%%%%%%%%%%%%%##%%%%##%##%%%&%#%%%%%%%%%%                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%%&&&&&&&&&&&&&@&&&&&&&&&&%%%%%%%%%%%%%%%&%%&%&%%                     \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%%%&&@@&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&%%%&%&%%                       \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&%&&&&&%%%(((%%%%&&&&&&&&&&%%%&&&@@&&&%%&%&&%.                        \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&%&&%%%@&%&&&&&%%&&&%%%%%&&@@@@%&&&&&%&&&&%%                          \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%%%%%&&@&&&#/%%&&&&&&&&&&&&&@@#&&&&&%&%&&%                            \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%%%%%%%&&&*         &&&&#&@&%&&&&&&%&%&&%                             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%%%&%%&&&&&*      &&&&#&&&%&&&&&&&%%&&&&                               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                           %&&@#&&&%&&&&&&&&&%&&&&%                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                        %%&&%&&&%&&&&@&&&&&&%&&@&&                                 \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                      %&&@%&&%&&&&&@@@@@@&&&%&@&&                                  \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                    %&&@&&#%&&&&@@@@@@@@&&&%&%@&,                                  \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                  %&&@%&#%&&&&@@@@@@@@@@&&%&&@&(                                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                 &&@%&%%&&&&@@@@@@@@@@@&&&%&%@&*                                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                %&@%&%&&&&&@@@@@@@@@@@@&&&%&%@&                                    \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                &@%&%&&&&@@@@@@@@@@@@@@&&&%&%@@                                    \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                               .&&%%%&&&&&&&&&&@@&@&&&&&&&&&&@@%                                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                &&%&&&&&&&&&&&&&&&&&&&&&&&&%&&@&#                                  \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                &&&@&&&&@@@&@&&@&&&@@@@&&&@&&&&@&(                                 \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameTransitionDelay, true);

        cout << endl;

        ///8
        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          ##((((///(////,                                                          \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%#%%%%%%%%%%#  ((###(/*/                       (%%%*                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%%(%%%%%#%%%%%%%%%%#%%%%%%%#/#,             (%%%%%#%%#,                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%%%(%%%#&&%%#%%%%#(#%#(#%%%%%%%%%%%%%(#(#%%%%%%#%%##%%%%%*              \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%%#%%%%###(%%%%%%%%%%%%%%%%%(#%%%%#%#%%%#%%&%%#%%%%%%%&%%#             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%&%#%&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%#%%%%%%%&%%%&%&%%%               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%#%&&&@@@&&&&&&&&@@@&@@&@@&&&@&&&&&&&&&&&&&&%%%&%&&%#                 \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %%&%#%&&&&&&&%%%%&%&%&&&&&&&&&&&&&%&&&&&@@@&&&%%&%&&%%                   \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%#%&&&%#%@@@@&&&&&%%(%%%%%%%%##%@&#&&&@&&%%%&%&&%                     \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%#%&&%%@&@&&&&&&&&&&&%%%&%%%%&&&@@%&&&&&&%&%&&%(                      \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%####(%@&&&&       %%&&&&&&&&%&@&%&&&&&%%&%&&%                        \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&&&&&&&&&&&%         #&&&&%&&&%%&&&&&&%&&@&&%                         \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                               %&&&&%&&&%%&&&&&&&&%&%&&&                           \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                            #&&&&%&&&%&&&&&&&&&&&%&%&&&                            \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                         .%&&@#&&&%&&&&&@&&&&&&&%&%&&&                             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                       .&&&&%&&%%&&&&@@@@@@&&&&%&&@&&                              \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                     *&&@&&&%%&&&&@@@@@@@@@&&&%%&&&&/                              \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                    &&@%&&%%&&&&&@@@@@@@@@@&&&%&%@&/                               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                  &&@@%&#%&&&&&@@@@@@@@@@@@&&%%&@@&                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                 %&@%&%%&&&&&@@@@@@@@@@@@@&&&%&&@@%                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                /&@&&%%&&&&&@@@@@@@@@@@@@@&&&&&&@@&                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                %&@%&%&&&&&@&@@@@@@@@@@@&&&&&&&&&@&                                \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                %&@&%%&&&&&&&&&&&&&&&&&&&&&&&&%&%@@%                               \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                &&@%&%&%&&%%%%&&%&%&&%%%&&%%&%%%%&@&%                              \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameDelay);
        AdvancedWrite("                                                                                %&&&@&&&&&@@@&&&&@&&&&&&&&&&&&&&&&&&&(                             \n", ForeGroundColorIndex , BackGroundColorIndex , GeneralFrameTransitionDelay, true);

        cout << endl << endl << endl << endl << endl << endl << endl;
        AdvancedWrite("                                                                          %%%%%%%%#%%%%%/                                      (%%%#,              \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%#(%%%%%%%%%%#%%%%%%%%%%%##**/                  /%%%%%#%%%#*           \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%&%%%#%%%%%%%%%#%%%%%%%%%##%%%%%%%#/*,     ((%%%%%%%%%#%%#%%%/.        \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %%%%#%%%#&&&%%&&%#%%%%%%%%%(#%%%%%##%%%%%%%%%%%%#%%%%##%%%%#%%%%%#       \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          #%&%(%%%%%#(#%%%%%%%%%%%%%%&%%%%%%(%%%%%%&&&&&%%%#%%%%%%#%%%&%%%         \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %%&%#%&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&%%%%%%%%%%%%%%&&&%%%&%&%%%           \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %%&%#%&&&@&@@&&&&&&&&@@@&&@&&@&&&&@&&&&&&&&&&&&&&&%%#%&%&&%#             \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%#%&&&&&&&&%%%&&&&&&&&&&&&&&&&&&&%%&&&&&@@@&&&%%%&%&&&%.              \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%#%&&&&%%#%&@&&&&%%##%%%%%%%%%%%#(%%#%&&&@@&&%#&&%&&%%                \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%#%&&%%%@@#&&&&&&&&&%%%&&&&&&&&%%%&@@%%&&&&&%%&%&&%%                  \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%%%%%%%@%&&&&%%%%%&&&&&&&&&&&&&&&%@@#%&&&&&%%&%&&%#                   \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&%%&&&&%%%&&&%           #&&&&&%&@&%&&&&&&&%&&%&&%                     \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                          %&&&&&&&&&&&&&&%        .&&&&&%&&&%%&&&&&&&&%&&&&&#                      \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                                %&&&&#&&&%&&&&&&&&&&&%&&&&&%                       \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                             %&&&&#&&&%&&&&&&&&&&&&&%&&&&&%                        \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                           %&&&&&&&%%&&&&&@@&&&&&&&%&&&&&%                         \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                         %&&@#&&&%&&&&&&@@@@@@&&&&%%&%@&&                          \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                       %&&@%&&%%&&&&&@@@@@@@@@&&&%%&%@&&                           \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                     %&&@%&&#%&&&&&@@@@@@@@@@&&&&%&&@@&                            \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                   (&&@%&&#%&&&&&@@@@@@@@@@@@@&&&%&%@&&                            \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                  %&@@%&%%&&&&&&@@@@@@@@@@@@@&&&&%@%@&#                            \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                 .&&@%&%%&&&&&&@@@@@@@@@@@@@@&&&&%@%@@%                            \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                 %&@%&%&&&&&&&@@@@@@@@@@@@@@@&&&&%&%@@&                            \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                 &&@&&&&&&&&&&@@@@@@@@@@@@@&&&&&&%&&@@&                            \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                 %&@&&%&&&&&&&&&&&&&&&&&&&&&&&&&&%&&%@@%                           \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                 &&@%&%&%&&%%%%%%&%&%&&%%%%&&%%&&%%%&%@&%                          \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameDelay);
        AdvancedWrite("                                                                                 %&&&&@&&&&@@@@&&&@@&&&&&@@@&&&@&@&&&&@&&#                         \n", ForeGroundColorIndex , BackGroundColorIndex ,GeneralFrameTransitionDelay, false);

        
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        
        AdvancedWrite("                                                                          ---------------------------------------------------------------\n", ForeGroundColorIndex , BackGroundColorIndex , LastFrameDelay);                                                                                                                          
        AdvancedWrite("                                                                          |                                                             |\n", ForeGroundColorIndex , BackGroundColorIndex , LastFrameDelay);                                                                                                                          
        AdvancedWrite("                                                                          |                Pacaneaua Septarului Bagaret                 |\n", ForeGroundColorIndex , BackGroundColorIndex , LastFrameDelay);                                                                                                                          
        AdvancedWrite("                                                                          |                                                             |\n", ForeGroundColorIndex , BackGroundColorIndex , LastFrameDelay);                                                                                                            
        AdvancedWrite("                                                                          ---------------------------------------------------------------\n", ForeGroundColorIndex , BackGroundColorIndex , LastTransitionDelay, true);

        Iterations--;

    }

}
    
void LoadingAnimation(int Iterations, int delayFrames, int ForeGroundColorIndex, int BackGroundColorIndex)
{
    system("cls");

    for (int m = 1; m <= Iterations; m++) {

        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoading   ", ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLOading   ", ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoAding   ", ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoaDing   ", ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoadIng   ", ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoadiNg   ", ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoadinG   ", ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoading.  ", ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoading.." , ForeGroundColorIndex, BackGroundColorIndex, delayFrames);
        AdvancedWrite("\b\b\b\b\b\b\b\b\b\bLoading...", ForeGroundColorIndex, BackGroundColorIndex, delayFrames, true );
        
    }

}
    
void MatrixCreationAnimation(int Iterations, int delayFrames, int TransitionDelay)
{

    srand(time(0));
    float percent = rand() % 100;
    
    while (Iterations)
    {

        AdvancedWrite(" _________\n", GlobalVariables :: SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex, delayFrames);
        AdvancedWrite("|         |\n", GlobalVariables :: SlotTextForegroundColorIndex, GlobalVariables :: SlotTextBackgroundColorIndex,  delayFrames);

        for (int i = 1; i <= 3; i++)
        {
            cout << "|";
            for (int j = 1; j <= 5; j++)
            {

                percent = rand() % 100;
                if (j != 5)AdvancedWrite(to_string((rand() % 7) + 1) + " ", GlobalVariables::InteriorSlotTextForegroundColorIndex, GlobalVariables::InteriorSlotTextBackgroundColorIndex, delayFrames);
                else AdvancedWrite(to_string((rand() % 7) + 1), GlobalVariables::InteriorSlotTextForegroundColorIndex, GlobalVariables::InteriorSlotTextBackgroundColorIndex, delayFrames);

            }


            AdvancedWrite("|\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex, delayFrames);

        }
        AdvancedWrite("|_________|__\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex,delayFrames);
        AdvancedWrite("| -     - |  |\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex,delayFrames);
        AdvancedWrite("|---------|  |\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex,delayFrames);
        AdvancedWrite("|_________|  0\n", GlobalVariables::SlotTextForegroundColorIndex, GlobalVariables::SlotTextBackgroundColorIndex,TransitionDelay, true);

        Iterations--;

    }


}
#include <iostream>
using namespace std;

//initialization
int i , quantity, menu, package, item;
float totalprice , price , cash , change;

// processing
int main(){
    cout <<"\n      Welcome to Sunway XFarms!" << endl;
    bool end = false;
    while(!end){
    cout << "\n--------------------------------------" << endl;
    cout << "                MENU\n";
    cout << "--------------------------------------" << endl;
    cout << "\n     Vegetable subscription: " << endl;
    cout << "     1. Monthly Growner" << endl;
    cout << "     2. Annual Growner\n" << endl;
    cout << "     Kit: " << endl;
    cout << "     3. Farm Kit" << endl;
    cout << "     4. Compose Kit" << endl;
    cout << "     5. Microgreens Kit" << endl;
    cout << "\n     0. Proceed to checkout" << endl;
    cout << "--------------------------------------\n" << endl;
    cout << "Enter your choice: ";
    cin >> menu;

    switch(menu){ //select vegetable subscription package
        case 1:
            cout << "\n(1) Monthly Growner 1 - Leafy" << endl;
            cout << "\t- min. 0.75KG of leafy vegetables x 4 weeks/month" << endl;
            cout << "\t- suitable for 2-3 pax households\n" << endl;

            cout << "(2) Monthly Growner 2 - Leafy" << endl;
            cout << "\t- min. 1.5KG of leafy vegetables x 4 weeks/month" << endl;
            cout << "\t- suitable for 4-6 pax households\n" << endl;

            cout << "(3) Monthly Growner 3 - Leafy" << endl;
            cout << "\t- min. 2.2KG of leafy vegetables x 4 weeks/month" << endl;
            cout << "\t- suitable for 7-10 pax households\n" << endl;

            cout << "(4) Monthly Growner 1 - Fruity" << endl;
            cout << "\t- min. 1.7KG of fruity vegetables x 4 weeks/month" << endl;
            cout << "\t- suitable for 2-3 pax households\n" << endl;

            cout << "(5) Monthly Growner 2 - Fruity" << endl;
            cout << "\t- min. 3.4KG of fruity vegetables x 4 weeks/month" << endl;
            cout << "\t- suitable for 4-6 pax households\n" << endl;
            cout << "Enter your choice (1 ~ 5): ";
            cin >> package;

            switch(package){ 
                case 1:
                    cout << "\nPackage: " << endl;
                    cout << "Monthly Growner 1 - Leafy" << endl;
                    cout << "\t- min. 0.75KG of leafy vegetables x 4 weeks/month" << endl;
                    cout << "\t- suitable for 2-3 pax households\n" << endl;
                    cout << "Items:                     Price(RM): " << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "1. Salad lettuces             105" << endl;
                    cout << "2. Hearty Asian greens        105" << endl;
                    cout << "3. Salad & Asian Mix          105" << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "Enter your choice (1 ~ 3): ";
                    cin >> item;

                    switch(item){
                        case 1:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Salad lettuces                105" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 105;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        case 2:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Hearty Asian greens           105" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 105;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        case 3:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Salad & Asian Mix             105" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 105;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        default:
                            cout << "Error!" << endl;
                        break;
                    }
                break;

                case 2:
                    cout << "\nPackage: " << endl;
                    cout << "Monthly Growner 2 - Leafy" << endl;
                    cout << "\t- min. 1.5KG of leafy vegetables x 4 weeks/month" << endl;
                    cout << "\t- suitable for 4-6 pax households\n" << endl;
                    cout << "Items:                     Price(RM): " << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "1. Salad lettuces             189" << endl;
                    cout << "2. Hearty Asian greens        189" << endl;
                    cout << "3. Salad & Asian Mix          189" << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "Enter your choice (1 ~ 3): " << endl;
                    cin >> item;

                    switch(item){
                        case 1:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Salad lettuces                189" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 189;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        case 2:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Hearty Asian greens           189" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 189;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        case 3:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Salad & Asian Mix             189" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 189;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        default:
                            cout << "Error!" << endl;
                        break;
                        }
                break;

                case 3:
                    cout << "\nPackage: " << endl;
                    cout << "Monthly Growner 3 - Leafy" << endl;
                    cout << "\t- min. 2.2KG of leafy vegetables x 4 weeks/month" << endl;
                    cout << "\t- suitable for 7-10 pax households\n" << endl;
                    cout << "Items:                     Price(RM): " << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "1. Salad lettuces             270" << endl;
                    cout << "2. Hearty Asian greens        270" << endl;
                    cout << "3. Salad & Asian Mix          270" << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "Enter your choice (1 ~ 3): ";
                    cin >> item;

                    switch(item){
                        case 1:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Salad lettuces               270" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 270;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        case 2:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Hearty Asian greens           270" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 270;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        case 3:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Salad & Asian Mix             270" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 270;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        default:
                            cout << "Error!" << endl;
                        break;
                    }
                break;

                case 4:
                    cout << "\nPackage: " << endl;
                    cout << "Monthly Growner 1 - Fruity" << endl;
                    cout << "\t- min. 1.7KG of fruity vegetables x 4 weeks/month" << endl;
                    cout << "\t- suitable for 2-3 pax households" << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "This package includes a variety of: " << endl;
                    cout << "\t- Red / Yellow capsicums" << endl;
                    cout << "\t- Tomatoes / Cherry tomatoes" << endl;
                    cout << "\t- Green / Red chillis" << endl;
                    cout << "\t- English / Cocktail Cucumbers" << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "Price: RM 120" << endl;
                    cout << "\nQuantity: ";
                    cin >> quantity;
                    for(i = 0; i < quantity; i++)
                    totalprice += 120;
                    cout << "Item added to the cart!" << endl;
                break;

                case 5:
                    cout << "\nPackage: " << endl;
                    cout << "Monthly Growner 2 - Fruity" << endl;
                    cout << "\t- min. 3.4KG of fruity vegetables x 4 weeks/month" << endl;
                    cout << "\t- suitable for 4-6 pax households" << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "This package includes a variety of: " << endl;
                    cout << "\t- Red / Yellow capsicums" << endl;
                    cout << "\t- Tomatoes / Cherry tomatoes" << endl;
                    cout << "\t- Green / Red chillis" << endl;
                    cout << "\t- English / Cocktail Cucumbers" << endl;
                    cout << "--------------------------------------" << endl;
                    cout << "Price:\t\t\tRM 240" << endl;
                    cout << "\nQuantity: ";
                    cin >> quantity;
                    for(i = 0; i < quantity; i++)
                    totalprice += 240;
                    cout << "\nItem added to the cart!" << endl;
                break;
            }
            break;

        case 2:
            cout << "Annual Growner - Leafy" << endl;
            cout << "\t- min. 0.75KG of leafy vegetables x 4 weeks/month x 12 months" << endl;
            cout << "\t- suitable for 2-3 pax households\n" << endl;
            cout << "Items:                     Price(RM): " << endl;
            cout << "--------------------------------------" << endl;
            cout << "1. Salad lettuces            1200" << endl;
            cout << "2. Hearty Asian greens       1200" << endl;
            cout << "3. Salad & Asian Mix         1200" << endl;
            cout << "--------------------------------------" << endl;
            cout << "Enter your choice (1 ~ 3): ";
            cin >> item;
            
            switch(item){
                        case 1:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Salad lettuces               1200" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 1200;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        case 2:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Hearty Asian greens          1200" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 1200;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        case 3:
                            cout << "\nItem:                     Price(RM): " << endl;
                            cout << "--------------------------------------" << endl;
                            cout << "Salad & Asian Mix            1200" << endl;
                            cout << "\nQuantity: ";
                            cin >> quantity;
                            for(i = 0; i < quantity; i++)
                            totalprice += 1200;
                            cout << "\nItem added to the cart!" << endl;
                        break;

                        default:
                            cout << "Error!" << endl;
                        break;
            }
        break;
        
        case 3:
            cout << "\nFarm Kit RM19" << endl;
            cout << "--------------------------------------" << endl;
            cout << "Inclusive of: " << endl;
            cout << "\t- 1 packet Pak Choy seeds" << endl;
            cout << "\t- x2 netpot holder rings" << endl;
            cout << "\t- AB nutrients (1 bottle each)" << endl;
            cout << "\t- Clay pebblies" << endl;
            cout << "\t- Netpot" << endl;
            cout << "\t- x4 sponges" << endl;
            cout << "--------------------------------------" << endl;
            cout << "Quantity: ";
            cin >> quantity;
            for(i = 0; i < quantity; i++)
            totalprice += 19;
            cout << "\nItem added to the cart!" << endl;
        break;

        case 4:
            cout << "\nCompose Kit RM49" << endl;
            cout << "--------------------------------------" << endl;
            cout << "Inclusive of: " << endl;
            cout << "\t- Compost bag" << endl;
            cout << "\t- 1 pack of bokashi powder" << endl;
            cout << "\t- 1 set of tools" << endl;
            cout << "--------------------------------------"<< endl;
            cout << "\nQuantity: ";
            cin >> quantity;
            for(i = 0; i < quantity; i++)
            totalprice += 49;
            cout << "\nItem added to the cart!" << endl;
        break;

        case 5:
            cout << "\nMicrogreens Kit RM35" << endl;
            cout << "--------------------------------------" << endl;
            cout << "Inclusive of: " << endl;
            cout << "\t- x2 types of microgreen seeds" << endl;
            cout << "\t- Peatmoss" << endl;
            cout << "\t- Gardening tool" << endl;
            cout << "\t- Grow Tray" << endl;
            cout << "\t- Grow Guide" << endl;
            cout << "--------------------------------------"<< endl;
            cout << "\nQuantity: ";
            cin >> quantity;
            for(i = 0; i < quantity; i++)
            totalprice += 35;
            cout << "\nItem added to the cart!" << endl;
        break;
               
        case 0:
            end = true;
        break;
    }
}   
    cout << "Total price: " << totalprice << endl;
    cout << "Enter amount: ";
    cin >> cash;

    if (cash >= totalprice){
        change = cash - totalprice;
    }

    else if (cash < totalprice){
        cout << "Insufficient amount!" << endl;
        cout << "Please reenter amount: ";
        cin >> cash;
        change = cash - totalprice;
    }

    else{
        cout << "Error!" << endl;
    }

    //receipt
    cout << "\n--------------------------------------" << endl;
    cout << "           SUNWAY XFARMS \n";
    cout << "              RECEIPT\n";
    cout << "--------------------------------------" << endl;
    cout << "                                RM" << endl;
    cout << "Total price:                   " << totalprice << endl;
    cout << "Cash:                          " << cash << endl; 
    cout << "Change:                        " << change << endl;
    cout << "\n             THANK YOU!\n";
    cout << "--------------------------------------" << endl;
    
    return 0;
}
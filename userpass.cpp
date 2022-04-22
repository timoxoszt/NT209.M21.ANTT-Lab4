#include <iostream>
#include <string.h>
#include<unistd.h>

using namespace std;

int success_3(){
    puts("Congrats! You found your own username/password pair. Nice work to receive the my message.");
    puts("Hand in this to your instructor as a proof:");
    return puts("\"Vietnam can win over SARS-CoV-2.\"");
}

int failed()
{
  return puts("Nice try but that is not the answer.");
}

int userpass()
{
    size_t v0; // ebx@2
    int result; // eax@3
    size_t v2; // eax@15
    size_t v3; // edx@16
    char v4[9]; // [sp+Ah] [bp-2Eh]@6
    char v5[10]; // [sp+13h] [bp-25h]@1
    char s[10]; // [sp+1Dh] [bp-1Bh]@1
    char v7; // [sp+27h] [bp-11h]@1
    char v8; // [sp+28h] [bp-10h]@1
    char v9; // [sp+29h] [bp-Fh]@1
    char v10; // [sp+2Ah] [bp-Eh]@1
    char v11; // [sp+2Bh] [bp-Dh]@1
    unsigned int i; // [sp+2Ch] [bp-Ch]@4

    v7 = 104; // h
    v8 = 35; // #
    v9 = 97; // a
    v10 = 90; // Z
    v11 = 105; // i
    
    cout << "Enter your username:";
    cin >> s; // 0810-0619

    cout << "Enter your password:";
    cin >> v5;

    if ( strlen(s) == 9 && (v0 = strlen(s), v0 == strlen(v5)) )  // length user = 9, length pass = 9, user = 0810-0619 else jump to L1
    {
        /* DEBUG ONLY */
        // cout << "v0: " << v0 << "\n"; // debug str length

        for (i = 0; i <= 0 ; ++i){
            v4[i] = s[i + 2];
            // cout << "v4[0] = " << v4[i] << "\n";
            cout << "(" << s[i] << " + " << v4[i] << ") / 2 = " << (s[i] + v4[i]) / 2 << "\n";
        }

        for (i = 1; i <= 4; i++ ){
            v4[i] = s[i + 5];
            // cout << "v4[" << i << "] = " << v4[i] << "\n"; 
            cout << "(" << s[i] << " + " << v4[i] << ") / 2 = " << (s[i] + v4[i]) / 2 << "\n";
        }

         for (i = 5; i <= 9; i++ ){
             v4[i] = *(&v7 + i - 4);
            // cout << "v4[" << i << "] = " << v4[i] << "\n"; 
            cout << "(" << s[i] << " + " << v4[i] << ") / 2 = " << (s[i] + v4[i]) / 2 << "\n";
        }

        /* END DEBUG */
        for ( i = 0; (signed int)i <= 8; ++i ) // for 1
        {
            // cout << "i for 1: " << i << "\n"; // debug for 1 ( from 0 to 8 )

            if ( (signed int)i > 1 )
            {
                if ( (signed int)i > 3 ){
                    v4[i] = *(&v7 + i - 4);
                    /*
                        v7 = 104;
                        i = 4 -> 104 + 4 - 4 = 104 // h
                        i = 5 -> 104 + 5 - 4 = 105 // i
                        i = 6 -> 104 + 6 - 4 = 106 // j
                        i = 7 -> 104 + 7 - 4 = 107 // k
                        i = 8 -> 104 + 8 - 4 = 108 // l
                    */
                    cout << "v4[" << i << "] = *(&v7 + i - 4): " << v4[i] << "\n";
                }            
                else{
                    v4[i] = s[i + 5]; // get 2 digit last student_id2 (19)
                    // cout << "v4[i] = s[i + 5]: " << v4[i] << "\n";
                }
                             // v4 = 1019   
            }
            else
            {
                v4[i] = s[i + 2]; // get 2 digit last student_id1 (10)
                // cout << "v4[i] = s[i + 2]: " << v4[i] << "\n";
            }
        }

        for ( i = 0; ; ++i ) // for 2 -> i = 0
        {
            cout << "i = 0; ; ++i = " << i << "\n";
            v2 = strlen(s);
            // cout << "v2: " << v2 << "\n";
            // cout << s[i] << " + " << v4[i] << " / 2 = " << (s[i] + v4[i]) / 2 << "\n"; // 0 + 1 / 2 = 48 ???? 48 ascii = 0
            // s[0] = 0, v4[0] = 1
            // cout << "v5["<< i << "]:" << v5[i] << "\n"; // v5[0] = v
          
            if ( v2 <= i || (s[i] + v4[i]) / 2 != v5[i] ){ // s[0] + v4[0] / 2 = 48  v5[0] = 0
                // break;
                cout << "i for 2: " << i << "\n";
                cout << "v5[" << i << "] = " << v5[i] << "\n";
                unsigned int microsecond = 1000000;
                usleep(1 * microsecond);//sleeps for 3 second
            }
                /*  48 55 49 52 22 41 75 69 81
                    i = 0 : (0 + 1) / 2 = 48 
                    i = 1 : (8 + 6) / 2 = 55 
                    i = 2 : (1 + 1) / 2 = 49 
                    i = 3 : (0 + 9) / 2 = 52 
                    i = 4 : (- + h) / 2 = 22 
                    i = 5 : (0 + #) / 2 = 41
                    i = 7 : (6 + a) / 2 = 75
                    i = 7 : (1 + Z) / 2 = 69
                    i = 8 : (9 + i) / 2 = 81                       
                */
                // cout << "trigger break endpoint" << "\n";
            
        }

        v3 = strlen(s); // v3 = 9
        cout << "v3: " << v3 << "\n";
        if ( v3 == i ){ // when i = 9
            result = success_3();
        }
        else{
            cout << "L2" << "\n";
            result = failed(); // L2
        }
         
    }
    else
    {
        cout << "L1" << "\n";
        result = failed(); // L1
    }
    return result;
}

int	main()
{
    userpass();
    return 0;
}


/*

            i = 0; ; ++i = 0
            i for 2: 0
            v5[0] = 
            i = 0; ; ++i = 1
            i for 2: 1
            v5[1] = 6
            i = 0; ; ++i = 2
            i = 0; ; ++i = 3
            i for 2: 3
            v5[3] = 9
            i = 0; ; ++i = 4
            i for 2: 4
            v5[4] = h
            i = 0; ; ++i = 5
            i for 2: 5
            v5[5] = #
            i = 0; ; ++i = 6
            i for 2: 6
            v5[6] = a
            i = 0; ; ++i = 7
            i for 2: 7
            v5[7] = Z
            i = 0; ; ++i = 8
            i for 2: 8
            v5[8] = i
            i = 0; ; ++i = 9
            i for 2: 9
            v5[9] = 
            i = 0; ; ++i = 10

*/
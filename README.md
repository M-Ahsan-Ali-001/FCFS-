 # FCFS in ubuntu (batch file)
 # Compiler Used
 <h2>g++</h2> is a comipler used to run c++ batch files in Linux Terminal 
 <h2> Execution</h2>
   ./a.out is used to excute c++ batch file.
 
 # Explanation
 - Dynamically Allocated array are used to take input (BT)
 - Calculated WT using formula:
    wt[i] = bt[i-1] + wt[i-1]  (Loop used)
    wt[1] = bt[0] + wt[0]
 - Calculated TAT using formula:
    TAT = WT + BT (Loop used)
 -  Calcualted Average using Formula:
    AvgWT + = Wt
    AvgWT/len(BT)        (Loop used)
    AvgTAT + = TAT
    AvgTAT/= len(BT)
    

    
 # Output ScreenShot
 
 ![Screenshot from 2022-11-30 19-08-35](https://user-images.githubusercontent.com/91987110/205544933-65235bcf-5793-4d8c-8e56-60a7658fc23b.png)

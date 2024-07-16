#include <iostream>

int main()
{
    int nN{};
    int nM{};
    int nK{};
    int nTotal{};

    scanf("%d",&nN);
    scanf("%d",&nM);
    scanf("%d",&nK);

    int arNumbers[nN];

    for(int i=0;i<nN;i++)
    {
        scanf("%d",&arNumbers[i]);
    }

    int nMax{};
    int nSecondMax{};
    nMax=arNumbers[0];
    nSecondMax=arNumbers[0];
    for(int i=0;i<nN;i++)
    {
        if(nMax<arNumbers[i])
        {
            nSecondMax=nMax;
            nMax=arNumbers[i];
        }
        else if(arNumbers[i]>nSecondMax&&arNumbers[i]<nMax)
        {
            nMax=arNumbers[i];
        }
    }
    //printf("nMax = %d, nSecondMax = %d\n",nMax, nSecondMax);

    int nShare{};
    int nRemainder{};

    nShare=nM/(nK+1);
    nRemainder=nM%(nK+1);

    nTotal=(((nMax*nK)+nSecondMax)*nShare)+nMax*nRemainder;
    printf("%d\n",nTotal);
}

#pragma once
#include <bits/stdc++.h>
#include "1_Investor.h"

using namespace std;
double Investor::generateRandomPrice()  {
        // Generate a random price between 100 and 200 for demonstration
        return 100 + (rand() % 90) + static_cast<double>(rand() % 100) / 100;
    }

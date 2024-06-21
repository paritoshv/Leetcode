class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //bruteforce
        // int maxS =0;
        // for(int i =0; i<= (customers.size()-minutes);i++){
        //     int satisfied = 0;
        //     for(int j =0; j<customers.size();j++){
        //         if((j>=i && j<(i+minutes)) || grumpy[j]==0){
        //             satisfied += customers[j];
        //         }
        //     }
        //     maxS = max(maxS,satisfied);
        // }
        // return maxS;
int n = customers.size();
        int unrealizedCustomers = 0;

        // Calculate initial number of unrealized customers in first 'minutes'
        // window
        for (int i = 0; i < minutes; i++) {
            unrealizedCustomers += customers[i] * grumpy[i];
        }

        int maxUnrealizedCustomers = unrealizedCustomers;

        // Slide the 'minutes' window across the rest of the customers array
        for (int i = minutes; i < n; i++) {
            // Add the current minute's unsatisfied customers if the owner is
            // grumpy and remove the customers that are out of the current
            // window
            unrealizedCustomers += customers[i] * grumpy[i];
            unrealizedCustomers -= customers[i - minutes] * grumpy[i - minutes];

            // Update the maximum unrealized customers
            maxUnrealizedCustomers =
                max(maxUnrealizedCustomers, unrealizedCustomers);
        }

        // Start with maximum possible satisfied customers due to secret
        // technique
        int totalCustomers = maxUnrealizedCustomers;

        // Add the satisfied customers during non-grumpy minutes
        for (int i = 0; i < n; i++) {
            totalCustomers += customers[i] * (1 - grumpy[i]);
        }

        // Return the maximum number of satisfied customers
        return totalCustomers;
        // int maxS =0;
        // int satisfied = 0;

        // for(int j =0; j<customers.size();j++){
        //     if((j>=0 && j<minutes) || grumpy[j]==0){
        //         satisfied += customers[j];
        //     }
        // }
        // int cursor = minutes;
        // maxS = max(maxS,satisfied);
        // while(cursor<customers.size()){
        //     //remove the customers from cursor-minutes
        //     if(grumpy[cursor-minutes]==1){
        //         satisfied = satisfied - customers[cursor-minutes];
        //     }
        //     //add the customers from cursor
        //     satisfied+= customers[cursor];
            
        //     maxS = max(maxS,satisfied);
        //     cursor++;
        // }
        // return maxS;
        
    }
};
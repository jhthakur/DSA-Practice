class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> TotalSeats(n+1);
        for(int i=0;i<bookings.size();i++){
            int first=bookings[i][0],last=bookings[i][1],seats=bookings[i][2];
            TotalSeats[first-1]+=seats;
            TotalSeats[last]-=seats;
        }
    TotalSeats.pop_back();
        for(int i=1;i<n;i++){
            TotalSeats[i]+=TotalSeats[i-1];
        }
        return TotalSeats;
    }
};
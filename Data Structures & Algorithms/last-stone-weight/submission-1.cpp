class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1) return stones[0];
        priority_queue<int> stonePile;
        for (int stone : stones) {
            stonePile.push(stone);
        }
        int tempStone1 = 0, tempStone2 = 0;
        while (stonePile.size() > 1) {
            tempStone1 = stonePile.top();
            stonePile.pop();
            tempStone2 = stonePile.top();
            stonePile.pop();
            if (tempStone1 > tempStone2) {
                stonePile.push(tempStone1 - tempStone2);
            }
        }
        return stonePile.empty() ? 0 : stonePile.top();
    }
};

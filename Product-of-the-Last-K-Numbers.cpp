class ProductOfNumbers {
public:
    vector<int> ans;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
        int ret = 1;
        for(int i=ans.size()-1;k!=0;k--){
            ret *=ans[i];
            i--;
        }
        return ret;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
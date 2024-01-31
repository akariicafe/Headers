@interface NUPaywallEventData : NSObject {
    void /* unknown type, empty encoding */ viewData;
    void /* unknown type, empty encoding */ articleData;
    void /* unknown type, empty encoding */ channel;
    void /* unknown type, empty encoding */ feedData;
    void /* unknown type, empty encoding */ groupData;
    void /* unknown type, empty encoding */ referral;
    void /* unknown type, empty encoding */ qToken;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaywallViewData:(id)a0 headline:(id)a1 channel:(id)a2 feed:(id)a3 paywallGroupData:(id)a4 referral:(id)a5 qToken:(id)a6;

@end

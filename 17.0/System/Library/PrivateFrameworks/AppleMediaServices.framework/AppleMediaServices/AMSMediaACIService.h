@class NSError, AMSMediaACI;

@interface AMSMediaACIService : NSObject {
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ keychainAccessGroup;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ network;
    void /* unknown type, empty encoding */ refresh;
    void /* unknown type, empty encoding */ date;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 bag:(id)a2;
- (void)fetchMediaACIWithCompletionHandler:(void (^)(AMSMediaACI *, NSError *))a0;

@end

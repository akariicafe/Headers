@class NSDictionary, AMSAccountIdentity;

@interface AMSAccountCachedServerDataCore : NSObject {
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ dataAccessor;
}

@property (class, nonatomic, readonly) AMSAccountCachedServerDataCore *sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)accountFlagsForAccountID:(id)a0;
- (id)boolForKey:(long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;
- (id)intForKey:(long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;
- (void)setAccountFlags:(NSDictionary *)a0 forAccountID:(AMSAccountIdentity *)a1 completionHandler:(void (^)(void))a2;
- (void)setAutoPlayTo:(BOOL)a0 forAccountID:(AMSAccountIdentity *)a1 completionHandler:(void (^)(void))a2;
- (void)setPersonalizationTo:(BOOL)a0 forAccountID:(AMSAccountIdentity *)a1 completionHandler:(void (^)(void))a2;
- (id)stringForKey:(long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;

@end

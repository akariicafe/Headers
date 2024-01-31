@class AMSAccountCachedServerDataCore;

@interface AMSAccountCachedServerData : NSObject

@property (readonly, nonatomic) AMSAccountCachedServerDataCore *core;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountFlagsForAccountID:(id)a0;
- (id)boolForKey:(unsigned long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;
- (id)initWithWrappedInstance:(id)a0;
- (id)intForKey:(unsigned long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;
- (void)setAccountFlags:(id)a0 forAccountID:(id)a1;
- (void)setAccountFlags:(id)a0 forAccountID:(id)a1 completion:(id /* block */)a2;
- (void)setAutoPlay:(BOOL)a0 forAccountID:(id)a1;
- (void)setPersonalization:(BOOL)a0 forAccountID:(id)a1;
- (id)stringForKey:(unsigned long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;

@end

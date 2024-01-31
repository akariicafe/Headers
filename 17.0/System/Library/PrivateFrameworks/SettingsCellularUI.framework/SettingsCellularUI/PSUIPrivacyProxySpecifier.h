@class PSUICoreTelephonyDataCache, CTXPCServiceSubscriptionContext;

@interface PSUIPrivacyProxySpecifier : PSSpecifier

@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;

- (void).cxx_destruct;
- (id)groupSpecifier;
- (id)isPrivacyProxyEnabled;
- (void)setPrivacyProxyEnabled:(id)a0;
- (id)initWithDataCache:(id)a0 context:(id)a1;

@end

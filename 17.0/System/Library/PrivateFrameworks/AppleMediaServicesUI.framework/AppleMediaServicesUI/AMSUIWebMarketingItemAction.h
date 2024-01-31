@class NSString, NSDictionary, AMSUIWebClientContext, ACAccount;

@interface AMSUIWebMarketingItemAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSDictionary *contextInfo;
@property (readonly, nonatomic) NSString *clientVersion;
@property (readonly, nonatomic) NSString *offerHints;
@property (readonly, nonatomic) NSString *placement;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end

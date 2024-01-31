@class NSString, NSDictionary, AMSUIPaymentVerificationMetrics, ACAccount, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIParentalVerificationIDCardTask : AMSTask

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *accountParameters;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics;
@property (retain, nonatomic) ACAccount *originalAccount;
@property (retain, nonatomic) UIViewController *viewController;

+ (id)_descriptorForMinimumAge:(long long)a0;
+ (id)_identityController;
+ (id)_identityRequestWithDescriptor:(id)a0 nonce:(id)a1;
+ (long long)_minAgeFromObject:(id)a0;
+ (id)_nonceFromString:(id)a0;
+ (id)_requestDictFromMinimumAge:(long long)a0 walletData:(id)a1 nonce:(id)a2;

- (void).cxx_destruct;
- (id)performTask;
- (id)_dataFromIDCardForMinimumAge:(long long)a0 nonce:(id)a1;
- (id)_promiseToFetchIDCardTokenURL:(id)a0 requestBody:(id)a1;
- (id)_promiseToLoadPVTURLWithBody:(id)a0;
- (id)_promiseToRequestIDCardData;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 displayName:(id)a3 metrics:(id)a4 viewController:(id)a5;

@end

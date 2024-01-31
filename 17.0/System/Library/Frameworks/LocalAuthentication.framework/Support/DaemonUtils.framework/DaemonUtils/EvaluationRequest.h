@class NSData, NSDictionary, LAAnalyticsEvaluation;

@interface EvaluationRequest : Request

@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSData *acl;
@property (readonly, nonatomic) id aclOperation;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) BOOL isApplePay;
@property (readonly, nonatomic) BOOL isUnlock;
@property (readonly, nonatomic) BOOL isInAppPayment;
@property (readonly, nonatomic) BOOL customUI;
@property (nonatomic) BOOL secureIntentRequested;
@property (nonatomic) BOOL immediateSuccess;
@property (readonly, nonatomic) LAAnalyticsEvaluation *analytics;

+ (id)current;
+ (BOOL)isApplePayPolicy:(long long)a0;

- (void)updateOptions:(id)a0;
- (BOOL)interactive;
- (id)initWithPolicy:(long long)a0 options:(id)a1;
- (id)initWithAcl:(id)a0 operation:(id)a1 options:(id)a2 uiDelegate:(id)a3;
- (void).cxx_destruct;
- (id)initWithAcl:(id)a0 operation:(id)a1 options:(id)a2;
- (id)initWithPolicy:(long long)a0 options:(id)a1 uiDelegate:(id)a2;
- (id)initSimulatedForBiolockoutPreflight;

@end

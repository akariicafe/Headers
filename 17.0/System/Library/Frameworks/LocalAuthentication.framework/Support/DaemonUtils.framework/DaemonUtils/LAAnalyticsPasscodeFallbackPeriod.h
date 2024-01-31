@class NSArray, NSString, NSDate;

@interface LAAnalyticsPasscodeFallbackPeriod : LAAnalytics {
    NSDate *_passcodePresentedTime;
    NSDate *_biometrySuccessTime;
}

@property (readonly, nonatomic) long long policyGroup;
@property (readonly, nonatomic) NSArray *policies;
@property (readonly, nonatomic) NSString *policyGroupName;
@property (readonly, nonatomic) long long passcodeCount;
@property (readonly, nonatomic) long long biometryAttempts;
@property (readonly, nonatomic) long long timeInterval;

+ (id)_persistedInstancesStorage;
+ (id)activePersistentInstances;

- (id)description;
- (void).cxx_destruct;
- (void)biometrySucceededWithEvaluationRequest:(id)a0;
- (id)buildPayload;
- (id)initWithPolicyGroup:(long long)a0;
- (id)instanceToReplaceWithWhenRemovedFromStorage;
- (void)passcodePresentedWithEvaluationRequest:(id)a0 biometryAttempts:(long long)a1;
- (BOOL)shouldCollect;

@end

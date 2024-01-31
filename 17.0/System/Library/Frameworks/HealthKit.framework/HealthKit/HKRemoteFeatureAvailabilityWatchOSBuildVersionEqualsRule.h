@class NSString;

@interface HKRemoteFeatureAvailabilityWatchOSBuildVersionEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>

@property (retain, nonatomic) NSString *buildVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleIdentifier;

- (void)processUserInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluate;

@end

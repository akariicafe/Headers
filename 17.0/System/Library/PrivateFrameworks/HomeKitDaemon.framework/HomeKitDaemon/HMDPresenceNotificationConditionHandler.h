@class HMDHome, NSString;
@protocol HMDFeaturesDataSource, HMDPresenceNotificationConditionPresenceProvider;

@interface HMDPresenceNotificationConditionHandler : HMFObject <HMFLogging, HMDNotificationConditionHandler>

@property (readonly, weak) HMDHome *home;
@property (readonly) id<HMDPresenceNotificationConditionPresenceProvider> presenceProvider;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (BOOL)canHandleCondition:(id)a0;
- (BOOL)conditionPasses:(id)a0 registrationUser:(id)a1;
- (id)initWithHome:(id)a0 presenceProvider:(id)a1 featuresDataSource:(id)a2;

@end

@class HMActionSetBuilder, NSString, NSArray, NSUUID, HMHome, HMTriggerPolicy;

@interface HMTriggerBuilder : HMTrigger <HMTriggerBuilderInternal, HMTriggerBuilderPrivate, HMTriggerBuilder>

@property (retain, nonatomic) HMTriggerPolicy *policy;
@property (readonly, nonatomic) BOOL nameIsConfigured;
@property (readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *configuredName;

+ (id)alloc;


@end

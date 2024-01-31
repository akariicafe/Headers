@class HMActionSetBuilder, NSArray, NSString, NSPredicate, NSUUID, HMHome, HMTriggerPolicy;

@interface HMEventTriggerBuilder : HMEventTrigger <HMEventTriggerBuilderInternal, HMEventTriggerBuilderPrivate, HMEventTriggerBuilder>

@property (nonatomic) unsigned long long recurrenceDays;
@property (copy, nonatomic) NSArray *recurrences;
@property (nonatomic) BOOL executeOnce;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSArray *endEvents;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSArray *actionSets;
@property (retain, nonatomic) HMTriggerPolicy *policy;
@property (readonly, nonatomic) BOOL nameIsConfigured;
@property (readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *configuredName;

+ (id)alloc;


@end

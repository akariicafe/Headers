@class NSDate, NSString, NSArray, NSUUID, HMHome, HMActionSetBuilder, NSDateComponents, NSTimeZone, HMTriggerPolicy;

@interface HMTimerTriggerBuilder : HMTimerTrigger <HMTimerTriggerBuilderInternal, HMTimerTriggerBuilderPrivate, HMTimerTriggerBuilder>

@property (readonly, copy, nonatomic) NSDate *fireDateIfSet;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSDateComponents *significantEventOffset;
@property (nonatomic) unsigned long long recurrenceDays;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSDateComponents *recurrence;
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

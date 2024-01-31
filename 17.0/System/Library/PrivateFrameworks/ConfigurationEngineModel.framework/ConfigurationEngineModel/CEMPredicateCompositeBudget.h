@class NSSet, NSString, CEMPredicateCompositeBudget_Monitors, NSArray;

@interface CEMPredicateCompositeBudget : CEMPredicateBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadCalendarIdentifier;
@property (copy, nonatomic) CEMPredicateCompositeBudget_Monitors *payloadMonitors;
@property (copy, nonatomic) NSArray *payloadNotificationTimes;
@property (copy, nonatomic) NSArray *payloadTimeBudget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithCalendarIdentifier:(id)a0 withMonitors:(id)a1 withNotificationTimes:(id)a2 withTimeBudget:(id)a3;
+ (id)buildRequiredOnlyWithMonitors:(id)a0 withTimeBudget:(id)a1;

@end

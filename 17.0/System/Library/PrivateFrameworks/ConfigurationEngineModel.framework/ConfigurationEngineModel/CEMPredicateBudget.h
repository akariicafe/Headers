@class NSSet, NSString, NSArray;

@interface CEMPredicateBudget : CEMPredicateBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadCalendarIdentifier;
@property (copy, nonatomic) NSString *payloadMonitor;
@property (copy, nonatomic) NSArray *payloadIdentifiers;
@property (copy, nonatomic) NSArray *payloadIdentifiersVersion2;
@property (copy, nonatomic) NSArray *payloadNotificationTimes;
@property (copy, nonatomic) NSArray *payloadTimeBudget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithCalendarIdentifier:(id)a0 withMonitor:(id)a1 withIdentifiers:(id)a2 withIdentifiersVersion2:(id)a3 withNotificationTimes:(id)a4 withTimeBudget:(id)a5;
+ (id)buildRequiredOnlyWithMonitor:(id)a0 withTimeBudget:(id)a1;
+ (id)buildWithCalendarIdentifier:(id)a0 withMonitor:(id)a1 withIdentifiers:(id)a2 withNotificationTimes:(id)a3 withTimeBudget:(id)a4;

@end

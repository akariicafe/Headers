@class NSString, NSDateInterval, NSDate, HKSPPersistentStateMachine;

@interface HKSPPersistentStateMachineState : HKSPStateMachineState <HKSPPersistentStateMachineEventHandler, HKSPDictionarySerializable, NSCoding, NSCopying>

@property (readonly, nonatomic) HKSPPersistentStateMachine *stateMachine;
@property (retain, nonatomic) NSDateInterval *lifetimeInterval;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double expirationDuration;
@property (readonly, nonatomic) BOOL schedulesExpiration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_hasExpirationDate:(id)a0;
+ (BOOL)_isExpired:(id)a0 currentDate:(id)a1;
+ (id)infiniteInterval;

- (void)stateDidExpire;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (void)_updateState;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isExpired;
- (id)initWithStateMachine:(id)a0;
- (void)_didEnter;
- (void)_didExit;
- (void)_expireOrRescheduleExpirationIfNecessary;
- (void)_resetLifetimeInterval;
- (BOOL)_updateExpirationDate;
- (id)_updatedLifetimeIntervalWithStartDate:(id)a0;
- (BOOL)_willEnter;
- (void)_willExit;
- (id)equalsBuilderWithObject:(id)a0;
- (void)stateWithIdentifierDidExpire:(id)a0;

@end

@class NSString, NSSet, NSArray, HKSPPersistentStateMachineState, NSDate;
@protocol HKSPStatePersistence, NAScheduler;

@interface HKSPPersistentStateMachine : HKSPStateMachine <HKSPPersistentStateMachineEventHandler, HKSPPersistentStateMachineDelegate>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *allowedStates;
@property (readonly, nonatomic) id<HKSPStatePersistence> persistence;
@property (readonly, nonatomic) HKSPPersistentStateMachineState *currentState;
@property (readonly, nonatomic) NSDate *currentStateExpirationDate;
@property (readonly, nonatomic) NSArray *scheduledExpirationStateIdentifiers;
@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;

- (void)scheduleStateExpiration;
- (id)persistedState;
- (void)unscheduleStateExpiration;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void)enterState:(id)a0;
- (void).cxx_destruct;
- (id)initWithAllowedStates:(id)a0 delegate:(id)a1 infoProvider:(id)a2;
- (id)initWithIdentifier:(id)a0 allowedStates:(id)a1 persistence:(id)a2 delegate:(id)a3 infoProvider:(id)a4;
- (id)initWithIdentifier:(id)a0 allowedStates:(id)a1 persistence:(id)a2 delegate:(id)a3 infoProvider:(id)a4 currentDateProvider:(id /* block */)a5;
- (void)stateWithIdentifierDidExpire:(id)a0;

@end

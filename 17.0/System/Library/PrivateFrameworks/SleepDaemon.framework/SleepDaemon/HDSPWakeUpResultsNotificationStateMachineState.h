@class NSString, HDSPWakeUpResultsNotificationStateMachine;
@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider;

@interface HDSPWakeUpResultsNotificationStateMachineState : HKSPPersistentStateMachineState <HDSPWakeUpResultsNotificationStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly, nonatomic) id<HDSPWakeUpResultsNotificationStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stateDidExpire;
- (void)queryDidComplete;
- (void)wakeUpDidOccur;
- (void)updateState;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidFailWithError:(id)a0;
- (void)didPostResultsNotification;
- (void)retryAttemptEventDue;

@end

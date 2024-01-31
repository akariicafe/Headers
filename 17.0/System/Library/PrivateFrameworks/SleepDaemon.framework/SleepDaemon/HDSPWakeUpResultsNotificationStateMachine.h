@class HDSPWakeUpResultsNotificationWaitingForWakeUpState, HDSPWakeUpResultsNotificationNotifiedState, NSString, HDSPWakeUpResultsNotificationDelayingForTrackingState, HDSPWakeUpResultsNotificationNeedsProtectedDataState, HDSPWakeUpResultsNotificationWaitingForRetryState, HDSPWakeUpResultsNotificationQueryingState, HDSPWakeUpResultsNotificationDisabledState;
@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider, HDSPWakeUpResultsNotificationStateMachineDelegate, NAScheduler;

@interface HDSPWakeUpResultsNotificationStateMachine : HKSPPersistentStateMachine <HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPWakeUpResultsNotificationStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPWakeUpResultsNotificationStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPWakeUpResultsNotificationStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationWaitingForWakeUpState *waitingForWakeUpState;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationDelayingForTrackingState *delayingForTrackingState;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationWaitingForRetryState *waitingForRetryState;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationQueryingState *queryingState;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationNeedsProtectedDataState *needsProtectedDataState;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationNotifiedState *notifiedState;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationDisabledState *disabledState;
@property (readonly, nonatomic) BOOL isWaitingForWakeUp;
@property (readonly, nonatomic) BOOL isDelayingForTracking;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObservingProtectedHealthDataAvailability;
- (void)executeQuery;
- (void)scheduleRetryAttempt;
- (void)unscheduleRetryAttempt;
- (void)postResultsNotification;
- (void)queryDidComplete;
- (void)wakeUpDidOccur;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)startObservingProtectedHealthDataAvailability;
- (void)queryDidFailWithError:(id)a0;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (id)allStates;
- (unsigned long long)loggingCategory;
- (void)didPostResultsNotification;
- (void).cxx_destruct;
- (void)retryAttemptEventDue;

@end

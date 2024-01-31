@class NSString, BLSHBacklightMutableTargetState, BLSHPendingUpdateToSpecifier, NSArray, BLSHPendingEnvironmentUpdateOperation, BLSHPendingUpdatePresentation, BLSHPendingUpdateDisplayMode, BLSHBacklightAggregateState, BLSHEnsureFlipbookCurrentOperation, BLSBacklightChangeEvent, BLSHBacklightEnvironmentStateMachine;

@interface BLSHBacklightTransitionStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext> {
    BLSHBacklightAggregateState *_currentState;
    BLSHBacklightMutableTargetState *_targetState;
    NSArray *_performingEvents;
    NSArray *_abortedEvents;
    BLSHPendingEnvironmentUpdateOperation *_pendingEnvironmentUpdate;
    BLSHPendingUpdatePresentation *_pendingUpdatePresentation;
    BLSHPendingUpdateToSpecifier *_pendingUpdateToSpecifier;
    BLSHPendingUpdateDisplayMode *_pendingUpdateDisplayMode;
    BLSHEnsureFlipbookCurrentOperation *_ensureFlipbookCurrentOperation;
    NSArray *_queuedEventsToPerform;
    BLSBacklightChangeEvent *_pendingPrewarmedEvent;
    BLSHBacklightEnvironmentStateMachine *_environmentStateMachine;
    BOOL _sleepRequested;
    BOOL _sleepImminent;
    double _timeInSleepImminent;
}

@property (readonly, nonatomic) unsigned long long abortReason;
@property (readonly, nonatomic) const void *payload;
@property (readonly, nonatomic) unsigned int payloadSize;
@property (readonly, nonatomic) BOOL hasEnsureFlipbookCurrent;
@property (readonly, copy, nonatomic) NSString *abortReasonString;
@property (readonly, nonatomic) BOOL wantsPanic;
@property (readonly, nonatomic) BOOL wantsWaitPastFireForCompletionAndTailspin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)backlightChangeRequestExplanationIdentifierFromString:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_populatePayload;
- (id)initWithCurrentState:(id)a0 targetState:(id)a1 performingEvents:(id)a2 abortedEvents:(id)a3 pendingEnvironmentUpdate:(id)a4 pendingUpdatePresentation:(id)a5 pendingUpdateToSpecifier:(id)a6 pendingUpdateDisplayMode:(id)a7 ensureFlipbookCurrentOperation:(id)a8 queuedEventsToPerform:(id)a9 pendingPrewarmedEvent:(id)a10 environmentStateMachine:(id)a11 sleepRequested:(BOOL)a12 sleepImminent:(BOOL)a13 timeInSleepImminent:(double)a14;
- (void)setSleepImminentAbortReason;

@end

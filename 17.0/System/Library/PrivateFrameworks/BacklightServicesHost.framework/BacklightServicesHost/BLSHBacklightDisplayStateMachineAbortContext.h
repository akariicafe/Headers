@class NSString;

@interface BLSHBacklightDisplayStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext> {
    long long _displayMode;
    long long _transitioningToDisplayMode;
    long long _lastSteadyStateDisplayMode;
    long long _backlightFactor;
    BOOL _isFlipbookEnabled;
    BOOL _showingBlankingWindow;
    BOOL _isCABlanked;
    BOOL _displayIsOff;
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

@end

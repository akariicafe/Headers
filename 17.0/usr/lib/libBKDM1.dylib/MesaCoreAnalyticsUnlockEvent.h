@class NSNumber, NSMutableSet;

@interface MesaCoreAnalyticsUnlockEvent : MesaCoreAnalyticsEvent {
    NSMutableSet *_usedDevices;
    BOOL _matchResultValid;
}

@property (retain) NSNumber *unlockResult;
@property (retain) NSNumber *quickTapsCount;
@property (retain) NSNumber *touchesToUnlock;
@property (retain) NSNumber *failedUnlockAttempts;
@property (retain) NSNumber *unlocked;
@property (retain) NSNumber *lastMatchResult;
@property (retain) NSNumber *canceledByNewCommand;
@property (retain) NSNumber *eventFinished;

- (id)init;
- (void)reset;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)postEvent;
- (void)handleStatusMessage:(unsigned int)a0 withData:(id)a1;
- (void)setMatchResult:(id)a0 withDetails:(id)a1;

@end

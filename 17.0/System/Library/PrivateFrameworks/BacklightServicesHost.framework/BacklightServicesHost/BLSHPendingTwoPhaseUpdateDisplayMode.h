@interface BLSHPendingTwoPhaseUpdateDisplayMode : BLSHPendingUpdateDisplayMode

@property (weak) BLSHPendingTwoPhaseUpdateDisplayMode *previous;
@property (retain) BLSHPendingTwoPhaseUpdateDisplayMode *next;

- (BOOL)isTwoPhaseUpdate;
- (BOOL)isFullyCompleted;
- (id)first;
- (BOOL)isStarted;
- (id)inProgressOperation;
- (id)last;
- (id)rampOperation;
- (id)updateOperation;
- (id)description;
- (void).cxx_destruct;

@end

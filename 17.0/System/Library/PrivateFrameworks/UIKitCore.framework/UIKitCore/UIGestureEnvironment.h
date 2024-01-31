@class NSMapTable, UIGestureGraph, NSMutableSet, NSMutableArray;
@protocol BSInvalidatable;

@interface UIGestureEnvironment : NSObject {
    struct __CFRunLoopObserver { } *_gestureEnvironmentUpdateObserver;
    NSMutableSet *_gestureRecognizersNeedingUpdate;
    NSMutableSet *_gestureRecognizersNeedingReset;
    NSMutableSet *_gestureRecognizersNeedingRemoval;
    NSMutableArray *_dirtyGestureRecognizers;
    NSMutableSet *_gestureRecognizersBlockedFromReset;
    unsigned long long _lastBlockedResetEvaluationMachTime;
    id<BSInvalidatable> _blockedResetStateCaptureToken;
    NSMutableArray *_delayedTouches;
    NSMutableArray *_delayedTouchesToSend;
    NSMutableArray *_delayedPresses;
    NSMutableArray *_delayedPressesToSend;
    NSMutableArray *_preUpdateActions;
    BOOL _dirtyGestureRecognizersUnsorted;
    BOOL _updateExclusivity;
    BOOL _isUpdatingGestureEnvironment;
    UIGestureGraph *_dependencyGraph;
    NSMapTable *_nodesByGestureRecognizer;
}

- (id)init;
- (void)dealloc;
- (void)removeGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)addGestureRecognizer:(id)a0;

@end

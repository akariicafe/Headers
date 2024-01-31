@class TSDInteractiveCanvasController, NSMutableSet, TSDAutoscroll;

@interface TSDDynamicOperationController : NSObject {
    TSDInteractiveCanvasController *mICC;
    BOOL mOperationIsDynamic;
    BOOL mResetGuides;
    BOOL mSupportsAlignmentGuides;
    BOOL mPossibleDynamicOperation;
    TSDAutoscroll *mAutoscroll;
}

@property (readonly, nonatomic) NSMutableSet *allTransformedReps;
@property (readonly, nonatomic) NSMutableSet *currentlyTransformingReps;

- (void)dealloc;
- (void)cancelOperation;
- (void)endOperation;
- (void)beginOperation;
- (void)handleGestureRecognizer:(id)a0;
- (id)initWithInteractiveCanvasController:(id)a0;
- (void)p_beginDynamicOperationForReps:(id)a0;
- (void)beginPossibleDynamicOperation;
- (void)handleTrackerManipulator:(id)a0;
- (void)invalidateGuides;
- (BOOL)isInOperation;
- (BOOL)isInPossibleDynamicOperation;
- (BOOL)isOperationDynamic;
- (void)p_cleanupOperation;
- (void)p_controllingTMDidResetInOperation:(id)a0;
- (void)p_resetGuidesForCleanup:(BOOL)a0;
- (void)startTransformingReps:(id)a0;
- (void)stopTransformingReps:(id)a0;

@end

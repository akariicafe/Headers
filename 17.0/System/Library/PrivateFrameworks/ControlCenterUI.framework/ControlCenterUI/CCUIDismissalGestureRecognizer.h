@class NSSet;

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer {
    BOOL _triggered;
    NSSet *_currentTouches;
}

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_cancelOtherGestureRecognizersForTouches:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_tryToCancelTouches;

@end

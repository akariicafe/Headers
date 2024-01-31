@interface MagnifierSupport.MFCardContainerController : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ containerHeightConstraint;
    void /* unknown type, empty encoding */ containerTopConstraint;
    void /* unknown type, empty encoding */ draggingAnimator;
    void /* unknown type, empty encoding */ rubberbandConfiguration;
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ startingCardHeight;
    void /* unknown type, empty encoding */ cardHeightConstraint;
    void /* unknown type, empty encoding */ cardPosition;
    void /* unknown type, empty encoding */ xPositionConstraint;
    void /* unknown type, empty encoding */ yPositionConstraint;
    void /* unknown type, empty encoding */ grabStartLocation;
    void /* unknown type, empty encoding */ grabStartFrame;
    void /* unknown type, empty encoding */ cardDragAndDropAnimator;
    void /* unknown type, empty encoding */ collapsingMiddleAnimator;
    void /* unknown type, empty encoding */ fadingBottomAnimator;
}

- (id)init;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handlePanGestureWithSender:(id)a0;

@end

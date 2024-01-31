@interface TeaUI.SwipeActionManager : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ deferGroup;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ isSwipeActionEnabled;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ swipeState;
    void /* unknown type, empty encoding */ rubberbandFactor;
    void /* unknown type, empty encoding */ maximumSwipeVelocity;
    void /* unknown type, empty encoding */ springStiffness;
    void /* unknown type, empty encoding */ snapOpenPercentage;
    void /* unknown type, empty encoding */ fadeDuration;
    void /* unknown type, empty encoding */ fadeOffset;
}

- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (void)handlePanGestureWithRecognizer:(id)a0;
- (void)handleTapGestureWithRecognizer:(id)a0;

@end

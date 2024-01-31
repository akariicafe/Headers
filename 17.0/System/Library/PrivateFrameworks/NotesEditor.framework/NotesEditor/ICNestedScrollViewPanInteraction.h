@interface ICNestedScrollViewPanInteraction : NSObject <UIGestureRecognizerDelegate, UIScrollViewDelegate, UIInteraction> {
    void /* unknown type, empty encoding */ exclusionGestureRecognizer;
    void /* unknown type, empty encoding */ nestedScrollVerticalPanBlocker;
    void /* unknown type, empty encoding */ hiddenScrollView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ nestedScrollableViews;
    void /* unknown type, empty encoding */ linearDataModel;
    void /* unknown type, empty encoding */ enabledForSequence;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ view;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;

@end

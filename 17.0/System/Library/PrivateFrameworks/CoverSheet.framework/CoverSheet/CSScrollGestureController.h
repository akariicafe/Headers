@class NSString, CSHorizontalScrollFailureRecognizer, UIScrollView, UIView, UIGestureRecognizer;
@protocol CSScrollableView, CSScrollGestureControllerDelegate;

@interface CSScrollGestureController : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding, CSEventHandling> {
    UIScrollView *_scrollView;
    UIView<CSScrollableView> *_scrollableView;
    UIGestureRecognizer *_scrollViewGestureRecognizer;
}

@property (retain, nonatomic) CSHorizontalScrollFailureRecognizer *horizontalFailureGestureRecognizer;
@property (nonatomic) long long scrollingStrategy;
@property (weak, nonatomic) id<CSScrollGestureControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)conformsToCSEventHandling;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_horizontalScrollFailureGestureRecognizerChanged:(id)a0;
- (BOOL)_shouldAllowScrollForScrollingStrategy:(long long)a0;
- (BOOL)_shouldFailHorizontalSwipesForScrollingStrategy:(long long)a0;
- (void)_updateForScrollingStrategy:(long long)a0 fromScrollingStrategy:(long long)a1;
- (id)initWithScrollableView:(id)a0;

@end

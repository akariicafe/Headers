@class NSMapTable;
@protocol PXVerticalSwipeGestureRecognizerHelperDelegate;

@interface PXVerticalSwipeGestureRecognizerHelper : NSObject {
    struct { BOOL shouldRecognizeSwipeDownGestureRecognizer; } _delegateRespondsTo;
}

@property (readonly, nonatomic) NSMapTable *dependentScrollViews;
@property (weak, nonatomic) id<PXVerticalSwipeGestureRecognizerHelperDelegate> delegate;
@property (nonatomic) BOOL allowSwipeUp;
@property (nonatomic) BOOL allowSwipeDown;

- (id)init;
- (id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)a0;
- (BOOL)verticalSwipeGestureRecognizerShouldBegin:(id)a0 ignoringScrollViews:(BOOL)a1;
- (BOOL)verticalSwipeGestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (BOOL)verticalSwipeGestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;

@end

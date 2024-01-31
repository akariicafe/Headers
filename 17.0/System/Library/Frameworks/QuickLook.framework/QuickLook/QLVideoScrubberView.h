@class UIScrollView, NSString, PHVideoScrubberView;

@interface QLVideoScrubberView : UIView <PHVideoScrubberViewInteractionDelegate>

@property (nonatomic) BOOL touchGestureIsActive;
@property (getter=isUserInteractingWithScrubber) BOOL userInteractingWithScrubber;
@property (readonly) UIScrollView *scrollView;
@property (readonly) PHVideoScrubberView *photosScrubber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didBeginTouchingVideoScrubberView:(id)a0;
- (void)didEndTouchingVideoScrubberView:(id)a0;
- (void)videoScrubberView:(id)a0 didEndDeceleratingInScrollView:(id)a1;
- (void)videoScrubberView:(id)a0 didEndDraggingInScrollView:(id)a1;
- (void)videoScrubberView:(id)a0 willBeginDeceleratingInScrollView:(id)a1;
- (void)videoScrubberView:(id)a0 willBeginDraggingInScrollView:(id)a1;
- (void)_updateUserInteractingWithScrubberIfNeeded;

@end

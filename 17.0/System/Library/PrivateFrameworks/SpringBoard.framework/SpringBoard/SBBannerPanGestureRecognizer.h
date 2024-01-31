@class NSMutableSet, SBWindowScene;
@protocol SBBannerPanGestureSystemDragCancellingDelegate;

@interface SBBannerPanGestureRecognizer : UIPanGestureRecognizer {
    BOOL _wantsCancelsTouchesInView;
}

@property (readonly, nonatomic) NSMutableSet *identifiersForTouchesDisablingTouchCancellation;
@property (nonatomic) BOOL clientWantsCancelsTouchesInView;
@property (weak, nonatomic) id<SBBannerPanGestureSystemDragCancellingDelegate> systemDragCancellingDelegate;
@property (weak, nonatomic) SBWindowScene *windowScene;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (void)setCancelsTouchesInView:(BOOL)a0;
- (void)_actuallySetCancelsTouchesInView:(BOOL)a0;
- (void)_addTouchDisablingTouchCancellation:(id)a0;
- (void)_removeTouchDisablingTouchCancellation:(id)a0;
- (void)_removeTouchesDisablingTouchCancellation:(id)a0;
- (void)_updateCancelsTouchesInView;

@end

@class NSString, _UIPassthroughGateGestureRecognizer, UIView, _UIPassthroughScrollGestureRecognizer;
@protocol _UIPassthroughScrollInteractionDelegate;

@interface _UIPassthroughScrollInteraction : NSObject <_UIPassthroughGestureDelegate, UIInteraction>

@property (readonly, nonatomic) UIView *_touchFallbackView;
@property (readonly, nonatomic) _UIPassthroughScrollGestureRecognizer *_passthroughScrollGestureRecognizer;
@property (readonly, nonatomic) _UIPassthroughGateGestureRecognizer *_gestureGate;
@property (weak, nonatomic) id<_UIPassthroughScrollInteractionDelegate> delegate;
@property (nonatomic) BOOL recognizeOnPrimaryButtonDown;
@property (nonatomic) BOOL recognizeOnSecondaryButtonDown;
@property (nonatomic) BOOL eatsTouches;
@property (nonatomic) BOOL configuredForInactiveInteractionEventsOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (BOOL)_shouldEventBePassedThrough:(id)a0;
+ (BOOL)_isPassthroughGestureRecognizer:(id)a0;

- (void)_gestureRecognizerFailed:(id)a0;
- (id)init;
- (void)_tearDown;
- (void)dealloc;
- (void)_setUpForWindow:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)__forciblyEndWithReason:(unsigned long long)a0;
- (void)willMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)_passthroughScrollGestureRecognizerShouldRequireFailureOfGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)_setOverrideAllowsHitTestingOnTouchFallbackView:(BOOL)a0;
- (void)_handlePassthroughRecognizer:(id)a0;
- (void)_handlePassthroughGestureRecognizerEndWithReason:(unsigned long long)a0;
- (BOOL)_delegateShouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_passthroughGestureRecognizer:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_updateGesturesEatTouches;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end

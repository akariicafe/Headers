@class NSString;
@protocol _UIEditMenuDismissalGestureRecognizerDelegate;

@interface _UIEditMenuDismissalGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

@property (weak, nonatomic) id<_UIEditMenuDismissalGestureRecognizerDelegate> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleEventForPassthrough:(id)a0;
+ (BOOL)_supportsTouchContinuation;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;
- (void)_scrollingChangedWithEvent:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_transformChangedWithEvent:(id)a0;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end

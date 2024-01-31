@class NSString;
@protocol _UIPassthroughGestureDelegate;

@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

@property (weak, nonatomic) id<_UIPassthroughGestureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsTouchContinuation;

- (void)_scrollingChangedWithEvent:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)open;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)endClosed;
- (BOOL)shouldReceiveEvent:(id)a0;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;

@end

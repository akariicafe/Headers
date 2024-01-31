@class NSString;
@protocol _UIPassthroughGestureDelegate;

@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {
    struct CGPoint { double x; double y; } _startPoint;
    double _startTime;
    struct CGVector { double dx; double dy; } _accumulatedScrollEventDelta;
    struct { unsigned char commandHeldThroughAllTouchPhases : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long endReason;
@property (nonatomic) BOOL endForPrimaryButtonDown;
@property (nonatomic) BOOL endForSecondaryButtonDown;
@property (weak, nonatomic) id<_UIPassthroughGestureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleEventForPassthrough:(id)a0;
+ (BOOL)_supportsTouchContinuation;

- (id)_window;
- (void)_scrollingChangedWithEvent:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)_endWithReason:(unsigned long long)a0;
- (void)reset;
- (void)_beginAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_transformChangedWithEvent:(id)a0;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setView:(id)a0;

@end

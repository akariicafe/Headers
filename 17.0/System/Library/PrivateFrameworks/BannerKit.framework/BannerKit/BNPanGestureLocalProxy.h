@class NSString, UIView, UIPanGestureRecognizer;
@protocol BNPanGestureProxyDelegate;

@interface BNPanGestureLocalProxy : NSObject <BNPanGestureProxyPrivate> {
    UIPanGestureRecognizer *_panGesture;
    UIView *_containerView;
}

@property (weak, nonatomic) id<BNPanGestureProxyDelegate> delegate;
@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly, nonatomic) BOOL didCrossDefaultThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePan:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (void)sendAction;
- (id)initWithPanGestureRecognizer:(id)a0 containerView:(id)a1;
- (struct CGPoint { double x0; double x1; })translationInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })visualTranslationInCoordinateSpace:(id)a0;

@end

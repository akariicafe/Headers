@class NSString, UIPanGestureRecognizer, UIInputViewSetPlacement;

@interface UIFlickingAssistantViewSupport : UIKeyboardMotionSupport <_UIGeometryChangeObserver> {
    UIPanGestureRecognizer *_panRecognizer;
    long long _position;
    long long _lastMinimizedPosition;
    long long _visualState;
    struct CGPoint { double x; double y; } _initalTouchPoint;
    BOOL _shouldNotifyCompletion;
}

@property (nonatomic) long long draggingState;
@property (nonatomic, setter=setCompact:) BOOL isCompact;
@property (retain, nonatomic) UIInputViewSetPlacement *remotePlacement;
@property (readonly, nonatomic) BOOL handlingFlickGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)assistantPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })assistantFrame;
- (BOOL)isRTL;
- (BOOL)isInputAssistantItemHidden;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (void)_connectController:(id)a0;
- (void)_disconnectingController:(id)a0;
- (void)_initalizePosition;
- (void)_updateKeyboardLayoutGuideForAssistantFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updatedController;
- (struct CGPoint { double x0; double x1; })barOriginFromTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didUpdateTransition;
- (struct CGPoint { double x0; double x1; })keyboardOriginFromAssistantViewPosition:(long long)a0;
- (void)panGestureHandler:(id)a0;
- (struct CGPoint { double x0; double x1; })projectedLandingPointForGestureRecognizerEnd:(id)a0;
- (void)setPositionAndVisualStateByPersistentLocation:(BOOL)a0 minimize:(BOOL)a1;
- (void)transitToDraggingVisualState:(long long)a0 withTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateTransition:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;

@end

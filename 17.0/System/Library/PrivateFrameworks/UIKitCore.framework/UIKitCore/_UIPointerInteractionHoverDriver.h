@class NSString, _UIPointerInteractionHoverGestureRecognizer, UIView, _UIPointerInteractionPressGestureRecognizer;
@protocol _UIPointerInteractionDriverSink;

@interface _UIPointerInteractionHoverDriver : NSObject <UIGestureRecognizerDelegate, _UIPointerInteractionDriver> {
    id<_UIPointerInteractionDriverSink> _sink;
    _UIPointerInteractionHoverGestureRecognizer *_hoverGestureRecognizer;
    _UIPointerInteractionPressGestureRecognizer *_pressGestureRecognizer;
    struct { BOOL invalid; BOOL receivedUpdateWhilePointerDisabled; BOOL observing; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *view;

- (void)_pointerStateDidChange:(id)a0;
- (void)_handleHoverGesture:(id)a0;
- (void)_handlePressGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_uninstallFromView:(id)a0;
- (id)initWithSink:(id)a0;
- (void)invalidate;
- (long long)_currentButtonMask;
- (void)_updateHover:(id)a0 forced:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)allowsUpdatesWhilePrimaryButtonIsPressed;
- (BOOL)isActive;
- (struct CAPoint3D { double x0; double x1; double x2; })locationInView:(id)a0;
- (long long)type;
- (void)_installToView:(id)a0;

@end

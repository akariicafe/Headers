@class NSString, _UIPointerInteractionHoverGestureRecognizer, UIView;
@protocol _UIPointerInteractionDriverSink;

@interface _UIPointerInteractionPencilHoverDriver : NSObject <_UIPointerInteractionDriver> {
    id<_UIPointerInteractionDriverSink> _sink;
    _UIPointerInteractionHoverGestureRecognizer *_hoverGestureRecognizer;
    struct { BOOL invalid; } _flags;
}

@property (weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleHoverGesture:(id)a0;
- (void)_uninstallFromView:(id)a0;
- (id)initWithSink:(id)a0;
- (void)invalidate;
- (void)_updateHover:(id)a0 forced:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)allowsUpdatesWhilePrimaryButtonIsPressed;
- (BOOL)isActive;
- (struct CAPoint3D { double x0; double x1; double x2; })locationInView:(id)a0;
- (long long)type;
- (void)_installToView:(id)a0;

@end

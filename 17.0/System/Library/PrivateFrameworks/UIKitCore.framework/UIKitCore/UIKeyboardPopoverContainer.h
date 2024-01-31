@class UIColor, UIKBVisualEffectView, _UIPopoverView, _UIKeyboardPopoverAffordance, UIView, _UIKeyboardPopover, NSLayoutConstraint;

@interface UIKeyboardPopoverContainer : NSObject {
    _UIKeyboardPopover *_popoverContainerView;
    UIKBVisualEffectView *_backdrop;
    _UIPopoverView *_popover;
    _UIKeyboardPopoverAffordance *_affordance;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetFull;
    double _arrowOffset;
    unsigned long long _direction;
    NSLayoutConstraint *_keyboardAreaHeight;
}

@property (class, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (class, readonly) UIColor *borderColor;
@property (class, readonly) double borderWidth;
@property (class, readonly) double cornerRadius;
@property (class, readonly) double arrowHeight;
@property (class, readonly) UIColor *shadowColor;
@property (class, readonly) double shadowOpacity;
@property (class, readonly) double shadowRadius;
@property (class, readonly) struct CGSize { double x0; double x1; } shadowOffset;
@property (class, readonly) UIColor *pillColor;
@property (class, readonly) double pillCornerRadius;
@property (class, readonly) struct CGSize { double x0; double x1; } pillSize;
@property (class, readonly) double dragAreaHeight;
@property (class, readonly) double pillDistanceToEdge;

@property (readonly, retain) UIView *affordance;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

+ (double)extraWidth;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameAtOffset:(struct CGPoint { double x0; double x1; })a0 keyboardSize:(struct CGSize { double x0; double x1; })a1 screenSize:(struct CGSize { double x0; double x1; })a2;
+ (double)edgeOffset;
+ (id)propertiesForSpecificKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onScreenSize:(struct CGSize { double x0; double x1; })a1;
+ (id)propertiesForTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withHeight:(double)a1 onScreenSize:(struct CGSize { double x0; double x1; })a2;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_updateKeyboardLayoutGuideForPopover:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyProperties:(id)a0;
- (id)initWithView:(id)a0 usingBackdropStyle:(long long)a1;
- (void)updateBackdropStyle:(long long)a0;

@end

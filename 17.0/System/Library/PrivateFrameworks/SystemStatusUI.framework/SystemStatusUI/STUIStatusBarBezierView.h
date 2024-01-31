@class UIColor, NSString, UIBezierPath, CAShapeLayer, UIAccessibilityHUDItem;

@interface STUIStatusBarBezierView : UIView <STUIStatusBarDisplayable>

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (retain, nonatomic) UIBezierPath *bezierPath;
@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) UIColor *strokeColor;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;

@end

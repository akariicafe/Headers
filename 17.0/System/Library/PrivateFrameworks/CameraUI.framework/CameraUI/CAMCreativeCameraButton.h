@class UIImageView;

@interface CAMCreativeCameraButton : UIButton

@property (readonly, nonatomic, getter=_isOverContent) BOOL _overContent;
@property (retain, nonatomic) UIImageView *_circleBackgroundView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, setter=useCompactLayout:) BOOL useCompactLayout;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_updateImages;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_commonCAMCreativeCameraButtonInitializationWithStyle:(long long)a0 overContent:(BOOL)a1;
- (id)initForOverContent;

@end

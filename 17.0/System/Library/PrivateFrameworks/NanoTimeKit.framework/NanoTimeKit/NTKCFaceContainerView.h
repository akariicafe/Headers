@class CAShapeLayer, UIView;

@interface NTKCFaceContainerView : UIControl

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAShapeLayer *outline;
@property (retain, nonatomic) UIView *faceContainer;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) struct CGSize { double width; double height; } faceSize;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *faceView;
@property (nonatomic) BOOL active;

+ (double)_insetPaddingForStyle:(long long)a0;
+ (struct CGSize { double x0; double x1; })faceSizeForSize:(struct CGSize { double x0; double x1; })a0 style:(long long)a1;
+ (struct CGSize { double x0; double x1; })sizeForFaceSize:(struct CGSize { double x0; double x1; })a0 style:(long long)a1;

- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_outlineLineWidth;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForFaceView;
- (void)_updateOutlineColor;
- (id)initWithFaceSize:(struct CGSize { double x0; double x1; })a0 style:(long long)a1;

@end

@class UIColor;

@interface CAMShutterButtonRingView : UIView

@property (nonatomic) struct CAMShutterButtonSpec { double outerRingDiameter; double outerRingStrokeWidth; double stopSquareSideLength; double stopSquareCornerRadius; double interRingSpacing; } spec;
@property (nonatomic) BOOL showContrastBorder;
@property (retain, nonatomic) UIColor *color;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (id)initWithSpec:(struct CAMShutterButtonSpec { double x0; double x1; double x2; double x3; double x4; })a0;
- (id)initWithCoder:(id)a0;

@end

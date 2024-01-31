@class UIColor, NSArray;

@interface HKBorderLineView : UIView

@property (nonatomic) long long edges;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderLineColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderInsets;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumWidth;
@property (retain, nonatomic) NSArray *verticalDrawRanges;

+ (void)drawBorderLinesInContext:(struct CGContext { } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 verticalDrawRanges:(id)a2 borderEdges:(long long)a3 borderLineWidth:(double)a4 borderLineColor:(id)a5 borderInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a6;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_adjustedVerticalDrawRanges;
- (void)_initFields;

@end

@class UIColor, NSMutableDictionary, UIView;

@interface ICTableContentView : UIView

@property (retain, nonatomic) NSMutableDictionary *horizontalStrokes;
@property (retain, nonatomic) NSMutableDictionary *verticalStrokes;
@property (retain, nonatomic) UIView *topBorder;
@property (retain, nonatomic) UIView *bottomBorder;
@property (retain, nonatomic) UIView *leftBorder;
@property (retain, nonatomic) UIView *rightBorder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exclusionRect;
@property (copy, nonatomic) UIColor *highlightColor;
@property (readonly, nonatomic) double innerBorderWidth;
@property (readonly, nonatomic) UIColor *innerBorderColor;

- (void)updateLayout;
- (void)traitCollectionDidChange:(id)a0;
- (void)sharedInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)updateColors;
- (id)outerBorderColor;
- (id)addSubstrokeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toStroke:(id)a1;
- (void)setVerticalLinePosition:(id)a0 forKey:(id)a1;
- (double)alignedPosition:(double)a0;
- (id)createStroke;
- (double)outerBorderWidth;
- (void)recursivelyUpdateLayer:(id)a0 toColor:(struct CGColor { } *)a1 ignoreIfClear:(BOOL)a2;
- (void)setHorizontalLinePosition:(id)a0 forKey:(id)a1;
- (BOOL)splitStroke:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)unsplitStroke:(id)a0;

@end

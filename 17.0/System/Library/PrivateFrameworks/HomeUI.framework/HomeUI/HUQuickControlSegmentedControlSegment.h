@class UILabel, NSString;

@interface HUQuickControlSegmentedControlSegment : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) unsigned long long roundedCorners;

+ (id)selectedColor;
+ (id)highlightedColor;
+ (double)borderInset;

- (void)_updateBackgroundColor;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

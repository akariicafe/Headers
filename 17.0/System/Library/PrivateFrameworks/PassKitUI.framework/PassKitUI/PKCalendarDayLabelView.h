@class UIColor, UILabel, UIView;

@interface PKCalendarDayLabelView : UIView {
    UILabel *_dayLabel;
    UIView *_highlightView;
}

@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (retain, nonatomic) UIColor *highlightTextColor;
@property (nonatomic) double highlightPadding;
@property (retain, nonatomic) UIColor *disabledTextColor;

- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextColor;
- (double)totalSpacingBetweenTextAndLabel;
- (id)_dayLabelFont;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (id)initWithDayString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

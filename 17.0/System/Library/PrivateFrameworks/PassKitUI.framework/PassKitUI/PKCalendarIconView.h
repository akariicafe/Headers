@class UILabel;

@interface PKCalendarIconView : UIView {
    UILabel *_monthLabel;
    UILabel *_dayLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (id)initWithDate:(id)a0 isDisabled:(BOOL)a1;

@end

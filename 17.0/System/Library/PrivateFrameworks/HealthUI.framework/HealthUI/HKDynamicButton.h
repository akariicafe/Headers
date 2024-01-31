@class NSLayoutConstraint;

@interface HKDynamicButton : UIButton

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (double)_buttonLabelHeight;

@end

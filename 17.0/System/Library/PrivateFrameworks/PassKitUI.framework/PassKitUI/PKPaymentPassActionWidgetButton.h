@class PKPaymentPassActionBundle;

@interface PKPaymentPassActionWidgetButton : UIButton

@property (retain, nonatomic) PKPaymentPassActionBundle *actionBundle;
@property (nonatomic) BOOL usesAccessibilityLayout;

+ (double)glyphImageHeight:(BOOL)a0;
+ (double)widgetHeightWithAccessibilityLayout:(BOOL)a0;

- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_applyStyles;
- (id)initWithWidgetViewStyle:(unsigned long long)a0;

@end

@interface StocksUI.QuoteDetailViewLabelAccessibilityElement : UIAccessibilityElement {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ valueLabel;
    void /* unknown type, empty encoding */ scrollView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;

- (id)init;
- (id)initWithAccessibilityContainer:(id)a0;
- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)accessibilityScroll:(long long)a0;

@end

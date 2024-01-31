@class NSString;

@interface NewsUI2.CoinButton : UIButton {
    void /* unknown type, empty encoding */ linkedToggle;
    void /* unknown type, empty encoding */ toggleState;
    void /* unknown type, empty encoding */ isBouncingEnabled;
    void /* unknown type, empty encoding */ onTap;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityValue;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end

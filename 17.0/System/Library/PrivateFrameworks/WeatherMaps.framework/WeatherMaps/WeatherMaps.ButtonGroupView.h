@interface WeatherMaps.ButtonGroupView : UIView {
    void /* unknown type, empty encoding */ buttonGroup;
    void /* unknown type, empty encoding */ menuDelegate;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ axis;
    void /* unknown type, empty encoding */ fixedButtonWidth;
    void /* unknown type, empty encoding */ fixedButtonHeight;
    void /* unknown type, empty encoding */ dividerThickness;
    void /* unknown type, empty encoding */ backgroundEffectView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end

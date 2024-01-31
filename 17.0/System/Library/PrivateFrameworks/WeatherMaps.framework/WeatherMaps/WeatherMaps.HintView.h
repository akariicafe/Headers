@interface WeatherMaps.HintView : UIView {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ maxContentWidth;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ backgroundEffectView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ dismissIcon;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ iconSpacerWidth;
    void /* unknown type, empty encoding */ titleSpacerHeight;
    void /* unknown type, empty encoding */ borderLayer;
    void /* unknown type, empty encoding */ maskLayer;
    void /* unknown type, empty encoding */ onDismissHandler;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dismissTapped;

@end

@class NSString, _TtC12GameCenterUI16DynamicTypeLabel;

@interface GameCenterUI.JetDashboardCellView : UIView {
    void /* unknown type, empty encoding */ glyph;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ chevronGlyph;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ contentViewBackground;
    void /* unknown type, empty encoding */ usingCustomHighlightView;
    void /* unknown type, empty encoding */ isHighlighted;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end

@class NSString, UIButton;

@interface GameCenterUI.GKMultiplayerAddSlotCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ contentBackgroundView;
    void /* unknown type, empty encoding */ vibrancyHost;
    void /* unknown type, empty encoding */ addSlotButton;
    void /* unknown type, empty encoding */ focusGuide;
    void /* unknown type, empty encoding */ addSlotActionHandler;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, copy) id /* block */ addSlotActionHandler;
@property (nonatomic) void /* unknown type, empty encoding */ maximumAdditionalPlayers;
@property (nonatomic, readonly) UIButton *accessibilityAddSlotButton;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end

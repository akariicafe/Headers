@class NSString, _TtC12GameCenterUI16DynamicTypeLabel, UIView;

@interface GameCenterUI.TitleHeaderView : GameCenterUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ detailLabel;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ accessory;
    void /* unknown type, empty encoding */ accessoryAction;
    void /* unknown type, empty encoding */ separatorLineView;
    void /* unknown type, empty encoding */ separatorInset;
    void /* unknown type, empty encoding */ allowsAccessibilityLayouts;
    void /* unknown type, empty encoding */ avoidanceRegion;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ accessoryView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ iconArtworkView;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) UIView *accessibilityAccessoryView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_disableRasterizeInAnimations;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didTapWithAccessoryView:(id)a0;

@end

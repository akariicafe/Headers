@class UILabel;

@interface GameCenterUI.SectionHeaderView : UICollectionReusableView {
    void /* unknown type, empty encoding */ avoidanceRegion;
    void /* unknown type, empty encoding */ achievementsTheme;
    void /* unknown type, empty encoding */ sectionHeaderLabel;
}

@property (nonatomic, readonly) UILabel *accessibilitySectionHeaderLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end

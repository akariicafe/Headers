@interface SeymourUI.MusicTrackCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ commonConstraints;
    void /* unknown type, empty encoding */ standardConstraints;
    void /* unknown type, empty encoding */ accessibilityConstraints;
    void /* unknown type, empty encoding */ standardLayout;
    void /* unknown type, empty encoding */ accessibilityLayout;
    void /* unknown type, empty encoding */ showSeparator;
    void /* unknown type, empty encoding */ commonLayout;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ explicitIconLabel;
    void /* unknown type, empty encoding */ separator;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

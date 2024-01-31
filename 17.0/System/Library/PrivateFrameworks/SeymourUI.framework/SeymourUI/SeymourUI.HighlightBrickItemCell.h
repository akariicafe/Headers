@interface SeymourUI.HighlightBrickItemCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentConstraints;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ layoutGuide;
    void /* unknown type, empty encoding */ headlineLabel;
    void /* unknown type, empty encoding */ indexLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ platter;
    void /* unknown type, empty encoding */ hasIndex;
    void /* unknown type, empty encoding */ isCurrentTitleRTL;
    void /* unknown type, empty encoding */ indexLeadingConstraint;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ layoutGuideLeadingConstraint;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

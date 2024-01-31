@interface SeymourUI.TabletIndexedBrickItemCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ indexLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ downloadButton;
    void /* unknown type, empty encoding */ textBoxLayoutGuide;
    void /* unknown type, empty encoding */ indexLeadingConstraint;
    void /* unknown type, empty encoding */ isCurrentTitleRTL;
    void /* unknown type, empty encoding */ textBoxLayoutGuideLeadingConstraint;
}

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleDownloadButtonTapped;
- (void)updateFonts:(id)a0;

@end

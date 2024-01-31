@interface SeymourUI.SummaryContentSummaryView : UIView {
    void /* unknown type, empty encoding */ thumbnailDimensions;
    void /* unknown type, empty encoding */ thumbnailView;
    void /* unknown type, empty encoding */ bookmarkButton;
    void /* unknown type, empty encoding */ shareButton;
    void /* unknown type, empty encoding */ labels;
    void /* unknown type, empty encoding */ layoutGuide;
    void /* unknown type, empty encoding */ layoutGuideConstraints;
    void /* unknown type, empty encoding */ layoutGuideSecondaryConstraints;
    void /* unknown type, empty encoding */ labelsBottomConstraint;
    void /* unknown type, empty encoding */ bookmarkButtonBottomConstraint;
    void /* unknown type, empty encoding */ thumbnailWidthConstraint;
    void /* unknown type, empty encoding */ thumbnailHeightConstraint;
    void /* unknown type, empty encoding */ onBookmarkTapped;
    void /* unknown type, empty encoding */ onShareButtonTapped;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)bookmarkButtonTapped;
- (void)shareButtonTapped;

@end

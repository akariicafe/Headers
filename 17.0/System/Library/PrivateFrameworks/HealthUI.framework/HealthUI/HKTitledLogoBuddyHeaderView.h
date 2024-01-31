@class UIImage, UIImageView, NSLayoutConstraint;

@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView {
    UIImageView *_logoImageView;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchor;
}

@property (retain, nonatomic) UIImage *logoImage;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)bottomPadding;
- (void)_updateForCurrentSizeCategory;
- (id)logoImageView;
- (id)initWithTopInset:(double)a0 linkButtonTitle:(id)a1;

@end

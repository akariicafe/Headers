@class NSLayoutConstraint;

@interface HKTitledContactBuddyHeaderView : HKTitledBuddyHeaderView {
    NSLayoutConstraint *_titleBaselineConstraint;
}

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)bottomPadding;
- (void)_updateForCurrentSizeCategory;
- (id)initWithTopInset:(double)a0 parentViewController:(id)a1;

@end

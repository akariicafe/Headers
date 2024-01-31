@class UILabel, RUIWebContainerView, NSLayoutConstraint;

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UILabel *_detailLabel;
    NSLayoutConstraint *_imageConstraint;
    NSLayoutConstraint *_leadingConstraint;
    RUIWebContainerView *_htmlSublabelContainer;
}

- (void)setBackgroundColor:(id)a0;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)detailTextLabel;
- (id)valueLabel;
- (void)_setUpViews;
- (void)_updateLeadingConstraint;
- (id)effectiveDetailTextLabel;
- (id)effectiveValueTextLabel;
- (void)setHTMLSubLabelData:(id)a0 sourceURL:(id)a1 delegate:(id)a2;
- (void)setImage:(id)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 tintColor:(id)a2;

@end

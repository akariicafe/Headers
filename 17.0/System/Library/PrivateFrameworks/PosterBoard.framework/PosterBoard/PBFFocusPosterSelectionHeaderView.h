@class UIStackView, NSString, UILabel, UIView, NSAttributedString, NSLayoutConstraint;

@interface PBFFocusPosterSelectionHeaderView : UICollectionReusableView {
    UIStackView *_stackView;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorViewHeightConstraint;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createSeparatorView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)_createStackView;
- (void)_createTitleLabel;
- (void)_createSubtitleLabel;
- (void)_updateSeparatorHeightConstraint;

@end

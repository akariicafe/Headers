@class UITapGestureRecognizer, UILabel, NSLayoutConstraint;

@interface GKChallengeListViewSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UITapGestureRecognizer *secondaryLabelTapGesture;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (nonatomic) BOOL wantsSecondaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (copy, nonatomic) id /* block */ secondaryLabelTapHandler;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)secondaryLabelTapped:(id)a0;

@end

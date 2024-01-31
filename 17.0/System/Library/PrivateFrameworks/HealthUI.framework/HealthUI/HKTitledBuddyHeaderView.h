@class UITextView, NSString, UILabel, NSLayoutConstraint, UIButton;
@protocol HKTitledBuddyHeaderViewDelegate;

@interface HKTitledBuddyHeaderView : UIView {
    UITextView *_bodyTextView;
    UIButton *_optionalLinkButton;
    NSString *_bodyText;
    long long _bodyTextAlignment;
    NSLayoutConstraint *_logoTitleGapConstraint;
    NSLayoutConstraint *_bodyZeroHeightConstraint;
    NSLayoutConstraint *_bodyBottomConstraint;
    NSLayoutConstraint *_titleBottomConstraint;
    NSLayoutConstraint *_bodyFirstBaselineConstraint;
    NSLayoutConstraint *_bodyLastBaselineToLinkConstraint;
    NSLayoutConstraint *_linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
}

@property (weak, nonatomic) id<HKTitledBuddyHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;
@property (nonatomic) long long bodyTextAlignment;
@property (readonly, nonatomic) UILabel *titleLabel;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)bottomPadding;
- (void)_updateForCurrentSizeCategory;
- (id)bodyTextView;
- (id)_attributedBodyTextWithString:(id)a0 alignment:(long long)a1;
- (void)_linkButtonTapped:(id)a0;
- (void)_updateBodyTextViewConstraints;
- (void)deactivateDefaultTitleLabelBaselineConstraint;
- (id)initWithTopInset:(double)a0 linkButtonTitle:(id)a1;
- (void)setBodyText:(id)a0 alignment:(long long)a1;

@end

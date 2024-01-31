@class UITextView, _HKClinicalBulletedListLayoutManager, HKSource, NSLayoutConstraint;

@interface HKClinicalAuthorizationPrivacyDetailsCell : UITableViewCell

@property (readonly, nonatomic) NSLayoutConstraint *superviewTopToContentsTextViewFirstBaselineConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentsTextViewLastBaselineToSuperviewBottomConstraint;
@property (readonly, nonatomic) UITextView *contentsTextView;
@property (readonly, nonatomic) _HKClinicalBulletedListLayoutManager *bulletLayoutManager;
@property (weak, nonatomic) HKSource *source;

- (void)traitCollectionDidChange:(id)a0;
- (void)_setUpSubviews;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentContentSizeCategory;
- (void)_setUpConstraints;
- (id)_titleParagraphStyle;
- (id)_localizedTitleString;
- (id)_attributedContentsTextViewStringForCurrentContentSizeCategory;
- (id)_attributedStringForBullet;
- (id)_attributedStringForBulletAtIndex:(long long)a0;
- (id)_attributedTitleString;
- (id)_bodyEmph;
- (id)_bulletContentFont;
- (id)_bulletContentParagraphStyle;
- (id)_bulletFont;
- (id)_createContentsTextViewWithLayoutManager:(id)a0;
- (id)_localizedBulletContentStringForBulletAtIndex:(long long)a0;

@end

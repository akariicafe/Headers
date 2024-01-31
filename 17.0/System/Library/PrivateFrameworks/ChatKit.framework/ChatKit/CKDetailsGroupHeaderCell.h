@class UILabel, NSArray, CKDetailsAvatarPancakeView;

@interface CKDetailsGroupHeaderCell : CKDetailsShowMoreContactsCell

@property (retain, nonatomic) CKDetailsAvatarPancakeView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) NSArray *avatarViews;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_additionalHeightToAccommodateInterTextVerticalSpacing;
- (void)addConstraints;
- (void)configureCellIconForCollapsedState:(BOOL)a0;
- (id)constraintsForAccessibility;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 participants:(id)a2;
- (id)standardConstraints;
- (id)standardWolfConstraints;

@end

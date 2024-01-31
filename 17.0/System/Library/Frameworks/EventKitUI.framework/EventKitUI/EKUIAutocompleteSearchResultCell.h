@interface EKUIAutocompleteSearchResultCell : EKUITableViewCellWithPrimaryAndSecondaryFonts

+ (id)primaryTextColor;
+ (id)secondaryTextColor;
+ (double)cellHeightForResult:(id)a0 forWidth:(double)a1;
+ (id)secondaryTextLabelFont;
+ (double)verticalSpacingBottomToBaselineForBottomLabelWithPrimaryFont:(id)a0;
+ (double)verticalSpacingTopToBaselineForBottomLabelWithSecondaryFont:(id)a0;
+ (double)verticalSpacingTopToBaselineForTopLabelWithPrimaryFont:(id)a0;

- (void)setupConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateContentForSizeCategoryChange:(id)a0;
- (void)updateWithResult:(id)a0;
- (id)_createLabelWithColor:(id)a0;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (id)createPrimaryLabel;
- (id)createSecondaryLabel;
- (void)setLabelFonts;
- (double)verticalSpacingTopToBaselineForBottomLabel;
- (double)verticalSpacingTopToBaselineForTopLabel;
- (double)verticalSpacingTopToColorDot;

@end

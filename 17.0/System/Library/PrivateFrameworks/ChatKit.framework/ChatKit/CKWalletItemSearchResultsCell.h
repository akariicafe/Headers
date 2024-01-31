@interface CKWalletItemSearchResultsCell : CKAttachmentSearchResultCell

+ (id)reuseIdentifier;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })avatarOffsetLTR;
- (struct CGPoint { double x0; double x1; })avatarOffsetRTL;
- (double)editModeHorizontalOffset;

@end

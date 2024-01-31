@interface _TVUISearchBar : UISearchBar

+ (id)_clearGlyph;
+ (id)_searchGlyph;
+ (id)_tvmlKitBundle;

- (void)traitCollectionDidChange:(id)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateRightView;

@end

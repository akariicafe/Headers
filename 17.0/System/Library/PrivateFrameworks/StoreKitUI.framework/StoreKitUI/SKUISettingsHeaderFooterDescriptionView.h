@interface SKUISettingsHeaderFooterDescriptionView : UIView

+ (struct CGSize { double x0; double x1; })preferredSizeForSettingsHeaderFooterDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingsHeaderFooterDescription:(id)a1 context:(id)a2;

- (void)reloadWithSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end

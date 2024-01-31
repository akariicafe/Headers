@class UILabel, NSMutableArray, SKUIHandleRulesSettingsHeaderFooterDescription;

@interface SKUIHandleRulesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    NSMutableArray *_buttons;
    SKUIHandleRulesSettingsHeaderFooterDescription *_description;
    UILabel *_label;
}

+ (id)_labelWithDescription:(id)a0 forWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingsHeaderFooterDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingsHeaderFooterDescription:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadWithSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end

@class UILabel, SKUIViewElement;

@interface SKUITextHeaderSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    UILabel *_label;
    SKUIViewElement *_viewElement;
}

+ (id)_concatenateTextFromLabelElements:(id)a0;
+ (id)_labelElementsFromViewElement:(id)a0;
+ (id)_labelWithLabelElements:(id)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingsHeaderFooterDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingsHeaderFooterDescription:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadWithSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end

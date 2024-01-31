@class UIButton, SUUIButtonViewElement, SUUIViewElement;

@interface SUUIButtonFooterSettingsHeaderFooterDescriptionView : SUUISettingsHeaderFooterDescriptionView {
    UIButton *_button;
    SUUIButtonViewElement *_buttonElement;
    SUUIViewElement *_viewElement;
}

+ (id)_buttonWithButtonElement:(id)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingsHeaderFooterDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingsHeaderFooterDescription:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)a0;
- (void)layoutSubviews;
- (void)_reloadWithButtonElement:(id)a0 context:(id)a1;
- (void)reloadWithSettingsHeaderFooterDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end

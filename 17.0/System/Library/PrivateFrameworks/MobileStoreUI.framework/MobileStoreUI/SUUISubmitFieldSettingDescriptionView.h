@class SUUIInputViewElement, UILabel, SUUIFieldSettingDescription;

@interface SUUISubmitFieldSettingDescriptionView : SUUIFieldSettingDescriptionView {
    double _aggregateLabelWidth;
    SUUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SUUIFieldSettingDescription *_settingDescription;
}

+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;

- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)tintColorDidChange;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_addInputWithElement:(id)a0;
- (void)_addSubmitInputWithElement:(id)a0;
- (id)_currentControllerValue;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end

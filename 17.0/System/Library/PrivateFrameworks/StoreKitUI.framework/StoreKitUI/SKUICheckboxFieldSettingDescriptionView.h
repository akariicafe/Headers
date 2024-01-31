@class NSString, SKUIInputViewElement, UISwitch, UILabel, SKUIFieldSettingDescription;

@interface SKUICheckboxFieldSettingDescriptionView : SKUIFieldSettingDescriptionView <UITextFieldDelegate> {
    double _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
    UISwitch *_switch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;

- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_switchValueChanged:(id)a0;
- (void)_addInputWithElement:(id)a0;
- (void)_addLabelWithElement:(id)a0;
- (void)_addSwitchWithElement:(id)a0;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end

@class SKUIEditProfileSettingDescription, NSString, SKUIClientContext, UITextField, CALayer, SKUIImageView, UIButton;

@interface SKUIEditProfileSettingDescriptionView : SKUISettingDescriptionView <UITextFieldDelegate> {
    CALayer *_divider1;
    SKUIClientContext *_clientContext;
    UIButton *_editButton;
    UITextField *_nameField;
    UITextField *_handleField;
    SKUIImageView *_imageView;
    SKUIEditProfileSettingDescription *_settingDescription;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_baselineFontForTextStyle:(id)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_editProfilePhoto;
- (id)_textFieldWithPlaceholder:(id)a0;
- (void)_updateHandleTextFieldValidity;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end

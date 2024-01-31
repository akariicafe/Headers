@class NSString, UITextField, TFFeedbackEntryShortText;

@interface TFFeedbackFormShortTextCell : TFFeedbackFormBaseCell <UITextFieldDelegate>

@property (readonly, nonatomic) UITextField *textField;
@property (retain, nonatomic) TFFeedbackEntryShortText *shortTextEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createTextFieldFontWithTraitCollection:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeToFitText:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1 inTraitEnvironment:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_textFieldInsetsInTraitEnvironment:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForEntry:(id)a0 dataSource:(id)a1 fittingSize:(struct CGSize { double x0; double x1; })a2 inTraitEnvironment:(id)a3;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (void)_configureTextFieldForContentType:(unsigned long long)a0;
- (void)_prepareForDisplayWithTraitCollection:(id)a0;
- (void)applyContentsOfEntry:(id)a0;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataString:(id)a0;

@end

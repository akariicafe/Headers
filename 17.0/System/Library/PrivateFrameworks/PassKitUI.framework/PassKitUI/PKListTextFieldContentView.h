@class NSString, PKListTextFieldContentConfiguration, UITextField, UILabel;
@protocol PKListTextFieldContentViewDelegate;

@interface PKListTextFieldContentView : UIView <UITextFieldDelegate, UIContentView> {
    UILabel *_textLabel;
    UITextField *_textField;
    UILabel *_secondaryTextLabel;
    BOOL _isTemplateLayout;
}

@property (copy, nonatomic) PKListTextFieldContentConfiguration *configuration;
@property (retain, nonatomic) id<PKListTextFieldContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)endEditing;
- (void)setToolbarItems:(id)a0;
- (void)textFieldDidChangeSelection:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)_applyConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)_textAlignmentForListAlignment:(long long)a0;
- (void)_applyTextProperties:(id)a0 toLabel:(id)a1;
- (void)_applyTextProperties:(id)a0 toTextField:(id)a1;
- (BOOL)_keepTextFieldVisible;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_textAutocapTypeForTextTransform:(long long)a0;
- (void)_textFieldTextDidChange:(id)a0;
- (id)_transformedText:(id)a0 forTransform:(long long)a1;
- (void)_updateErrorState:(BOOL)a0;
- (void)resetTextFieldTextFromLabel;
- (id)textFieldText;

@end

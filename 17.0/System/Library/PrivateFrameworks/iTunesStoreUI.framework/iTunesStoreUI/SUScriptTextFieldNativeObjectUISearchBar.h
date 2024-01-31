@interface SUScriptTextFieldNativeObjectUISearchBar : SUScriptTextFieldNativeObject

- (void)setWidth:(double)a0;
- (void)setAutocorrectionType:(long long)a0;
- (void)setAutocapitalizationType:(long long)a0;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)a0;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (BOOL)resignFirstResponder;
- (void)setPlaceholder:(id)a0;
- (id)placeholder;
- (double)width;
- (id)value;
- (BOOL)becomeFirstResponder;
- (void)setValue:(id)a0;
- (id)_nativeObjectDelegate;
- (void)_setNativeObjectDelegate:(id)a0;

@end

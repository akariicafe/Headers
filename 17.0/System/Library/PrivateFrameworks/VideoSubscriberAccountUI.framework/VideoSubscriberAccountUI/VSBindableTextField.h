@interface VSBindableTextField : UITextField

- (void)setAutocorrectionType:(long long)a0;
- (void)setSecureTextEntry:(BOOL)a0;
- (void)setAutocapitalizationType:(long long)a0;
- (long long)returnKeyType;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)a0;
- (void)setReturnKeyType:(long long)a0;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (void)setPlaceholder:(id)a0;
- (id)placeholder;
- (BOOL)isSecureTextEntry;
- (void)setText:(id)a0;
- (id)text;

@end

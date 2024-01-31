@class UnifiedField;

@interface NavigationBar : _SFNavigationBar

@property (readonly, nonatomic) UnifiedField *textField;

- (id)newTextField;
- (double)placeholderHorizontalInset;
- (void)setExpanded:(BOOL)a0 textFieldSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTextFieldPlaceHolderColor:(id)a0;

@end

@interface _UITextFormattingActionClientToHost : _UISceneHostingActionClientToHost

+ (id)actionForPresentColorPickerWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectedColor:(id)a1;
+ (id)actionForPresentFontPickerWithConfiguration:(id)a0 selectedFonts:(id)a1;
+ (id)actionForRequestType:(long long)a0;
+ (id)actionForUpdateTextAttributesWithData:(id)a0;

- (void)performActionForSceneController:(id)a0;

@end

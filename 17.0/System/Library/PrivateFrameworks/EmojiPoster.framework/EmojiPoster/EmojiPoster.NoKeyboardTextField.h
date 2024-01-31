@interface EmojiPoster.NoKeyboardTextField : UITextField

@property (nonatomic, readonly) BOOL supportsImagePaste;

- (BOOL)_disableAutomaticKeyboardBehavior;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buildMenuWithBuilder:(id)a0;
- (BOOL)_disableAutomaticKeyboardUI;
- (id)initWithCoder:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end

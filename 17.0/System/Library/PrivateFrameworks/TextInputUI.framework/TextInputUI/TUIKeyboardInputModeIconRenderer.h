@interface TUIKeyboardInputModeIconRenderer : NSObject

- (id)imageForPrimaryLabel:(id)a0 secondaryLabel:(id)a1 withConfiguration:(id)a2;
- (id)attributedStringWithText:(id)a0 color:(id)a1;
- (id)attributedStringForPrimaryLabel:(id)a0 secondaryLabel:(id)a1 withTintColor:(id)a2 language:(id)a3;
- (void)drawPrimaryLabel:(id)a0 secondaryLabel:(id)a1 withConfiguration:(id)a2 inContext:(struct CGContext { } *)a3;

@end

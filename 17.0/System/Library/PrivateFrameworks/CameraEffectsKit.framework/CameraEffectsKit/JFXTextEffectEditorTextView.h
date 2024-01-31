@class JFXTextEffectEditorView;

@interface JFXTextEffectEditorTextView : UITextView

@property (weak, nonatomic) JFXTextEffectEditorView *editorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textFrameWithoutFudge;

- (id)textStylingAtPosition:(id)a0 inDirection:(long long)a1;
- (id)textColorForCaretSelection;
- (void)unmarkText;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)JFX_adjustTextEditingViewFrameAndInsetsForShadow:(id)a0;
- (unsigned long long)JFX_countNumberOfLines;
- (void)JFX_adjustSizeToMatchExpectedNumberOfLines:(id)a0;
- (void)JFX_adjustTextEditingViewInsetsForVerticalAlignment:(long long)a0 textAreaHeight:(double)a1 textHeight:(double)a2;
- (void)applyTextEditingProperties:(id)a0;
- (id)initWithTextEditingProperties:(id)a0 editorView:(id)a1;
- (id)initWithTextEditingProperties:(id)a0 editorView:(id)a1 textContainer:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textEditingFrame;

@end

@interface PaperKit.InlineDrawingTiledTextView : PKTiledTextView <PKSelectionInteractionDelegate> {
    void /* unknown type, empty encoding */ inlineDrawingCanvasElementController;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initInScrollView:(id)a0 sixChannelBlending:(BOOL)a1 defaultDrawingClass:(Class)a2 readOnly:(BOOL)a3;
- (BOOL)selectionInteraction:(id)a0 canPerformAction:(SEL)a1 withSender:(id)a2 inAttachment:(id)a3;
- (void)selectionInteractionDidPaste:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 inAttachment:(id)a2;

@end

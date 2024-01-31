@interface PaperKit.TiledDocumentView : PKTiledView {
    void /* unknown type, empty encoding */ currentPaperView;
    void /* unknown type, empty encoding */ canvasElementController;
    void /* unknown type, empty encoding */ toolPicker;
    void /* unknown type, empty encoding */ selectionInteractionDelegate;
    void /* unknown type, empty encoding */ _paperAttachments;
}

- (id)attachments;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initInScrollView:(id)a0;
- (id)initInScrollView:(id)a0 sixChannelBlending:(BOOL)a1 defaultDrawingClass:(Class)a2 readOnly:(BOOL)a3;

@end

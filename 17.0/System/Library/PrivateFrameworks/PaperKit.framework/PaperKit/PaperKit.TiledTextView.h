@class PKLinedPaper;

@interface PaperKit.TiledTextView : PKTiledTextView {
    void /* unknown type, empty encoding */ currentPaperView;
    void /* unknown type, empty encoding */ paperLinedPaper;
    void /* unknown type, empty encoding */ canvasElementController;
    void /* unknown type, empty encoding */ selectionInteractionDelegate;
}

@property (nonatomic, retain) PKLinedPaper *linedPaper;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initInScrollView:(id)a0 sixChannelBlending:(BOOL)a1 defaultDrawingClass:(Class)a2 readOnly:(BOOL)a3;

@end

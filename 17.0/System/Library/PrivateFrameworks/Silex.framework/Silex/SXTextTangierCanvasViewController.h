@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController

@property (nonatomic) BOOL selectionEnabled;

- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (void)selectAll:(id)a0;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;
- (void)loadView;
- (BOOL)canBecomeFirstResponder;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)interactionDidEnd:(id)a0;
- (id)actionForHyperlink:(id)a0 inRep:(id)a1 gesture:(id)a2;

@end

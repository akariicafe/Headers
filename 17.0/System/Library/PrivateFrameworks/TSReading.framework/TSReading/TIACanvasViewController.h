@class TSAInteractiveCanvasController, UIGestureRecognizer;

@interface TIACanvasViewController : TSWPiOSCanvasViewController

@property UIGestureRecognizer *hyperlinkGestureRecognizer;
@property (readonly, nonatomic) TSAInteractiveCanvasController *interactiveCanvasController;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)wantsHyperlinkGestureRecognizer;
- (id)commonGestureRecognizers;
- (id)p_LocalGestureRecognizers;
- (void)setUpGestureRecognizers;

@end

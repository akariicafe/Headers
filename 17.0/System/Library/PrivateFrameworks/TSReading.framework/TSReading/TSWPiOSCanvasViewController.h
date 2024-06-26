@class UITextInteraction, TSWPLongPressGestureRecognizer, TSWPInteractiveCanvasController, TSWPSwipeGestureRecognizer, UITapGestureRecognizer, NSString, TSWPTwoPartAction, TSWPHyperlinkField, NSMutableArray, TSWPRep, TSUColor, UIGestureRecognizer;

@interface TSWPiOSCanvasViewController : TSDiOSCanvasViewController <UITextInteractionDelegate, UITextLinkInteraction, UIDragInteractionDelegate> {
    TSWPTwoPartAction *_delayedTapAction;
    NSMutableArray *_gestureRecognizers;
    BOOL _isInteractingWithHyperLink;
    BOOL _linkInteractionIsLongPress;
    TSWPHyperlinkField *_interactionHyperlinkField;
    TSWPRep *_interactionHyperLinkRep;
}

@property (readonly) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) TSWPSwipeGestureRecognizer *textLeftSwipeGestureRecognizer;
@property (readonly, nonatomic) TSWPSwipeGestureRecognizer *textRightSwipeGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *secondarySingleTapGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *hyperlinkGestureRecognizer;
@property (readonly, nonatomic) TSWPLongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UITextInteraction *textInteraction;
@property (readonly, nonatomic) TSUColor *backgroundColorForMagnifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)dealloc;
- (void)teardown;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)tapLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_requestTextItemConstrainedToLineAtPoint:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (void)cancelInteractionWithLink;
- (void)interactionDidEnd:(id)a0;
- (BOOL)interactionShouldBegin:(id)a0;
- (BOOL)interactionShouldSuppressSystemUI:(id)a0;
- (void)interactionWillBegin:(id)a0;
- (BOOL)isInteractingWithLink;
- (BOOL)mightHaveLinks;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)actionForHyperlink:(id)a0 inRep:(id)a1 gesture:(id)a2;
- (void)cancelDelayedTapAction;
- (id)_hitRepAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldAllowInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_clearSelectedRange;
- (id)_dragItemsForInteraction:(id)a0 session:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)_hyperLinkFieldAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_resetAndClearInteractions;
- (void)_resetLinkInteraction;
- (id)_textInteractionBlockingRepClasses;
- (void)addSwipeGestureRecognizers;
- (BOOL)canDisplayHyperlinkUI;
- (void)finishDelayedTapAction;
- (void)gestureSequenceDidEnd;
- (void)gestureSequenceWillBegin;
- (BOOL)hasDelayedTapAction;
- (id)hyperlinkUICustomStringForURLString:(id)a0;
- (void)hyperlinkUIDidHide;
- (BOOL)hyperlinkUIShouldShow;
- (BOOL)hyperlinkUIShouldShowCustomUI;
- (void)hyperlinkUIShowCustomUIforRep:(id)a0 field:(id)a1;
- (void)hyperlinkUIWillShow;
- (BOOL)onlyAllowTextSwipesWhenEditing;
- (void)p_addSwipeGestureRecognizer:(id)a0 failRequiredFor:(id)a1;
- (id)p_newSwipeGestureRecognizerWithDirection:(int)a0 numberOfTouchesRequired:(unsigned int)a1;
- (void)removeSwipeGestureRecognizers;
- (void)setUpGestureDependenciesForNewCopyOfTextGesture:(id)a0;
- (void)setUpGestureRecognizers;
- (BOOL)shouldHideCanvasLayerInMagnifier;
- (void)startDelayedTapAction:(id)a0;

@end

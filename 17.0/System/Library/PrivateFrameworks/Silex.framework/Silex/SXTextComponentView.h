@class SXTextView, SXTangierController, NSString;

@interface SXTextComponentView : SXComponentView <SXTextViewDelegate>

@property (readonly, weak, nonatomic) SXTangierController *tangierController;
@property (retain, nonatomic) SXTextView *textView;
@property (nonatomic) struct CGSize { double width; double height; } calculatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)animationDidFinish:(id)a0;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)receivedInfo:(id)a0 fromLayoutingPhaseWithIdentifier:(id)a1;
- (id)componentIdentifierForTextView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })absoluteTextViewFrame;
- (id)accessibilityContextualLabelForTextView:(id)a0;
- (id)accessibilityCustomRotorMembershipForTextView:(id)a0;
- (void)didApplyBehavior:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 tangierController:(id)a4;
- (void)provideInfosLayoutTo:(id)a0;
- (void)setPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupTextView;
- (id)textRulesForTextView:(id)a0;
- (id)textSource;
- (BOOL)userInteractable;

@end

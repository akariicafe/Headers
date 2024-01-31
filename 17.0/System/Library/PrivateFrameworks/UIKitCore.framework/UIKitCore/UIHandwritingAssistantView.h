@class UIKeyboardCandidatePocketShadow, UIKBHandwritingCandidateView, TUISystemInputAssistantView;

@interface UIHandwritingAssistantView : UIKBKeyView

@property (retain, nonatomic) TUISystemInputAssistantView *systemInputAssistantView;
@property (retain, nonatomic) UIKBHandwritingCandidateView *candidateView;
@property (retain, nonatomic) UIKeyboardCandidatePocketShadow *rightBorder;

- (void)dimKeys:(id)a0;
- (void)displayLayer:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)candidateList;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })assistantFrameForKeyplane:(id)a0 key:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (void)updateForKeyplane:(id)a0 key:(id)a1;

@end

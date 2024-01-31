@class NSString, TIKeyboardCandidate, UIView, NSMutableArray;
@protocol UITextCompletionAcceptanceDelegate;

@interface UIInlineTextCompletionPrompt : UIView {
    UIView *_textCompletionView;
    NSMutableArray *_typedTextViews;
    BOOL _touchDown;
}

@property (readonly, nonatomic) TIKeyboardCandidate *textCompletionCandidate;
@property (readonly, nonatomic) NSString *textCompletion;
@property (readonly, nonatomic) NSString *typedText;
@property (weak, nonatomic) id<UITextCompletionAcceptanceDelegate> delegate;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (int)textEffectsVisibilityLevel;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (void)accept;
- (void)removePromptSubviews;
- (void)setTextCompletion:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)textEffectsVisibilityLevelInKeyboardWindow;

@end

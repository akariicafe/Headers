@class NSString, NSMutableArray, UIView;

@interface UIAutocorrectInlinePrompt : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_originalTypedTextRect;
    NSString *m_typedText;
    NSString *m_correction;
    NSMutableArray *m_typedTextViews;
    UIView *m_correctionView;
    UIView *m_correctionAnimationView;
    UIView *m_typedTextAnimationView;
    UIView *m_correctionShadowView;
    BOOL m_fits;
    BOOL m_mouseDown;
    double m_originalTypedTextRectCorrectionAmount;
}

@property (nonatomic) unsigned int usageTrackingMask;

- (void)dismiss;
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
- (void)addTypedTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)correction;
- (id)correctionAnimationView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })correctionFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textHeight:(int)a1 withExtraGap:(double)a2;
- (id)correctionShadowView;
- (id)correctionView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })horizontallySquishedCorrectionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAcceptableTextEffectsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 afterScrollBy:(double)a1;
- (BOOL)prepareForAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removePromptSubviews;
- (void)setCorrection:(id)a0 typedText:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (id)typedText;
- (id)typedTextAnimationView;
- (id)typedTextView;

@end

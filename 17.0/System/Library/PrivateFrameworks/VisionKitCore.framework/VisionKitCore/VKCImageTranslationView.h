@class LTUIVisualTranslationView, VKCVisualSearchResult, UIView;

@interface VKCImageTranslationView : VKCImageBaseOverlayView

@property (retain, nonatomic) LTUIVisualTranslationView *visualTranslationView;
@property (weak, nonatomic) UIView *presentationAnchorView;
@property BOOL translationNeedsUpdate;
@property (retain, nonatomic) UIView *translationContainerView;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;

- (id)recognizedLines;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setRecognitionResult:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)showTranslationOverlay;
- (void)hideTranslationOverlay;
- (void)checkForTranslationResultsWithCompletion:(id /* block */)a0;

@end

@class CFXEffectEditorView, NSString, JFXOverlayEffectDebugViewOptions, UIView, CFXEffect;
@protocol CFXFullScreenTextEditViewControllerDelegate;

@interface CFXFullScreenTextEditViewController : UIViewController <CFXEffectEditorViewDelegate>

@property (class, readonly, nonatomic) BOOL isFullScreenTextEditorPresented;

@property (retain, nonatomic) CFXEffect *workingEffect;
@property (retain, nonatomic) CFXEffectEditorView *effectEditor;
@property (readonly, weak, nonatomic) id<CFXFullScreenTextEditViewControllerDelegate> delegate;
@property (nonatomic) BOOL effectWasRemoved;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } effectEditorFrameRelativeToScreen;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) BOOL isRunningAnimation;
@property (nonatomic) BOOL insertingEffect;
@property (retain, nonatomic) JFXOverlayEffectDebugViewOptions *debugOptions;
@property (retain, nonatomic) UIView *debugView;
@property (readonly, nonatomic) CFXEffect *textEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resign;
+ (id)CFX_fadeTimingParameters;
+ (BOOL)displayFullScreenTextEditorForEffect:(id)a0 inViewController:(id)a1 delegate:(id)a2 cameraViewWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 insertingEffect:(BOOL)a4;
+ (void)notifyCameraViewWindowFrameChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)removeFullScreenTextEditor;

- (void)keyboardDidHide:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)effectEditorView:(id)a0 didTransformEffect:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)effectEditorView:(id)a0 textForEffect:(id)a1;
- (void)CFX_animateWithDuration:(double)a0 animatingIn:(BOOL)a1 completion:(id /* block */)a2;
- (id)effectEditorView:(id)a0 effectAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)configureWorkingEffect;
- (void)didTappedEmptyDimmedArea:(id)a0;
- (void)effectEditorView:(id)a0 applyAnimationTransformsToEffect:(id)a1 transforms:(id)a2;
- (id)effectEditorView:(id)a0 beginEditingAnimationFromFrameForEffect:(id)a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)effectEditorView:(id)a0 beginEditingAnimationToFrameForEffect:(id)a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)effectEditorView:(id)a0 calculateAnimatedFaceTrackingTransformWithCurrentFaceTrackingDataFromTrackingType:(long long)a1 interpolatedWithFaceTrackingTransform:(id)a2 toTrackingType:(long long)a3 atAnimationProgress:(float)a4;
- (void)effectEditorView:(id)a0 didBeginEditingTextForEffect:(id)a1;
- (void)effectEditorView:(id)a0 didCompleteBeginEditingAnimationForEffect:(id)a1;
- (void)effectEditorView:(id)a0 didCompleteEndEditingAnimationForEffect:(id)a1 completion:(id /* block */)a2;
- (void)effectEditorView:(id)a0 didEditTextForEffect:(id)a1 newText:(id)a2;
- (void)effectEditorView:(id)a0 didEndEditingTextForEffect:(id)a1 wasCancelled:(BOOL)a2;
- (void)effectEditorView:(id)a0 didRemoveEffect:(id)a1;
- (void)effectEditorView:(id)a0 didStartBeginEditingAnimationForEffect:(id)a1 completion:(id /* block */)a2;
- (void)effectEditorView:(id)a0 didStartEndEditingAnimationForEffect:(id)a1;
- (double)effectEditorView:(id)a0 durationForBeginEditingAnimationForEffect:(id)a1;
- (double)effectEditorView:(id)a0 durationForEndEditingAnimationForEffect:(id)a1;
- (id)effectEditorView:(id)a0 endEditingAnimationFromFrameForEffect:(id)a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)effectEditorView:(id)a0 endEditingAnimationToFrameForEffect:(id)a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectEditorView:(id)a0 frameForEffect:(id)a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectEditorView:(id)a0 hitAreaBoundingFrameForEffect:(id)a1 adjustForMinimumSize:(BOOL)a2 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)effectEditorView:(id)a0 isEffectAtPoint:(struct CGPoint { double x0; double x1; })a1 effect:(id)a2;
- (BOOL)effectEditorView:(id)a0 isFaceTrackingDataAvailableForEffect:(id)a1;
- (BOOL)effectEditorView:(id)a0 isFaceTrackingEffect:(id)a1;
- (unsigned long long)effectEditorView:(id)a0 maximumTextLengthForEffect:(id)a1;
- (id)effectEditorView:(id)a0 overlayEffectFrameForEffect:(id)a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })effectEditorView:(id)a0 removeButtonPositionForEffect:(id)a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)effectEditorView:(id)a0 shouldDisableEditingAnimationForEffect:(id)a1;
- (BOOL)effectEditorView:(id)a0 shouldEditTextForEffect:(id)a1;
- (struct CGPoint { double x0; double x1; })effectEditorView:(id)a0 spacingBetweenCenterPointOfEffect:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)effectEditorView:(id)a0 textEditingPropertiesForEffect:(id)a1 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)effectEditorView:(id)a0 willBeginAnimationAfterEditingEffect:(id)a1;
- (void)effectEditorView:(id)a0 willBeginAnimationBeforeEditingEffect:(id)a1;
- (void)effectEditorViewDidBeginEditing:(id)a0;
- (void)effectEditorViewDidEndEditing:(id)a0;
- (BOOL)effectEditorViewShouldPreviewEditEffect:(id)a0;
- (id)initWithTextEffect:(id)a0 CGSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 insertingEffect:(BOOL)a2 delegate:(id)a3;
- (void)scaleTextToFitTextEditingBounds:(BOOL)a0;

@end

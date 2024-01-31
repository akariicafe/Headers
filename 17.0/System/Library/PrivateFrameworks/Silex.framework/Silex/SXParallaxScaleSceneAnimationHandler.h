@class SXContainerComponentView;

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler

@property (weak, nonatomic) SXContainerComponentView *headerComponent;
@property (nonatomic) unsigned long long attachmentType;

- (void).cxx_destruct;
- (void)ensureScalabilityOfHeaderComponentFill;
- (double)factorForVisibileBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andAbsoluteComponentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillContentFrameForScale:(double)a0 andTranslation:(double)a1;
- (void)prepareAnimation;
- (BOOL)shouldFinishAtEndOfScrollView;
- (void)updateAnimationWithFactor:(double)a0;

@end

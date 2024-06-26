@class NSValue, UIBezierPath, CIContext, NSObject, VKCImageAnalysisResult, VKCImageSubjectGlowLayer, CALayer, CAPackage, VKCImageSubjectContext, VKCRemoveBackgroundRequestHandler, NSIndexSet, CAShapeLayer, UIImage;
@protocol OS_dispatch_queue, UITraitChangeRegistration, VKCImageSubjectBaseViewDelegate;

@interface VKCImageSubjectBaseView : VKCImageBaseOverlayView

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) CALayer *colorLayer;
@property (retain, nonatomic) CALayer *imageHighlightLayer;
@property (retain, nonatomic) CALayer *imageHighlightLayerMask;
@property (retain, nonatomic) CAShapeLayer *intersectionMask;
@property (retain, nonatomic) CALayer *imageHighlightLayerContainer;
@property (retain, nonatomic) CALayer *imageHighlightLayerContainerShadow;
@property (retain, nonatomic) VKCImageSubjectGlowLayer *glowLayer;
@property (retain, nonatomic) CAPackage *pulsePackage;
@property (nonatomic) BOOL subjectHighlightFeatureFlagEnabled;
@property (readonly, nonatomic) VKCImageAnalysisResult *analysisResult;
@property (nonatomic) unsigned long long loadMaskRequestStatus;
@property (nonatomic) unsigned long long loadMaskIndex;
@property (retain) CIContext *maskLoadContext;
@property (retain) UIImage *_cachedSubject;
@property (retain) NSIndexSet *_cachedSubjectIndexSet;
@property (retain, nonatomic) VKCRemoveBackgroundRequestHandler *removeBackgroundRequestHandler;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitChangeRegistration;
@property (weak, nonatomic) id<VKCImageSubjectBaseViewDelegate> baseSubjectDelegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } subjectFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic) BOOL glowLayerActive;
@property (readonly, nonatomic) CALayer *pulseLayer;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) NSValue *burstPoint;
@property (readonly, nonatomic) UIBezierPath *normalizedSubjectPath;
@property (readonly, nonatomic) UIBezierPath *subjectPathInBoundsCoordinates;
@property (nonatomic) long long imageOrientation;
@property (retain, nonatomic) VKCImageSubjectContext *subjectContext;
@property (retain, nonatomic) UIImage *customImageForRemoveBackground;
@property (copy, nonatomic) NSIndexSet *activeSubjectIndexSet;
@property (copy, nonatomic) NSIndexSet *activeGlowLayerIndexSet;
@property (readonly, nonatomic) NSIndexSet *allSubjectsIndexSet;
@property (nonatomic) BOOL usesLightDimmingViewInLightMode;

- (id)imageSubjectPathWithIndexes:(id)a0;
- (void)beginImageSubjectAnalysisIfNecessaryWithCompletion:(id /* block */)a0;
- (void)loadImageSubjectWithIndexes:(id)a0 completion:(id /* block */)a1;
- (void)beginImageSubjectAnalysisWithDelayIfNecessary;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRecognitionResult:(id)a0;
- (id)indexOfSubjectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateDimmingColorForAppearance;
- (void)_loadSubjectMaskIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_updateForImageBoundsChange;
- (id)cachedSubjectForIndexSet:(id)a0;
- (void)clearCachedSubject;
- (void)configureMaskForCurrentSubjectContextWithLayer:(id)a0 animated:(BOOL)a1;
- (void)configurePulseAnimationWithViewScale:(double)a0;
- (void)configureSubjectLiftAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)convertNormalizedPathToBoundsCoordinates:(id)a0;
- (void)loadImageSubjectIfNecessaryWithCompletion:(id /* block */)a0;
- (id)loadPulsePackage;
- (void)loadSubjectMaskIfNecessary;
- (void)loadSubjectMaskIfNecessaryWithCompletion:(id /* block */)a0;
- (id)opacityAnimationFromValue:(double)a0 toValue:(double)a1;
- (void)sendSubjectAnalyticsEventWithEventType:(long long)a0 interactionType:(long long)a1 subjectFound:(BOOL)a2 processingDuration:(double)a3;
- (void)setActiveSubjectIndexSet:(id)a0 animated:(BOOL)a1;
- (void)setCachedSubject:(id)a0 forIndexSet:(id)a1;
- (void)showPulseAnimationWithViewScale:(double)a0;
- (BOOL)subjectExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateForImageBoundsChangeIfNecessary;
- (void)updateGlowLayerForActiveSubjectIndexSet;
- (void)updateMaskForCurrentSubjectIndexesAnimated:(BOOL)a0;

@end

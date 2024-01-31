@class UIView, NSString, NSArray, CLKDevice, NUNIRenderer, NUNIQuad, CALayer, CAPortalLayer, NUNIAstronomyVistaConfiguration, CLKUIQuadView, NUNIScene;
@protocol NUNIAstronomyVistaViewObserver;

@interface NUNIAstronomyVistaView : UIView <NUNISceneObserver, CLKUIQuadViewDelegate> {
    CLKUIQuadView *_quadView0;
    UIView *_quadView1;
    NUNIQuad *_quad;
    NUNIScene *_scene;
    NUNIRenderer *_renderer;
    unsigned long long _preferredCarouselLighting;
    CALayer *_contentMaskLayer;
    CAPortalLayer *_portalLayer;
    unsigned long long _transitionStyle;
    unsigned long long _vista;
    unsigned char _isSupplemental : 1;
    unsigned char _isDisplayOn : 1;
    unsigned char _isAnimating : 1;
    NUNIAstronomyVistaConfiguration *_configuration;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (weak, nonatomic) id<NUNIAstronomyVistaViewObserver> observer;
@property (retain, nonatomic) NUNIScene *scene;
@property (readonly, nonatomic) NSArray *quadViews;
@property (nonatomic) float supplementalSpheroidSize;
@property (nonatomic) float supplementalHorizontalInset;
@property (nonatomic) float supplementalTopInset;
@property (nonatomic) float supplementalBottomInset;
@property (nonatomic) long long frameInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startAnimation;
- (void)discardContents;
- (void)dealloc;
- (void)setOpaque:(BOOL)a0;
- (void)startAnimation;
- (id)snapshotImage;
- (void)removeBackBuffers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)_stopAnimation;
- (void)setCacheDirectory:(id)a0;
- (void)_updateAnimation;
- (void)applyVista:(unsigned long long)a0 transitionStyle:(unsigned long long)a1;
- (id)generateAnimationArrayFromVista:(unsigned long long)a0 toVista:(unsigned long long)a1 transitionStyle:(unsigned long long)a2;
- (void)quadViewWillDisplay:(id)a0 forTime:(double)a1;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (id)rotatable:(unsigned long long)a0;
- (void)showSupplemental:(BOOL)a0 animated:(BOOL)a1;
- (void)updateSunLocationAnimated:(BOOL)a0;
- (void)setTritiumBrightness:(double)a0;
- (id)_mtlQuadView;
- (id)_panAnimationArrayFromSceneDescription:(id)a0 toSceneDescription:(id)a1;
- (id)_zoomAnimationArrayFromSceneDescription:(id)a0 toSceneDescription:(id)a1;
- (void)astronomySceneAnimationFinished:(id)a0;
- (float)computeDimming;
- (id)contentMaskLayer;
- (void)disableCloudDataFetch:(BOOL)a0;
- (id)generateAnimationArrayFromSceneDescription:(id)a0 toSceneDescription:(id)a1 transitionStyle:(unsigned long long)a2;
- (id)generateAnimationArrayFromVista:(unsigned long long)a0 fromSceneBlock:(id /* block */)a1 toVista:(unsigned long long)a2 toSceneBlock:(id /* block */)a3 transitionStyle:(unsigned long long)a4;
- (void)handleBacklightDidTurnOn;
- (void)handleBacklightWillTurnOff;
- (void)purgeUnused;
- (void)setAPLFilterAmount:(double)a0;
- (id)spheroidAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateLightingPreference:(BOOL)a0;
- (void)updatePortalLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSunLocationAnimated:(BOOL)a0 adjustEarthRotation:(BOOL)a1;

@end

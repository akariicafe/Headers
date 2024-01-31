@interface _TtCO11MediaCoreUI8Backdrop17CompositeRenderer : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ framebufferPixelFormat;
    void /* unknown type, empty encoding */ colorPixelFormat;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ crossfadeDuration;
    void /* unknown type, empty encoding */ imageStorage;
    void /* unknown type, empty encoding */ placeholderColor;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ crossfadeTimingFunction;
    void /* unknown type, empty encoding */ modeTimingFunction;
    void /* unknown type, empty encoding */ warpTimingFunction;
    void /* unknown type, empty encoding */ warpTimingSpeed;
    void /* unknown type, empty encoding */ textureTransitionMix;
    void /* unknown type, empty encoding */ pinchMix;
    void /* unknown type, empty encoding */ uniforms;
    void /* unknown type, empty encoding */ spectrumAnalysis;
    void /* unknown type, empty encoding */ aspectRatio;
    void /* unknown type, empty encoding */ renderers;
}

- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

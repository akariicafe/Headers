@protocol _SCNSceneRendererDelegateSPI, _SCNSceneRendererDelegate;

@interface SCNOffscreenRenderer : SCNRenderer {
    id<_SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> _sceneRendererDelegate;
    struct { unsigned char supportsUpdate : 1; unsigned char supportsDidApplyAnimations : 1; unsigned char supportsDidSimulatePhysics : 1; unsigned char supportsDidApplyConstraints : 1; unsigned char supportsWillRender : 1; unsigned char supportsDidRender : 1; unsigned char supportsInputTime : 1; unsigned char supportsReadSubdivCache : 1; unsigned char supportsWriteSubdivCache : 1; } _sceneRendererDelegateDelegationConformance;
}

@property (readonly, nonatomic) unsigned int textureID;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)offscreenRendererWithContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)offscreenRendererWithDevice:(id)a0 sceneRendererDelegate:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)offscreenRendererWithDevice:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)snapshot;
- (void)_renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)_renderer:(id)a0 didApplyConstraintsAtTime:(double)a1;
- (void)_renderer:(id)a0 didRenderScene:(id)a1 atTime:(double)a2;
- (void)_renderer:(id)a0 didSimulatePhysicsAtTime:(double)a1;
- (void)_renderer:(id)a0 updateAtTime:(double)a1;
- (void)_renderer:(id)a0 willRenderScene:(id)a1 atTime:(double)a2;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;

@end

@class NSArray, TSCH3DPickedPoint, TSCH3DRayPickPipelineDelegate;

@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator> {
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _pickPosition;
    TSCH3DRayPickPipelineDelegate *_sceneObjectDelegate;
}

@property (readonly, nonatomic) NSArray *pickedPoints;
@property (readonly, nonatomic) TSCH3DPickedPoint *pickedPoint;
@property (nonatomic) float slack;

+ (id)pipelineWithScene:(id)a0 position:(void *)a1;

- (BOOL)run;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0 position:(void *)a1;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;
- (id)makeDelegateWithScene:(id)a0;
- (id)makeDelegateWithSceneObject:(id)a0 scene:(id)a1;
- (id)p_closestPickedPoint;
- (id)p_frontMostPickedPoint;
- (id)p_renderProcessor;
- (id)p_unsortedPickedPoints;
- (void)rayPick:(id)a0;

@end

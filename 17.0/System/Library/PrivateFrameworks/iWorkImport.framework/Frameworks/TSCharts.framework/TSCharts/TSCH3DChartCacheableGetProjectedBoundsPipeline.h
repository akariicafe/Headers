@class TSCH3DGetBoundsProjector;

@interface TSCH3DChartCacheableGetProjectedBoundsPipeline : TSCH3DChartGetProjectedBoundsPipeline {
    BOOL _layoutBoundsValid;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _shadowsLayout3DBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _layout3DBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _bodyLayout3DBounds;
    struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } _constantDepthBodyLayout3DBounds;
    TSCH3DGetBoundsProjector *_projector;
}

@property (nonatomic) BOOL useIndividualBounds;

+ (BOOL)includesDepthForUnitScaleForScene:(id)a0;
+ (void)setIncludesDepthForUnitScale:(BOOL)a0 forScene:(id)a1;

- (void)updateBounds;
- (id)initWithScene:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)calculateBounds;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })boundsFromObjectBoundsOfType:(int)a0;
- (void)calculateLayoutBounds;
- (void)calculateLayoutLabelsBounds;
- (void)invalidateCachedBounds;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;
- (void)updateLayoutBounds;
- (void)updateRenderBounds;
- (id)updatedConstantDepthSceneFromScene:(id)a0;

@end

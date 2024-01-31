@class NUImageTransform;

@interface NUOrientationNode : NUTransformNode

@property (retain) NUImageTransform *transform;
@property (readonly) long long orientation;

+ (id)applyOrientation:(long long)a0 to:(id)a1;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateVideoProperties:(out id *)a0;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (id)initWithOrientation:(long long)a0 input:(id)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)_evaluateAuxiliaryImageForType:(long long)a0 error:(out id *)a1;
- (id)_transformWithError:(out id *)a0;
- (BOOL)isGeometryNode;
- (long long)outputImageOrientation:(long long)a0;

@end

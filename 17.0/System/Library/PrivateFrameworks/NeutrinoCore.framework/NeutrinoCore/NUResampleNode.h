@class NUSubsampleNode;

@interface NUResampleNode : NUAbstractScaleNode

@property (readonly) long long subsampleFactor;
@property (readonly) long long sampleMode;
@property (readonly) NUSubsampleNode *subsampleNode;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (struct { long long x0; long long x1; })_additionalScale;
- (id)initWithPreparedInput:(id)a0 subsampleNode:(id)a1;
- (id)initWithSubsampleFactor:(long long)a0 sampleMode:(long long)a1 source:(id)a2 subsampleNode:(id)a3;
- (BOOL)isGeometryNode;

@end

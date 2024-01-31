@interface NUTestPatternSourceNode : NUSourceNode {
    struct { long long width; long long height; } _size;
    long long _orientation;
    struct { long long numerator; long long denominator; } _scale;
}

- (id)initWithSettings:(id)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 orientation:(long long)a1 scale:(struct { long long x0; long long x1; })a2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 orientation:(long long)a1;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (id)preparedNodeWithSourceContainer:(id)a0 pipelineState:(id)a1 pipelineSettings:(id)a2 sourceSettings:(id)a3 error:(out id *)a4;
- (long long)sourceOrientation;
- (BOOL)supportsPipelineState:(id)a0 error:(out id *)a1;

@end

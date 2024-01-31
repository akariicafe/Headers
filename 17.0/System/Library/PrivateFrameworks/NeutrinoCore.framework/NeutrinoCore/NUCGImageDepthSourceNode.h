@interface NUCGImageDepthSourceNode : NUCGAuxiliaryImageSourceNode {
    BOOL _needsAspectRatioCorrection;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _aspectTransform;
    struct { long long width; long long height; } _aspectMatchedPixelSize;
}

- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)initWithSourceNode:(id)a0 auxiliaryImageProperties:(id)a1;

@end

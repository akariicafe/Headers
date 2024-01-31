@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode

@property (retain) NUImageTransformAffine *transform;
@property struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } cropRect;
@property (readonly) BOOL resetCleanAperture;

- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateVideoProperties:(out id *)a0;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (BOOL)canPropagateOriginalLivePhotoMetadataTrack;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)transformAffine;
- (id)_transformWithError:(out id *)a0;
- (id)initWithRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 input:(id)a1;
- (id)initWithRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 input:(id)a1 resetCleanAperture:(BOOL)a2 settings:(id)a3;
- (struct CGPoint { double x0; double x1; })scaleCropOriginForOriginalVideoSize:(struct CGSize { double x0; double x1; })a0 originalCleanAperture:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 renderScale:(double)a2 inputExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3;
- (BOOL)scaledCropOrigin:(struct CGPoint { double x0; double x1; } *)a0 error:(out id *)a1;

@end

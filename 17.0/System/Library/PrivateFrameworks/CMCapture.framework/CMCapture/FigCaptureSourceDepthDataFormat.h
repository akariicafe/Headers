@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;

- (id)highResStillImageDimensions;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (BOOL)gainMapSupported;
- (BOOL)RGBIRStereoFusionSupported;
- (BOOL)isStillImageOnlyDepthData;
- (unsigned int)mediaType;

@end

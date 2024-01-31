@class ABPKImagePreProcessingParams;

@interface ABPKAlgInput : NSObject

@property struct __CVBuffer { } *image;
@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } imageCameraIntrinsics;
@property (nonatomic) ABPKImagePreProcessingParams *imagePreProcessingParams;
@property (nonatomic) struct __CVBuffer { } *depthMap;
@property (nonatomic) struct __CVBuffer { } *depthConfidenceBuffer;
@property BOOL isDepthDataValid;
@property double timestamp;

- (id)init;

@end

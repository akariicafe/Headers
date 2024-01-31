@class NSArray, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureCinematographyPipelineConfiguration : NSObject {
    NSArray *_objectMetadataIdentifiers;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    int _depthType;
    struct { int width; int height; } _captureDimensionsForFSDNetSecondary;
}

- (void)dealloc;

@end

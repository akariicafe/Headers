@class NSDictionary, NSData, NSURL;
@protocol NUImageProperties;

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult

@property (retain) NSDictionary *auxiliaryImages;
@property BOOL canPropagateOriginalAuxiliaryData;
@property (retain) id<NUImageProperties> properties;
@property struct { long long x0; long long x1; } inputSize;
@property (retain) NSData *companionImageData;
@property (retain) NSURL *companionVideoURL;

- (void).cxx_destruct;

@end

@class NUColorSpace, NUImageExportRequest;

@interface PICompositionExportImagePrepareResult : NSObject

@property (retain) NUImageExportRequest *request;
@property struct { long long width; long long height; } inputSize;
@property BOOL inputIsHDR;
@property (retain) NUColorSpace *inputColorSpace;

- (void).cxx_destruct;

@end

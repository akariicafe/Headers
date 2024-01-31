@class NSURL, NSString, NUImageExportFormat;

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions

@property (retain) NSURL *primaryURL;
@property (retain) NSURL *videoComplementURL;
@property (retain) NSURL *videoPosterFrameURL;
@property (copy, nonatomic) NSString *videoCodecType;
@property (copy) NUImageExportFormat *imageExportFormat;
@property BOOL applyImageOrientationAsMetadata;
@property BOOL applyVideoOrientationAsMetadata;
@property BOOL optimizeForBackgroundProcessing;

- (void).cxx_destruct;

@end

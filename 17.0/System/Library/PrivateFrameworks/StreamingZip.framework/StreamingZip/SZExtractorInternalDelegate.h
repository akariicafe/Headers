@protocol SZExtractorDelegate;

@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol>

@property (weak) id<SZExtractorDelegate> delegate;

- (void).cxx_destruct;
- (void)setExtractionProgress:(double)a0;
- (void)extractionCompleteAtArchivePath:(id)a0;
- (void)extractionEnteredPassThroughMode;

@end

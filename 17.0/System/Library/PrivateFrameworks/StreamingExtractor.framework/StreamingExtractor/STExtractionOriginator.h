@protocol STExtractionOriginatorProtocol;

@interface STExtractionOriginator : NSObject <STExtractionOriginatorProtocol>

@property (weak) id<STExtractionOriginatorProtocol> originator;

- (void).cxx_destruct;
- (void)remote_extractionCompleteAtArchivePath:(id)a0;
- (void)remote_extractionEnteredPassthroughMode;
- (void)remote_setExtractionProgress:(double)a0;

@end

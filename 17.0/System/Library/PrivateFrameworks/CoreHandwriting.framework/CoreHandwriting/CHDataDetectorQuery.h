@class NSArray, DDScannerServiceConfiguration;

@interface CHDataDetectorQuery : CHQuery {
    DDScannerServiceConfiguration *_dataDetectorConfiguration;
    NSArray *_foundItems;
}

@property (readonly, copy, nonatomic) NSArray *foundItems;

- (id)debugName;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end

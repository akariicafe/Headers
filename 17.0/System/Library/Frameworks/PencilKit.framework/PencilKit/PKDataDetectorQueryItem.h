@class CHDataDetectorQueryItem, DDScannerResult;

@interface PKDataDetectorQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHDataDetectorQueryItem *coreHandwritingDataDetectorQueryItem;
@property (readonly, nonatomic) DDScannerResult *scannerResult;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)baselinePath;
- (id)initWithCoreHandwritingDataDetectorQueryItem:(id)a0;
- (id)strokeIdentifiers;

@end

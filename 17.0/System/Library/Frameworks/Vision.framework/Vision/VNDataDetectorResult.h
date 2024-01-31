@class VNObservation, NSString, BCSDetectedCode, DDScannerResult;

@interface VNDataDetectorResult : NSObject

@property (retain, nonatomic) DDScannerResult *scannerResult;
@property (retain, nonatomic) NSString *shortDescription;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) VNObservation *originalObservation;
@property (retain, nonatomic) BCSDetectedCode *detectedBarcodeSupportCode;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithBCSDetectedCode:(id)a0 description:(id)a1 observation:(id)a2;
- (id)initWithDDScannerResult:(id)a0 observation:(id)a1;

@end

@class NSData, NSNumber, NSString;

@interface QuickTypeWeightUpdates : NSObject

@property (retain, nonatomic) NSData *weightUpdates;
@property (copy, nonatomic) NSNumber *l2Norm;
@property (copy, nonatomic) NSNumber *maxNorm;
@property (copy, nonatomic) NSString *privacyDiagnosticReport;
@property (copy, nonatomic) NSString *weightUpdatesDiagnosticReport;

- (void).cxx_destruct;

@end

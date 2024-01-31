@class NSDictionary, NSArray;

@interface CSUDetectionPrintNetworkOutput : NSObject

@property (readonly, copy, nonatomic) NSDictionary *detectionPrintPerTapPoint;
@property (readonly, copy, nonatomic) NSArray *availableTapPointNames;

- (void).cxx_destruct;
- (id)detectionPrintFeatureForTapPointName:(id)a0 error:(id *)a1;
- (id)initWithDetectionPrintPerTapPoint:(id)a0;

@end

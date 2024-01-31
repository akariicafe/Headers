@class NSNumber;

@interface HMIVideoAnalyzerReportMatch : HMFObject

@property (readonly) NSNumber *truth;
@property (readonly) NSNumber *prediction;
@property (readonly) float score;

- (void).cxx_destruct;
- (id)initWithTruth:(id)a0 prediction:(id)a1 score:(float)a2;

@end

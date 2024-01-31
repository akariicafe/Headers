@class NSArray;

@interface MADVISceneClassificationResult : MADResult

@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (readonly, nonatomic) NSArray *classificationObservations;
@property (readonly, nonatomic) NSArray *nsfwObservations;
@property (readonly, nonatomic) NSArray *significantEventObservations;
@property (readonly, nonatomic) NSArray *recognizedObjectObservations;
@property (readonly, nonatomic) NSArray *saliencyObservations;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setClassificationObservations:(id)a0;
- (void)setNSFWObservations:(id)a0;
- (void)setRecognizedObjectObservations:(id)a0;
- (void)setSaliencyObservations:(id)a0;
- (void)setSignificantEventObservations:(id)a0;

@end

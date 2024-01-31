@class NSString, NSNumber;

@interface PHACurareShadowEvaluationEvaluationResult : NSObject

@property (retain, nonatomic) NSString *modelName;
@property BOOL isPositiveData;
@property (retain, nonatomic) NSNumber *numberOfTotalSamples;
@property (retain, nonatomic) NSNumber *numberOfCorrectSamples;
@property (retain, nonatomic) NSNumber *meanPredictionValue;
@property (retain, nonatomic) NSNumber *stddevPredictionValue;

- (void).cxx_destruct;
- (id)initWithModelPath:(id)a0 isPositiveData:(BOOL)a1 numberOfTotalSamples:(id)a2 numberOfCorrectSamples:(id)a3 meanPredictionValue:(id)a4 stddevPredictionValue:(id)a5;

@end

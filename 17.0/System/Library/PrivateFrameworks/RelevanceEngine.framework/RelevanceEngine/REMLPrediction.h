@class NSSet, NSMutableSet;

@interface REMLPrediction : NSObject <NSCopying> {
    NSMutableSet *_explanations;
}

@property (nonatomic) float bias;
@property (readonly, nonatomic) NSSet *explanations;
@property (readonly, nonatomic) float mean;
@property (readonly, nonatomic) float variance;
@property (readonly, nonatomic) float probability;
@property (readonly, nonatomic) float pessimistic;

+ (id)predictionWithProbability:(float)a0 mean:(float)a1 variance:(float)a2 pessimistic:(float)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addExplanation:(id)a0;
- (id)explanationDescription;

@end

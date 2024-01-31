@class NSNumber;

@interface ModelHyperparameters : NSObject

@property (retain, nonatomic) NSNumber *numTrees;
@property (retain, nonatomic) NSNumber *learningRate;
@property (retain, nonatomic) NSNumber *minChildWeight;
@property (nonatomic) long long adaptationStrategy;

- (void).cxx_destruct;
- (id)initWithNumTrees:(id)a0 learningRate:(id)a1 minChildWeight:(id)a2 adaptationStrategy:(id)a3;

@end

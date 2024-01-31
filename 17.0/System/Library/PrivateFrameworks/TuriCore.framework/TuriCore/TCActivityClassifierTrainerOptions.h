@interface TCActivityClassifierTrainerOptions : NSObject

@property (nonatomic) long long batchSize;
@property (nonatomic) long long numFeatures;
@property (nonatomic) long long predictionWindow;
@property (nonatomic) long long numClasses;
@property (nonatomic) long long numPredictionsPerChunk;
@property (nonatomic) long long randomSeed;

- (id)init;

@end

@class NSString, NSArray, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLNoiseStrategy;

@interface PMLMetaTrainingVariables : NSObject <PMLPlistAndChunksSerializableProtocol>

@property (readonly, nonatomic) NSString *planId;
@property (readonly, nonatomic) PMLTrainingStore *store;
@property (readonly, nonatomic) id<PMLNoiseStrategy> noiseStrategy;
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (readonly, nonatomic) unsigned long long maxSessionsToTrainOn;
@property (readonly, nonatomic) unsigned long long trainingSetSize;
@property (readonly, nonatomic) NSArray *labelsToTrainOn;
@property (readonly, nonatomic) unsigned long long currentServerIteration;
@property (readonly, nonatomic) double lossThresholdForStopping;
@property (readonly, nonatomic) unsigned long long epochsPerBatch;
@property (readonly, nonatomic) double probThreshold;
@property (readonly, nonatomic) unsigned long long evaluationLevel;
@property (readonly, nonatomic) BOOL reportScale;
@property (readonly, nonatomic) BOOL summableMetricsOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (BOOL)isEqualToMetaTrainingVariables:(id)a0;
- (id)initWithPlanId:(id)a0 store:(id)a1 noiseStrategy:(id)a2 sessionDescriptor:(id)a3 maxSessionsToTrainOn:(unsigned long long)a4 trainingSetSize:(unsigned long long)a5 labelsToTrainOn:(id)a6 currentServerIteration:(unsigned long long)a7 lossThresholdForStopping:(double)a8 epochsPerBatch:(unsigned long long)a9 probThreshold:(double)a10 evaluationLevel:(unsigned long long)a11 reportScale:(BOOL)a12 summableMetricsOnly:(BOOL)a13;

@end

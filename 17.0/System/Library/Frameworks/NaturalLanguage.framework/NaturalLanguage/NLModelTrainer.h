@class NLDataSet, NSDictionary, NLModelConfiguration, NSError, NLModel;
@protocol NLModelTrainerDelegate;

@interface NLModelTrainer : NSObject {
    NLModelConfiguration *_configuration;
    NLDataSet *_dataSet;
    NSDictionary *_options;
    NLModel *_model;
    NSError *_trainingError;
    id<NLModelTrainerDelegate> _delegate;
    BOOL _delegateRespondsToLogMessage;
    BOOL _delegateRespondsToShouldStop;
}

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) NLDataSet *dataSet;
@property (readonly, copy) NSDictionary *options;
@property (readonly) id<NLModelTrainerDelegate> delegate;
@property (readonly, copy) NLModel *trainedModel;
@property (readonly, copy) NSError *trainingError;
@property (readonly, copy) NSDictionary *testResults;

+ (id)modelTrainerWithConfiguration:(id)a0 dataSet:(id)a1 options:(id)a2 delegate:(id)a3;

- (void)logMessage:(id)a0;
- (void)setModel:(id)a0;
- (id)model;
- (void)trainModel;
- (void).cxx_destruct;
- (BOOL)shouldStop;
- (id)initWithConfiguration:(id)a0 dataSet:(id)a1 options:(id)a2 delegate:(id)a3;
- (Class)modelImplClass;
- (void)setTrainingError:(id)a0;
- (void)trainer:(id)a0 logMessage:(id)a1;
- (BOOL)trainerShouldStop:(id)a0;

@end

@class APOdmlRecipe, NSURL, APOdmlTrainingSetBuilder;

@interface APOdmlEspressoEvaluator : NSObject

@property (readonly, nonatomic) APOdmlTrainingSetBuilder *builder;
@property (readonly, nonatomic) APOdmlRecipe *recipe;
@property (readonly, nonatomic) NSURL *netURL;
@property (nonatomic) unsigned long long trainingSetSize;

- (id)evaluate:(id *)a0;
- (void).cxx_destruct;
- (id)_computeModelDeltas:(id)a0 weightsAfter:(id)a1 error:(id *)a2;
- (id)_evaluate:(id)a0 error:(id *)a1;
- (id)_generateMetrics:(id)a0 postTrainingMetrics:(id)a1 tapAndImpressionMetrics:(id)a2 deltaPttrMetrics:(id)a3;
- (BOOL)_setError:(id *)a0 errorCode:(long long)a1;
- (id)initWithTrainingRowBuilder:(id)a0 recipe:(id)a1 netURL:(id)a2;

@end

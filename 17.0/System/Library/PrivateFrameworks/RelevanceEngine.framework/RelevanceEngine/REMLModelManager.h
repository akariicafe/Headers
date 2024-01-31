@class NSDate, NSString, NSArray, REMLMetricsSet, REContentRanker, REMLLinearModel, REObserverStore, REMLModel, NSObject;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMLModelManager : RERelevanceEngineSubsystem <REMLModelManagerProperties> {
    REMLLinearModel *_model;
    REContentRanker *_contentRanker;
    REMLMetricsSet *_metrics;
    NSObject<OS_dispatch_queue> *_trainingQueue;
    REObserverStore *_observers;
    NSString *_modelFileLocation;
    BOOL _supportsContentRanking;
    NSArray *_orderedFeatures;
    unsigned long long _modelStorageBehavior;
    REObserverStore *_dataStores;
    id<RERelevanceEngineMetricsRecorder> _metricsRecoder;
    NSDate *_lastCacheResetDate;
    unsigned long long _modelVersionNumber;
    BOOL _validModel;
}

@property (readonly, nonatomic) unsigned long long modelVersionNumber;
@property (readonly, nonatomic) REMLModel *model;
@property (readonly, nonatomic) REContentRanker *contentRanker;
@property (readonly, nonatomic) BOOL supportsContentRanking;
@property (readonly, nonatomic) NSArray *orderedFeatures;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_logMetrics;
- (id)initWithRelevanceEngine:(id)a0;
- (id)_createOrderFeatureListFromModelFileURL:(id)a0 mlFeatures:(id)a1;
- (BOOL)_loadModelAtPath:(id)a0 mlFeatures:(id)a1 checkModelVersion:(BOOL)a2;
- (void)_notifyObserversThatModelUpdated;
- (id)_orderedModelFeatures;
- (void)_saveDataStoresToURL:(id)a0;
- (BOOL)_saveModelToDisk:(id *)a0;
- (void)addDataStore:(id)a0;
- (id)comparatorWithRules:(id)a0;
- (id)createOutputFeatureFromDouble:(double)a0 error:(id *)a1;
- (void)flushTraining;
- (void)manuallySaveModel;
- (void)performModelClearWithCompletion:(id /* block */)a0;
- (void)performTrainingWithFeatureMaps:(id)a0 content:(id)a1 events:(id)a2 interactions:(id)a3 purgeCaches:(BOOL)a4 completion:(id /* block */)a5;
- (id)predicitionForLogicalElement:(id)a0;
- (void)removeDataStore:(id)a0;
- (id)sentimentAnalyzer;

@end

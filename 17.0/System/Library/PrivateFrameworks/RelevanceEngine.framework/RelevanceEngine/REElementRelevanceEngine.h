@class NSMutableDictionary, REFeatureSet, REDataSourceManager, REKeyMultiValueMap, NSDictionary, REPredictorManager, NSMapTable, NSObject, NSString, RERelevanceProviderEnvironment, REFeatureTransmuter, NSMutableSet, NSArray, REUpNextScheduler;
@protocol REElementRelevanceEngineDelegate, OS_dispatch_queue;

@interface REElementRelevanceEngine : RERelevanceEngineSubsystem <RESectionDelegate, RERelevanceProviderEnvironmentDelegate, REMLModelManagerObserver, REPredictorObserver, REElementRelevanceEngineProperties, REFeatureTransformerInvalidationDelegate, REMLModelManagerDataStore> {
    NSMutableSet *_elementsNeedingRelevanceUpdate;
    NSMutableDictionary *_sections;
    NSMutableDictionary *_predictedElements;
    NSMapTable *_relevanceProviderElementMap;
    REKeyMultiValueMap *_identifierElementIdentifierMap;
    REFeatureSet *_persistenceFeatures;
    REPredictorManager *_predictorManager;
    RERelevanceProviderEnvironment *_providerEnvironment;
    REDataSourceManager *_dataSourceManager;
    REFeatureTransmuter *_featureTransmuter;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_predictorUpdatedScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _deviceIsLocked;
    BOOL _ignoreDeviceLockState;
}

@property (weak, nonatomic) id<REElementRelevanceEngineDelegate> delegate;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *sectionsMap;
@property (readonly, nonatomic) REPredictorManager *predictorManager;
@property (readonly, nonatomic) RERelevanceProviderEnvironment *providerEnvironment;

- (void)pause;
- (id)dataStoreKey;
- (void)dealloc;
- (void)resume;
- (void).cxx_destruct;
- (void)removeElement:(id)a0;
- (void)addElement:(id)a0 section:(id)a1;
- (id)elementAtPath:(id)a0;
- (unsigned long long)numberOfElementsInSection:(id)a0;
- (id)predictionForElement:(id)a0;
- (id)initWithRelevanceEngine:(id)a0;
- (id)pathForElement:(id)a0;
- (void)_onqueue_async:(id /* block */)a0;
- (id)_allCurrentElements;
- (void)_checkPreferences;
- (id)_elementIdentifierForIdentifier:(id)a0;
- (BOOL)_elementIsFullyLoaded:(id)a0;
- (void)_enumerateAndGenerateSectionComparators:(id /* block */)a0;
- (id)_generateFeatureMapForElement:(id)a0;
- (id)_identifierForElementIdentifier:(id)a0;
- (void)_performUpdatesToDelegate:(id /* block */)a0;
- (id)_queue_featureMapForElement:(id)a0 trainingContext:(id)a1;
- (id)_queue_featureMapForElementWithId:(id)a0 trainingContext:(id)a1;
- (void)_queue_scheduleRelevanceUpdateForElement:(id)a0;
- (void)_queue_updateElementRelevance;
- (void)_updateStateBasedOnPredictor;
- (id)elementRankerForSection:(id)a0;
- (id)featureMapForElement:(id)a0 trainingContext:(id)a1;
- (id)featureMapForPredictedElement:(id)a0 trainingContext:(id)a1;
- (id)featureProviderForElement:(id)a0;
- (void)featureTransformerDidInvalidate:(id)a0;
- (BOOL)modelManager:(id)a0 loadDataStoreFromURL:(id)a1 error:(id *)a2;
- (BOOL)modelManager:(id)a0 saveDataStoreToURL:(id)a1 error:(id *)a2;
- (void)modelManagerDidUpdateModel:(id)a0;
- (void)predictor:(id)a0 didBeginActivity:(id)a1;
- (void)predictor:(id)a0 didFinishActivity:(id)a1;
- (void)predictorDidUpdate:(id)a0;
- (void)refreshContent;
- (void)relevanceEnvironment:(id)a0 didUpdateRelevanceProvider:(id)a1;
- (id)relevanceProviderEnvironment;
- (void)reloadElement:(id)a0 withElement:(id)a1;
- (id)section:(id)a0 groupForIdentifier:(id)a1;
- (void)sectionDidUpdateContentOrder:(id)a0;
- (id)sectionForElement:(id)a0;

@end

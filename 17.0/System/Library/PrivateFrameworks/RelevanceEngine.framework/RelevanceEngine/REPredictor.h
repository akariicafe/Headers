@class NSCountedSet, REUpNextScheduler, REObserverStore, NSObject;
@protocol OS_dispatch_queue;

@interface REPredictor : REObservableSingleton <REPredictorProperties> {
    NSObject<OS_dispatch_queue> *_queue;
    REObserverStore *_engines;
    REUpNextScheduler *_refreshScheduler;
    NSCountedSet *_activities;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _predictorLock;
}

@property (readonly, nonatomic) NSCountedSet *outstandingActivities;
@property (setter=_setIsRunning:) BOOL _isRunning;
@property (nonatomic) long long beginUpdatesCount;
@property (readonly, nonatomic) BOOL running;

+ (double)updateInterval;
+ (id)supportedFeatures;
+ (id)availablePredictors;
+ (id)systemPredictorsSupportingFeatureSet:(id)a0 relevanceEngine:(id)a1;

- (void)endUpdates;
- (void)pause;
- (void)dealloc;
- (id)_init;
- (void)beginUpdates;
- (void)update;
- (void)invalidate;
- (void)_setRunning:(BOOL)a0;
- (void)beginActivity:(id)a0;
- (id)engines;
- (BOOL)isRunning;
- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (id)queue;
- (void)_performUpdate;
- (void)onQueue:(id /* block */)a0;
- (void)updateObservers;
- (void)finishActivity:(id)a0;
- (void)addRelevanceEngine:(id)a0;
- (void)beginFetchingData;
- (void)enumerateInflectionFeatureValues:(id /* block */)a0;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;
- (void)finishFetchingData;
- (void)onQueueSync:(id /* block */)a0;
- (void)removeRelevanceEngine:(id)a0;

@end

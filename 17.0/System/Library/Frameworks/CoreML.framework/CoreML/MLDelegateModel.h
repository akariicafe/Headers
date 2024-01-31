@class MLOutputBackingsVerifier, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MLModeling;

@interface MLDelegateModel : MLModel {
    NSObject<OS_dispatch_queue> *_asyncPredictionQueue;
    id<MLModeling> _internalEngine;
    MLOutputBackingsVerifier *_outputBackingsVerifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncPredictionSchedulingLock;
    unsigned long long _currentAsyncPredictionsInFlight;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _prepared;
}

@property (readonly, nonatomic) unsigned long long maxAsyncPredictionsInFlight;
@property (readonly, nonatomic) NSMutableArray *pendingPredictionQueue;
@property (readonly, nonatomic) int engine;

- (void)enableInstrumentsTracing;
- (unsigned long long)signpostID;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (unsigned long long)predictionTypeForKTrace;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)executionSchedule;
- (id)classifier;
- (void).cxx_destruct;
- (id)pipeline;
- (id)regressor;
- (id)writable;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (id)program;
- (void)_finishPredictionAndDispatchPendingPredictions;
- (void)_schedulePredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelPredictionRequest:(id)a0;
- (id)initWithEngine:(id)a0 error:(id *)a1;
- (id)internalEngine;
- (id)neuralNetwork;
- (id)newRequestWithInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)updatable;

@end

@class HKObserverSet, HKHealthStore, HKMCAnalysis, HKMCAnalysisQuery, NSMutableArray, NSError;

@interface HKMCAnalysisProvider : NSObject {
    HKObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_nextAnalysisQueryResultBlocks;
    HKMCAnalysisQuery *_analysisQuery;
    HKMCAnalysis *_lastAnalysis;
    NSError *_lastError;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;

- (void)addObserver:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_handleAnalysisQueryResult:(id)a0 error:(id)a1;
- (void)analysisWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 startAnalysisQueryImmediately:(BOOL)a1;
- (void)startAnalysisQuery;

@end

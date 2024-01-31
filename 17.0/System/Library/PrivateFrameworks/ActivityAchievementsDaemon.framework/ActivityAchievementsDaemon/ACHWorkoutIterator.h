@class HKHealthStore, HKSampleIteratorQuery;

@interface ACHWorkoutIterator : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSampleIteratorQuery *query;
@property (nonatomic) unsigned long long batchSize;

- (id)initWithHealthStore:(id)a0;
- (void)_runQueryForDateInterval:(id)a0 lastCursor:(id)a1 completion:(id /* block */)a2;
- (void)enumerateWorkoutsForDateInterval:(id)a0 handler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 batchSize:(unsigned long long)a1;

@end

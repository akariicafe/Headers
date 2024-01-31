@class NSLock, NSMutableDictionary, _HKDelayedOperation;

@interface HDActiveDataAggregator : HDDataAggregator {
    NSLock *_aggregationLock;
    NSMutableDictionary *_currentAggregationStates;
    _HKDelayedOperation *_delayedAggregationOperation;
}

- (id)initialAggregationState;
- (id)configurationForCollector:(id)a0;
- (Class)sensorDatumClass;
- (void).cxx_destruct;
- (id)initWithDataCollectionManager:(id)a0;
- (double)aggregationInterval;
- (id)aggregateForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5 error:(id *)a6;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;
- (void)recomputeCollectorConfiguration;
- (double)aggregationIntervalForCollector:(id)a0;
- (BOOL)didPersistObjects:(id)a0 lastDatum:(id)a1 collector:(id)a2 error:(id *)a3;
- (void)registerDataCollector:(id)a0 state:(id)a1;
- (void)requestAggregationThroughDate:(id)a0 mode:(long long)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)unregisterDataCollector:(id)a0;

@end

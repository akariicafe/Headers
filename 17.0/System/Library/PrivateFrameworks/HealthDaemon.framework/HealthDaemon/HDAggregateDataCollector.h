@class NSDictionary, _HKDelayedOperation;
@protocol HDSensorDatum;

@interface HDAggregateDataCollector : HDDataCollector {
    _HKDelayedOperation *_historicalFetchOperation;
    id<HDSensorDatum> _lastReceivedSensorDatum;
    BOOL _didReceiveSensorDatum;
    NSDictionary *_lastReceivedSecondaryContext;
    BOOL _fetchingHistoricalData;
    BOOL _needsHistoricalFetch;
    double _maxDatumDuration;
}

@property double maxDatumDuration;
@property (readonly, nonatomic) BOOL requiresSampleAggregation;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (double)_queue_aggregationInterval;
- (void)_queue_beginStreaming;
- (id)_queue_lastReceivedSecondaryContext;
- (id)_queue_lastReceivedSensorDatum;
- (double)_queue_maxDatumDuration;
- (id)_queue_processSensorDataBatched:(id)a0 firstDatum:(id)a1 lastSensorDatum:(id *)a2;
- (void)_queue_updateLastReceivedSecondaryContext:(id)a0;
- (void)_queue_updateLastReceivedSensorDatum:(id)a0;
- (void)beginUpdatesFromDatum:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchHistoricalSensorDataSinceDatum:(id)a0 databaseIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)hkObjectsFromSensorData:(id)a0 baseSensorDatum:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (void)updateHistoricalData;
- (void)updateHistoricalDataForcedUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateHistoricalDataWithCompletion:(id /* block */)a0;
- (void)willPersistHKObjects:(id)a0;

@end

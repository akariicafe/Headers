@interface HDHeartRateDataAggregator : HDDataAggregator

- (void)dealloc;
- (id)configurationForCollector:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)workoutManagerStateChanged:(id)a0;
- (id)objectType;
- (id)initWithDataCollectionManager:(id)a0;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;

@end

@class HKQuantityType;
@protocol HDDataCollectionForwarder;

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator {
    id<HDDataCollectionForwarder> _dataForwarder;
}

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (Class)sensorDatumClass;
- (id)description;
- (void).cxx_destruct;
- (id)objectType;
- (id)aggregateForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5 error:(id *)a6;
- (id)additionalMetadataForCollector:(id)a0;

@end

@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (id)persistentIdentifier;
- (Class)coreMotionDatumClass;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (void).cxx_destruct;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)collectedTypes;
- (id)queue_newDataSource;

@end

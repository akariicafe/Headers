@class HDDataCollectorMultiplexer, NSString, HDProfile, NSSet, NSMutableDictionary, NSObject, HDDataCollectorState;
@protocol OS_dispatch_queue, HDCoreMotionDataSource;

@interface HDCoreMotionDataCollector : NSObject <HDDiagnosticObject, HDDataCollector> {
    NSSet *_quantityTypes;
    HDDataCollectorMultiplexer *_multiplexer;
    NSMutableDictionary *_lastCMDatumByType;
    id<HDCoreMotionDataSource> _dataSource;
    HDDataCollectorState *_state;
    long long _errorCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (id)persistentIdentifier;
- (Class)coreMotionDatumClass;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (id)identifierForDataAggregator:(id)a0;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)sourceForDataAggregator:(id)a0;
- (id)collectedTypes;
- (id)queue_newDataSource;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (void)_accessToFitnessDataDidChange:(id)a0;
- (void)queue_recomputeCurrentState;
- (void)registerWithAggregators;

@end

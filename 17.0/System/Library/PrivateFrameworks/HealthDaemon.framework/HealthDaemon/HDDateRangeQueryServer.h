@class NSString, NSMutableDictionary, NSMutableSet;

@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver> {
    BOOL _resultsDirty;
    NSMutableDictionary *_dateIntervalsBySampleType;
    NSMutableSet *_sampleTypesToReFetch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_queue_start;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveAllSampleTypes;

@end

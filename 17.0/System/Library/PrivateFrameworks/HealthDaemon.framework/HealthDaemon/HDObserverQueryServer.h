@class NSString, NSSet, NSArray, NSDictionary, NSNumber;

@interface HDObserverQueryServer : HDQueryServer <HDQuantitySeriesObserver> {
    BOOL _deliverOnUnlock;
    BOOL _observeUnfrozenSeries;
    NSNumber *_anchor;
    NSSet *_updatedSampleTypes;
    NSArray *_queryDescriptors;
    NSDictionary *_sampleTypeToFilterMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (BOOL)supportsAnchorBasedAuthorization;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_queue_start;
- (id)objectTypes;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;
- (void)_queue_stop;
- (void).cxx_destruct;
- (BOOL)_shouldListenForUpdates;

@end

@class NSMutableDictionary, NSSet, NSHashTable, NSString, NSMutableArray;

@interface CAMTransientDataSource : NSObject <PUTransientDataSource>

@property (readonly, nonatomic) NSHashTable *_observers;
@property (readonly, nonatomic) NSMutableArray *_assetUUIDs;
@property (readonly, nonatomic) NSMutableDictionary *_assetsByUUID;
@property (readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetUUIDByBurstIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstConvertiblesByAssetUUID;
@property (nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges;
@property (nonatomic, setter=_setPendingChangeNotifications:) long long _pendingChangeNotifications;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSSet *existingBurstIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (id)existingAssetForUUID:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (id)existingAssetUUIDs;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)a0;
- (id)transientBurstMapping;
- (void)updateAssetWithConvertible:(id)a0;
- (BOOL)_removeAssetWithUUID:(id)a0;
- (void)removeAssetWithUUID:(id)a0;
- (void)removeAllAssets;
- (void).cxx_destruct;
- (void)enqueuePendingBurstAssetWithConvertible:(id)a0;
- (void)_notifyObserversOfDataSourceChange;
- (id)insertAssetWithConvertible:(id)a0;
- (id)uuids;
- (id)transientAssetMapping;
- (void)processPendingBurstAssets;

@end

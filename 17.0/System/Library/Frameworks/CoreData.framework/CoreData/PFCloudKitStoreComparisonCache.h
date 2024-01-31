@class NSManagedObjectContext, NSMutableDictionary, NSPersistentStore;

@interface PFCloudKitStoreComparisonCache : NSObject {
    NSMutableDictionary *_storeUUIDToStoreCache;
}

@property (readonly, nonatomic) NSPersistentStore *store;
@property (readonly, nonatomic) NSPersistentStore *otherStore;
@property (readonly, nonatomic) NSManagedObjectContext *storeMoc;
@property (readonly, nonatomic) NSManagedObjectContext *otherStoreMoc;
@property (readonly, nonatomic) BOOL checkCloudKitMetadata;

- (void)dealloc;
- (void)_setCheckCloudKitMetadata:(BOOL)a0;
- (long long)databaseScopeForStoreWithIdentifier:(id)a0;
- (id)deriveIdentifierForNonCloudObjectID:(id)a0;
- (id)identifiersForStore:(id)a0;
- (id)identityRecordNameForStoreWithIdentifier:(id)a0;
- (id)initWithStore:(id)a0 otherStore:(id)a1;
- (id)metadataForObjectWithID:(id)a0;
- (id)mirroredRelationshipForObject:(id)a0 relatedToObject:(id)a1 byRelationship:(id)a2;
- (id)mtmKeysForRecordZone:(id)a0 inStore:(id)a1;
- (id)mtmKeysForStore:(id)a0;
- (id)objectIDForIdentifier:(id)a0 inStore:(id)a1;
- (id)objectIDForRecordID:(id)a0 inStore:(id)a1;
- (BOOL)populate:(id *)a0;
- (id)recordIDForObjectID:(id)a0;
- (id)recordIDsRelatedToRecordID:(id)a0 byRelationshipNamed:(id)a1 inStore:(id)a2;
- (id)recordIdsForStore:(id)a0;
- (id)sharedZoneIDsForStore:(id)a0;

@end

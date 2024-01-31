@class PHPersistentChangeFetchOptions, PHPersistentChangeToken, NSMutableDictionary, PHPersistentChangeEnumerationContext, PHPhotoLibrary, NSMutableSet, NSManagedObjectContext;

@interface PHChangeBuilder : NSObject {
    NSManagedObjectContext *_context;
    PHPhotoLibrary *_library;
    PHPersistentChangeToken *_changeToken;
    PHPersistentChangeFetchOptions *_fetchOptions;
    PHPersistentChangeEnumerationContext *_enumerationContext;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_deletedUuidsByObjectId;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    BOOL _unknownMergeEvent;
}

+ (id)changeWithManagedObjectContext:(id)a0 library:(id)a1 options:(id)a2 transaction:(id)a3;
+ (id)persistentChangeWithManagedObjectContext:(id)a0 library:(id)a1 options:(id)a2 transaction:(id)a3 enumerationContext:(id)a4;

- (void).cxx_destruct;
- (void)recordTransaction:(id)a0;
- (void)recordChange:(id)a0;
- (void)_recordChangedProperties:(id)a0 forObjectID:(id)a1;
- (void)_recordDeleteChange:(id)a0 withUniquedObjectID:(id)a1;
- (void)_recordInsertChange:(id)a0 withUniquedObjectID:(id)a1;
- (void)_recordUpdateChange:(id)a0 withUniquedObjectID:(id)a1;
- (id)_uuidForDeleteChange:(id)a0 uniquedObjectID:(id)a1;
- (id)buildChange;
- (id)buildPersistentChange;
- (BOOL)changeCountExeedsThreshold:(unsigned long long)a0;
- (id)initWithManagedObjectContext:(id)a0 library:(id)a1 options:(id)a2 enumerationContext:(id)a3;
- (void)recordChangesInTransaction:(id)a0;
- (void)recordNonIncrementalChanges;

@end

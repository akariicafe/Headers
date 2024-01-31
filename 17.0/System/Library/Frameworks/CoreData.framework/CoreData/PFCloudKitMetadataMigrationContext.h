@class NSDictionary, NSManagedObjectModel, NSMutableSet, NSSQLModel, NSMutableArray, NSNumber;

@interface PFCloudKitMetadataMigrationContext : NSObject {
    NSMutableArray *_migrationStatements;
    NSMutableArray *_sqlEntitiesToCreate;
    NSMutableSet *_constrainedEntitiesToPreflight;
    BOOL _hasWorkToDo;
    BOOL _needsMetdataMigrationToNSCKRecordMetadata;
    BOOL _needsOldTableDrop;
    BOOL _needsMirroredRelationshipsLinkedToZone;
    BOOL _needsImportAfterClientMigration;
    BOOL _needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
    BOOL _needsAnalyzedHistoryCheck;
    BOOL _needsCleanupFromNeedsNewShareInvitationBug;
    NSManagedObjectModel *_currentModel;
    NSSQLModel *_sqlModel;
    NSManagedObjectModel *_storeMetadataModel;
    NSSQLModel *_storeSQLModel;
    NSNumber *_storeMetadataVersion;
    NSDictionary *_storeMetadataVersionHashes;
}

- (void)addConstrainedEntityToPreflight:(id)a0;
- (id)init;
- (void)dealloc;

@end

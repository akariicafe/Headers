@class NSString, PBFSQLiteDatabaseConnection, NSURL, BSAtomicFlag, NSCache;

@interface _PBFPosterExtensionDataStoreSQLiteDatabaseImpl : NSObject <PBFPosterExtensionDataStorageRetrieving, PBFPosterExtensionDataStorageMutating, BSInvalidatable> {
    BSAtomicFlag *_invalidationFlag;
    int _sqliteFlags;
    NSURL *_databaseURL;
    NSCache *_providerForPosterUUIDCache;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) PBFSQLiteDatabaseConnection *connection;
@property BOOL checkpointWALOnInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithURL:(id)a0 options:(int)a1 error:(out id *)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)setup;
- (id)sortedPosterUUIDsForRole:(id)a0 error:(out id *)a1;
- (BOOL)addPosterUUID:(id)a0 provider:(id)a1 error:(out id *)a2;
- (BOOL)addRole:(id)a0 displayName:(id)a1 error:(out id *)a2;
- (BOOL)assignPosterUUID:(id)a0 toRole:(id)a1 error:(out id *)a2;
- (id)attributeForPoster:(id)a0 roleId:(id)a1 attributeId:(id)a2 error:(out id *)a3;
- (id)attributeIdentifiersForPoster:(id)a0 roleId:(id)a1 error:(out id *)a2;
- (id)attributesForPoster:(id)a0 roleId:(id)a1 attributeIdentifiers:(id)a2 error:(out id *)a3;
- (BOOL)checkIfPosterUUIDs:(id)a0 belongToRole:(id)a1 error:(out id *)a2;
- (id)dataStoreMetadataWithError:(out id *)a0;
- (id)extensionIdentifierForPosterUUID:(id)a0 error:(out id *)a1;
- (id)extensionIdentifiersForRole:(id)a0 error:(out id *)a1;
- (BOOL)markPosterUUIDAsSelected:(id)a0 roleId:(id)a1 error:(out id *)a2;
- (BOOL)mutateAttributeForPoster:(id)a0 roleId:(id)a1 attributeId:(id)a2 attributePayload:(id)a3 error:(out id *)a4;
- (BOOL)mutateDataStoreMetadataForKey:(id)a0 value:(id)a1 error:(out id *)a2;
- (BOOL)mutateSortOrder:(id)a0 roleId:(id)a1 error:(out id *)a2;
- (BOOL)performChanges:(id /* block */)a0 error:(out id *)a1;
- (id)posterUUIDsForExtensionIdentifier:(id)a0 role:(id)a1 error:(out id *)a2;
- (BOOL)removePosterUUID:(id)a0 error:(out id *)a1;
- (BOOL)removeRole:(id)a0 error:(out id *)a1;
- (id)roleDisplayNamesForIdentifiers:(id)a0 error:(out id *)a1;
- (id)roleIdentifiersWithError:(out id *)a0;
- (id)selectedPosterUUIDForRole:(id)a0 error:(out id *)a1;
- (BOOL)unassignPosterUUID:(id)a0 fromRole:(id)a1 error:(out id *)a2;
- (BOOL)validateDatabaseWithError:(out id *)a0;

@end

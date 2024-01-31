@class NSURL, NSString, _PBFPosterExtensionDataStoreSQLiteDatabaseImpl;

@interface PBFPosterExtensionDataStoreSQLiteDatabase : NSObject <PBFPosterExtensionDataStorage, BSInvalidatable> {
    _PBFPosterExtensionDataStoreSQLiteDatabaseImpl *_lock_readonlyImpl;
    BOOL _lock_invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readwriteLock;
}

@property BOOL checkpointWALOnInvalidate;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(out id *)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)sortedPosterUUIDsForRole:(id)a0 error:(out id *)a1;
- (id)attributeForPoster:(id)a0 roleId:(id)a1 attributeId:(id)a2 error:(out id *)a3;
- (id)attributeIdentifiersForPoster:(id)a0 roleId:(id)a1 error:(out id *)a2;
- (id)attributesForPoster:(id)a0 roleId:(id)a1 attributeIdentifiers:(id)a2 error:(out id *)a3;
- (BOOL)checkIfPosterUUIDs:(id)a0 belongToRole:(id)a1 error:(out id *)a2;
- (id)dataStoreMetadataWithError:(out id *)a0;
- (id)extensionIdentifierForPosterUUID:(id)a0 error:(out id *)a1;
- (id)extensionIdentifiersForRole:(id)a0 error:(out id *)a1;
- (BOOL)performChanges:(id /* block */)a0 error:(out id *)a1;
- (id)posterUUIDsForExtensionIdentifier:(id)a0 role:(id)a1 error:(out id *)a2;
- (id)roleDisplayNamesForIdentifiers:(id)a0 error:(out id *)a1;
- (id)roleIdentifiersWithError:(out id *)a0;
- (id)selectedPosterUUIDForRole:(id)a0 error:(out id *)a1;
- (id)underlyingReadonlyDatabaseConnection;
- (BOOL)validateDatabaseWithError:(out id *)a0;

@end

@class RTPersistenceMigrator, NSMutableDictionary, NSCloudKitMirroringDelegate, NSCloudKitMirroringDelegateOptions, NSPersistentStoreDescription, NSURL;

@interface RTPersistenceStore : NSObject {
    BOOL _mirroringDelegateIntialized;
}

@property (retain, nonatomic) NSCloudKitMirroringDelegate *mirroringDelegate;
@property (retain, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringDelegateOptions;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long mirroringDelegateState;
@property (retain, nonatomic) RTPersistenceMigrator *migrator;
@property (readonly) NSPersistentStoreDescription *storeDescription;
@property (readonly) NSURL *URL;
@property (readonly) NSMutableDictionary *userInfo;

+ (id)storeBaseName:(id)a0;

- (BOOL)error:(id *)a0 inError:(id)a1;
- (id)init;
- (void)dealloc;
- (BOOL)error:(id *)a0 code:(unsigned long long)a1;
- (BOOL)removeFromCoordinator:(id)a0 error:(id *)a1;
- (BOOL)updateMetadata:(id)a0 context:(id)a1 coordinator:(id)a2 error:(id *)a3;
- (id)_normalizeError:(id)a0 storeDescription:(id)a1;
- (id)storeURLsMatchingStoreNameAtURL:(id)a0;
- (void)onMirroringDelegateInitialization:(id)a0;
- (id)storeBaseName;
- (id)storeName;
- (BOOL)openWithCoordinator:(id)a0 configuration:(id)a1 error:(id *)a2;
- (BOOL)addToCoordinator:(id)a0 lightweightMigration:(BOOL)a1 vacuum:(BOOL)a2 allowMirroring:(BOOL)a3 error:(id *)a4;
- (BOOL)rekeyWithCoordinator:(id)a0 keyData:(id)a1 error:(id *)a2;
- (id)initWithStoreDescription:(id)a0;
- (id)storeURLsMatchingStoreName;
- (void).cxx_destruct;
- (BOOL)performVacuumWithCoordinator:(id)a0 error:(id *)a1;
- (id)retrieveMetadataWithCoordinator:(id)a0 error:(id *)a1;
- (id)cachedModelWithError:(id *)a0;
- (BOOL)removeStoreAtURL:(id)a0 error:(id *)a1;
- (BOOL)destroyWithCoordinator:(id)a0 error:(id *)a1;
- (BOOL)updateMetadata:(id)a0 coordinator:(id)a1 error:(id *)a2;
- (id)_validateKeys:(id)a0;

@end

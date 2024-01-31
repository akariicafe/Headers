@class NSPersistentStore, NSMutableDictionary, PFUbiquityLocation, NSString, NSManagedObjectModel, PFUbiquityBaselineMetadata, _PFZipFileArchive;

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
    PFUbiquityLocation *_baselineStagingLocation;
    PFUbiquityBaselineMetadata *_metadata;
    NSMutableDictionary *_storeFilenameToData;
    NSString *_storeFilename;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
    _PFZipFileArchive *_baselineArchive;
    NSPersistentStore *_store;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithBaselineLocation:(id)a0 andLocalPeerID:(id)a1;
- (id)initWithLocalPeerID:(id)a0 ubiquityRootLocation:(id)a1 forStoreWithName:(id)a2 andManagedObjectModel:(id)a3;
- (BOOL)loadFileFromLocation:(id)a0 error:(id *)a1;
- (BOOL)moveToPermanentLocation:(id *)a0;
- (BOOL)writeFileToLocation:(id)a0 error:(id *)a1;

@end

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NTKPigmentPersistentStorageController : NSObject {
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSString *_rootDirectory;
}

+ (id)perDeviceFolder;
+ (id)faceColorRootFolder;
+ (id)globalStoresFolder;
+ (id)syncStoresFolder;

- (id)device;
- (id)init;
- (void)resetCache;
- (void).cxx_destruct;
- (id)initWithRootDirectory:(id)a0;
- (void)deleteContent;
- (id)colorDomainFilePath:(id)a0 deviceUUID:(id)a1;
- (id)_sharedCollections;
- (void)_writeData:(id)a0 toFile:(id)a1;
- (void)closeTransactionForDeviceUUID:(id)a0;
- (id)colorSyncFolderPathWithDeviceUUID:(id)a0;
- (BOOL)createColorSyncFolderIfNeededForDeviceUUID:(id)a0;
- (BOOL)createFolderIfNeeded:(id)a0;
- (id)facePigmentSetForDomain:(id)a0 sharedCollections:(id)a1;
- (void)persistFacePigmentSet:(id)a0 deviceUUID:(id)a1;
- (void)persistFacePigmentSetData:(id)a0 domain:(id)a1 deviceUUID:(id)a2;
- (void)persistSharedCollections:(id)a0 deviceUUID:(id)a1;
- (void)persistSharedCollectionsData:(id)a0 deviceUUID:(id)a1;
- (id)readPigmentSetFromData:(id)a0 sharedCollections:(id)a1;
- (id)readSharedCollectionsFromData:(id)a0;
- (id)serializeFacePigmentSet:(id)a0;
- (id)sharedCollections;
- (void)startTransactionForDeviceUUID:(id)a0;
- (id)transactionLockerFileNameForDeviceUUID:(id)a0;

@end

@class NSPersistentStore, PFUbiquityLocation, NSPersistentStoreCoordinator, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject {
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithMetadataStoreFileLocation:(id)a0;

@end

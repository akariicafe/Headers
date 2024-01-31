@protocol HMDFileManager, HMDPersistentStore;

@interface HMDPersonSettingsManagerDependencyFactory : NSObject <HMDPersonSettingsManagerDependencyFactory>

@property (readonly) id<HMDFileManager> fileManager;
@property (readonly) id<HMDPersistentStore> persistentStore;

@end

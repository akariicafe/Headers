@class NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue, DOCTagRegistryProtocol;

@interface DOCTagCloudSource : NSObject

@property (retain, nonatomic) NSUbiquitousKeyValueStore *store;
@property (retain, nonatomic) NSObject *iCloudToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue;
@property (weak, nonatomic) id<DOCTagRegistryProtocol> tagRegistry;

- (void)dealloc;
- (void)ubiquityIdentityDidChange;
- (void).cxx_destruct;
- (void)iCloudTokenWithCompletionBlock:(id /* block */)a0;
- (long long)iCloudTagSerialNumber;
- (long long)iCloudTagVersion;
- (id)iCloudTags;
- (id)iCloudTagsDictionary;
- (id)initWithTagRegistry:(id)a0;
- (void)isICloudAvailableWithCompletionBlock:(id /* block */)a0;
- (void)kvsStoreDidChange:(id)a0;
- (void)readTagsFromCloud:(BOOL)a0;
- (void)syncTagsWithCloud:(BOOL)a0;
- (void)syncTagsWithCloud:(BOOL)a0 isICloudAvailable:(BOOL)a1;
- (void)writeTagsToCloud;

@end

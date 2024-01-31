@class NSString, HKTaskServerProxyProvider;
@protocol HKCloudSyncControlDelegate;

@interface HKCloudSyncControl : NSObject <_HKXPCExportable, HKCloudSyncControlClientInterface> {
    HKTaskServerProxyProvider *_proxyProvider;
    id<HKCloudSyncControlDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<HKCloudSyncControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)a0;
- (void)forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)a0;
- (id)remoteInterface;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)fetchCloudSyncRequiredWithCompletion:(id /* block */)a0;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)syncWithRequest:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)disableCloudSyncWithCompletion:(id /* block */)a0;
- (void)clientRemote_syncRequestDidCompleteWithSuccess:(BOOL)a0 error:(id)a1;
- (id)defaultChangesSyncRequestForWatch;
- (void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)enableCloudSyncWithCompletion:(id /* block */)a0;
- (void)fetchCloudDescriptionWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fetchCloudSyncProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fetchCloudSyncStatusWithCompletion:(id /* block */)a0;
- (void)forceCloudResetWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)a0;
- (void)requestDataRefreshWithCompletion:(id /* block */)a0;

@end

@class NSSet, EDAssetDownloadScheduler, NSString, NSObject;
@protocol OS_os_log;

@interface EDMailDynamicDataAsset : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property BOOL shouldIgnoreUserAccountDomains;
@property (retain) NSSet *ignoredDomains;
@property (retain, nonatomic) EDAssetDownloadScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredDomainsFallback;

- (id)init;
- (void)_updateStateFromAsset:(id)a0;
- (void)_queryForAssetWithCompletion:(id /* block */)a0;
- (void)_updateIgnoredDomains:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldIgnoreDomain:(id)a0;
- (void)_downloadAssetCatalogWithCompletion:(id /* block */)a0;

@end

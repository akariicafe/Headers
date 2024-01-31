@class _TtC11iCloudQuota26RecommendationsDataFetcher, ICQiCloudDetailsPageInfo, ACAccount;

@interface ICQCloudStorageDataController : NSObject {
    ACAccount *_account;
    _TtC11iCloudQuota26RecommendationsDataFetcher *_recommendationsDataFetcher;
}

@property (nonatomic) BOOL shouldIgnoreCache;
@property (readonly, nonatomic) ICQiCloudDetailsPageInfo *cachediCloudDetailsPage;
@property (nonatomic) BOOL iCloudDetailsPageShown;

+ (id)_requestQueue;

- (id)cachedStorageSummary;
- (id)initWithAccount:(id)a0;
- (void)sendDismissStatusForTip:(id)a0 completion:(id /* block */)a1;
- (void)fetchBackupinfoWithCompletion:(id /* block */)a0;
- (void)fetchAppsSyncingToiCloudDriveWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchStorageAppsWithCompletion:(id /* block */)a0;
- (void)fetchStorageByApp:(id)a0 completion:(id /* block */)a1;
- (void)sendDisplayStatusForTip:(id)a0 completion:(id /* block */)a1;
- (void)fetchStorageSummaryWithCompletion:(id /* block */)a0;

@end

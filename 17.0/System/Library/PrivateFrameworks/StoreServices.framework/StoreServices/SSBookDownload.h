@class NSString;
@protocol SSBookDownloadQueue, SSBookDownloadStatus;

@interface SSBookDownload : SSDownload {
    id<SSBookDownloadQueue> _downloadQueue;
}

@property (retain, nonatomic) NSString *downloadPhaseIdentifierOverride;
@property (readonly, nonatomic) id<SSBookDownloadStatus> downloadStatus;
@property (readonly, nonatomic) NSString *downloadID;

- (double)percentComplete;
- (long long)bytesDownloaded;
- (BOOL)isCancelable;
- (void)pause;
- (long long)persistentIdentifier;
- (void)setMetadata:(id)a0;
- (id)status;
- (id)valueForProperty:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)restart;
- (id)metadata;
- (void)setStatus:(id)a0;
- (BOOL)addAsset:(id)a0 forType:(id)a1;
- (id)assetsForType:(id)a0;
- (long long)bytesTotal;
- (id)downloadPhaseIdentifier;
- (void)setDownloadHandler:(id)a0 completionBlock:(id /* block */)a1;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (void)prioritizeAboveDownload:(id)a0 completionBlock:(id /* block */)a1;
- (void)setDownloadPolicy:(id)a0;
- (BOOL)removeAsset:(id)a0;
- (id)networkConstraints;
- (void)setNetworkConstraints:(id)a0;
- (void)_becomeManagedOnConnection:(id)a0;
- (id)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (id)initWithDownloadStatus:(id)a0;
- (BOOL)isBackgroundNetworkingUserInitiated;
- (BOOL)isEligibleForRestore:(id *)a0;
- (void)setBackgroundNetworkingJobGroupName:(id)a0;
- (void)setBackgroundNetworkingUserInitiated:(BOOL)a0;
- (void)setValuesWithStoreDownloadMetadata:(id)a0;

@end

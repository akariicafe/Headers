@class MTSecureDownloadRenewalManager;

@interface PFSecureDownloadRenewalManager : NSObject {
    MTSecureDownloadRenewalManager *_manager;
}

+ (id)inContextKeyDataFor:(long long)a0 ctx:(id)a1;

- (id)init;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (id)initWithURLProtocolDelegate:(id)a0;
- (void)requestSecureDeletionOfEpisodeWithAdamID:(long long)a0;
- (void)requestSecureDeletionOfOrphanedKeys;
- (void)updateDRMKeysForDownloads;

@end

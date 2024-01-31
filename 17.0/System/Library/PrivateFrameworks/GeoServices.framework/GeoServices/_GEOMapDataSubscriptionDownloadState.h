@class GEOMapDataSubscriptionDownloader, NSProgress, NSError, GEOMapDataSubscriptionState;

@interface _GEOMapDataSubscriptionDownloadState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _fullyLoadedForLatestVersions;
    BOOL _fullyLoadedForStaleVersions;
    unsigned long long _dataCount;
    unsigned long long _dataSize;
    NSProgress *_pendingProgress;
    unsigned long long _downloadMode;
    long long _downloadReason;
    long long _downloadUpdateType;
    long long _dbDownloadState;
    NSError *_lastError;
    GEOMapDataSubscriptionDownloader *_downloader;
    GEOMapDataSubscriptionState *_externalState;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

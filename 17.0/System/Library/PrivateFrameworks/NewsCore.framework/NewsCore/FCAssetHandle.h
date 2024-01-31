@class NSError, NSString, NSURL, NSHashTable, NSDate, NFUnfairLock, FCInterestToken, FCOperation, NSObject, FCContentArchive, NTPBAsset;
@protocol OS_dispatch_group, FCAssetDataProvider, FCAssetHandleDelegate;

@interface FCAssetHandle : NSObject <FCContentArchivable> {
    NSError *_downloadError;
    NSURL *_remoteURL;
    FCOperation *_fetchOperation;
    NSHashTable *_downloadRequests;
    NSObject<OS_dispatch_group> *_fetchGroup;
    unsigned long long _countOfPenalizedDownloadAttempts;
    NSDate *_dateOfLastDownloadAttempt;
    NFUnfairLock *_stateLock;
    id<FCAssetHandleDelegate> _delegate;
    FCInterestToken *_holdToken;
    NSString *_assetKey;
    long long _lifetimeHint;
    NSString *_rawFilePath;
    NTPBAsset *_assetMetadata;
}

@property (retain) id<FCAssetDataProvider> dataProvider;
@property (readonly, copy) NSString *filePath;
@property (readonly) NSError *downloadError;
@property (readonly, copy, nonatomic) NSString *uniqueKey;
@property (readonly, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (void)dealloc;
- (id)fetchDataProviderWithCompletion:(id /* block */)a0;
- (id)downloadIfNeededWithGroup:(id)a0;
- (id)downloadIfNeededWithCompletion:(id /* block */)a0;
- (id)downloadIfNeededWithPriority:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)fetchDataProviderWithPriority:(long long)a0 completion:(id /* block */)a1;
- (id)downloadIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;

@end

@class NSString, NSDictionary, NSObject, UAFAssetStatus;
@protocol OS_dispatch_queue, OS_dispatch_group, UAFAssetUtilitiesDelegate;

@interface UAFAssetUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSObject<OS_dispatch_queue> *_assistantQueue;
    unsigned long long _retryCount;
    BOOL _observerEnabled;
}

@property (retain, nonatomic) UAFAssetStatus *assetStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *utilityQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *assistantGroup;
@property (retain, nonatomic) NSString *siriLanguage;
@property (nonatomic) BOOL assistantEnabled;
@property (nonatomic) BOOL understandingOnDeviceAssetsAvailable;
@property (retain, nonatomic) NSDictionary *assistantUODStatus;
@property (weak, nonatomic) id<UAFAssetUtilitiesDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)_createConnection;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)startObservers;
- (void)downloadSiriAssets;
- (id)getAssistantLanguageIfAvailableSync;
- (void)refreshUAFAssetStatusAsync;
- (void)_assistantLanguageUpdate;
- (void)_assistantPreferencesAndLanguageUpdate;
- (unsigned long long)_checkFreeSpaceNeededForDownloadForLanguage:(id)a0;
- (void)_downloadSiriAssetsOverCellular:(BOOL)a0;
- (void)_emitDownloadTriggerEventWithLanguage:(id)a0 hasExistingAssets:(BOOL)a1;
- (void)_handleNetworkPathUpdate;
- (BOOL)_hasInexpensiveNetwork;
- (BOOL)_networkIsSatisfied;
- (id)_refreshUAFAssetStatusSync;
- (void)_stopObservers;
- (void)_triggerDelegateAssetStatusUpdated;
- (void)_updateDelegateForUODAvailable:(BOOL)a0 uodStatus:(id)a1;
- (BOOL)assetsAreAvailableForLanguageSync:(id)a0;
- (void)downloadSiriAssetsIfNeeded;
- (void)downloadSiriAssetsOverCellular;
- (id)getDownloadSizeInBytesForLanguage:(id)a0;
- (BOOL)hasSufficientDiskSpaceForDownload;
- (void)refreshUnderstandingOnDeviceAssetsAvailableAsync;

@end

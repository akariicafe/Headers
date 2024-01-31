@class AFSettingsConnection, NSMutableDictionary, NSString, NSObject, UAFAssetStatus;
@protocol OS_dispatch_queue;

@interface UAFAssetUtilitiesService : NSObject {
    NSString *_siriLanguage;
    BOOL _observerEnabled;
}

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (retain, nonatomic) UAFAssetStatus *assetStatus;
@property (retain, nonatomic) NSMutableDictionary *dictationStatus;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getLanguage;
- (void)downloadSiriAssets;
- (void)switchLanguage:(id)a0;
- (unsigned long long)_checkFreeSpaceNeededForDownloadForLanguage:(id)a0 isDictation:(BOOL)a1;
- (void)_downloadDictationAssetsForLanguage:(id)a0 useCellular:(BOOL)a1;
- (void)_downloadUnderstandingAssetsForLanguage:(id)a0 useCellular:(BOOL)a1;
- (id)_getDownloadSizeInBytesForLanguage:(id)a0 isDictation:(BOOL)a1 error:(id *)a2;
- (void)_handleDictationCompletionForLanguage:(id)a0;
- (void)_handleDictationProgress:(unsigned long long)a0 language:(id)a1;
- (void)_handleUpdateProgress:(unsigned long long)a0 status:(unsigned long long)a1 language:(id)a2;
- (BOOL)_hasInexpensiveNetwork;
- (BOOL)_isLegacySiriDevice;
- (void)_postAssetStateChangedNotification;
- (void)_updateAssetState:(unsigned long long)a0 value:(id)a1 forLanguage:(id)a2;
- (void)_updateProgress:(unsigned long long)a0 forLanguage:(id)a1;
- (void)_updateSiriAssetAvailability:(id)a0 forLanguage:(id)a1;
- (void)checkAssetStatus:(id /* block */)a0;
- (void)downloadDictationAssetsForLanguage:(id)a0;
- (void)downloadSiriAssetsOverCellular;
- (void)downloadSizeInBytesForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)postAssetNotificationIfNeeded;
- (void)postDictationAssetNotificationForLanguage:(id)a0;
- (void)startObserver;
- (void)stopObserver;
- (void)updateAssetState:(unsigned long long)a0 value:(id)a1 forLanguage:(id)a2;
- (void)updateDictationState:(unsigned long long)a0 withValue:(id)a1 forLanguage:(id)a2;
- (void)updateSiriAssetAvailabilityForLanguage:(id)a0;

@end

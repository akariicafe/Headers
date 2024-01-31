@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CoreMediaDownloadMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _assetDownloadProcessId;
    id _assetDownloadObserver;
    BOOL _userInitiatedDownloadInProgress;
    BOOL _userInitiatedDownloadInProgressOrHysteresis;
    BOOL _userInitiatedDownloadInHysteresis;
    NSMutableDictionary *_downloads;
}

@property (nonatomic) BOOL userInitiatedDownloadInProgress;
@property (nonatomic) BOOL userInitiatedDownloadInProgressOrHysteresis;
@property (nonatomic) BOOL userInitiatedDownloadInHysteresis;
@property (readonly, nonatomic) int numInProgressForegroundDownloads;
@property (readonly, nonatomic) int numPausedForegroundDownloads;
@property (readonly, nonatomic) int numInHysteresisForegroundDownloads;
@property (readonly, nonatomic) int numInProgressBackgroundDownloads;
@property (readonly, nonatomic) int numPausedBackgroundDownloads;
@property (readonly, nonatomic) int numInHysteresisBackgroundDownloads;
@property (readonly, nonatomic) double userInitiatedDownloadHysteresis;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)restoreDefaults;
- (id)initWithQueue:(id)a0;
- (id)getState;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_newCoreMediaAssetDownloadEvent:(id)a0;
- (void)_evaluateProperties;
- (void)_noteCoreMediaAssetDownloadEvent:(unsigned long long)a0 downloadUUID:(id)a1 onBehalfOf:(id)a2 duration:(double)a3;

@end

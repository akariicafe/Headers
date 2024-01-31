@class CoreTelephonyClient, NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, CoreTelephonyClientDataDelegate, ICCloudAvailability> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasProperNetworkConditionsToShowCloudMedia;
    BOOL _isAirplaneModeActive;
    BOOL _isAutoDownloadOnCellularAllowed;
    BOOL _isCellularDataActive;
    BOOL _isCellularDataRestrictedForMusic;
    BOOL _isShowingAllMusic;
    BOOL _isShowingAllVideo;
    BOOL _isUpdateInProgress;
    BOOL _isWiFiEnabled;
    BOOL _isWiFiAssociated;
    BOOL _isEthernetWired;
    BOOL _isNetworkReachable;
    BOOL _canShowCloudMusic;
    BOOL _canShowCloudVideo;
    BOOL _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    long long _networkType;
    RadiosPreferences *_radiosPreferences;
    struct __CTServerConnection { } *_ctServerConnection;
    CoreTelephonyClient *_telephonyClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForVideos;
- (void)airplaneModeChanged;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)canShowCloudVideo;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)canShowCloudMusic;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (void)_applicationWillEnterForeground:(id)a0;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (void)_setNewIsNetworkReachable:(BOOL)a0 networkType:(long long)a1;
- (id)init;
- (BOOL)isNetworkReachable;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)a0;
- (BOOL)_hasWiFiCapability;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (void)_unregisterPerAppNetworkDataAccessPolicyChangedNotification;
- (void)internetConnectionStateChanged:(id)a0;
- (BOOL)_uncachedIsShowingAllVideo;
- (void)_registerPerAppNetworkDataAccessPolicyChangedNotification;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (void)_wifiStateDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)a0;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (BOOL)_hasCellularCapability;
- (BOOL)_uncachedIsShowingAllMusic;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)a0;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;

@end

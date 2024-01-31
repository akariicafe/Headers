@class NSMutableDictionary, NSTimer, NSString, TVPStateMachine, NSMutableArray;

@interface VUIOfflineKeyRenewalManager : NSObject <VUIStoreFPSKeyLoaderDelegate, TVPDownloadDelegate>

@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableDictionary *keyLoaders;
@property (nonatomic) BOOL networkErrorOccurredDuringInvalidation;
@property (retain, nonatomic) NSTimer *keyRenewalTimer;
@property (retain, nonatomic) NSTimer *expirationTimer;
@property (retain, nonatomic) NSMutableDictionary *contentKeySessions;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (retain, nonatomic) NSMutableArray *downloadsForRepairingKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_keyInfosForVideo:(id)a0 outKeyIdentifiers:(id)a1;

- (void)_applicationWillEnterForeground:(id)a0;
- (id)init;
- (void)_applicationDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (void)_networkReachbilityDidChange:(id)a0;
- (void)_expirationTimerDidFire:(id)a0;
- (void)_fetchNewKeysForVideosWithBrokenKeys:(id)a0;
- (void)_isPlaybackUIBeingShownDidChange:(id)a0;
- (void)_registerStateMachineHandlers;
- (void)_renewKeysForVideos:(id)a0 outCompletedKeyRequests:(id)a1 completion:(id /* block */)a2;
- (void)_renewKeysForVideosGroupedByCertURL:(id)a0 outCompletedKeyRequests:(id)a1 completion:(id /* block */)a2;
- (void)_renewalTimerDidFire:(id)a0;
- (void)download:(id)a0 didChangeStateTo:(long long)a1;
- (void)storeFPSKeyLoader:(id)a0 didLoadOfflineKeyData:(id)a1 forKeyRequest:(id)a2;
- (void)updateKeyRenewalAndExpiration;

@end

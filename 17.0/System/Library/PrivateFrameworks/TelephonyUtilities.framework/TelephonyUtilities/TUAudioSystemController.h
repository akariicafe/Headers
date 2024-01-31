@class NSDictionary, NSArray, NSObject, NSNumber;
@protocol OS_dispatch_queue, TUAudioSystemControllerDelegate;

@interface TUAudioSystemController : TUAudioController {
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSNumber *_isUplinkMutedCached;
    NSNumber *_isDownlinkMutedCached;
    NSNumber *_isTTYCached;
    NSArray *_pickableRoutesForTTY;
    NSArray *_pickableRoutesForPhoneCall;
    NSArray *_pickableRoutesForPlayAndRecordVideo;
    NSArray *_pickableRoutesForPlayAndRecordVoice;
    NSArray *_pickableRoutesForPlayAndRecordRemoteVoice;
    NSArray *_pickableRoutesForVoicemail;
    NSArray *_currentPickableRoutes;
    BOOL _isRequestingUplinkMuted;
    BOOL _isRequestingDownlinkMuted;
    BOOL _isRequestingTTY;
    BOOL _isRequestingPickableRoutesForTTY;
    BOOL _isRequestingPickableRoutesForPhoneCall;
    BOOL _isRequestingPickableRoutesForPlayAndRecordVideo;
    BOOL _isRequestingPickableRoutesForPlayAndRecordVoice;
    BOOL _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    BOOL _isRequestingPickableRoutesForVoicemail;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
    unsigned long long _lastVoicemailRoutesScheduleTime;
}

@property (class, readonly, nonatomic) TUAudioSystemController *sharedAudioSystemController;

@property (weak, nonatomic) id<TUAudioSystemControllerDelegate> delegate;
@property (nonatomic) float activeCategoryVolume;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
@property (nonatomic, getter=isDownlinkMuted) BOOL downlinkMuted;
@property (readonly, nonatomic, getter=isTTY) BOOL tty;
@property (readonly, copy, nonatomic) NSDictionary *pickedRouteAttribute;
@property (readonly, copy, nonatomic) NSArray *bestGuessPickableRoutesForAnyCall;
@property (readonly, copy, nonatomic) NSArray *pickableRoutesForTTY;
@property (readonly, nonatomic) BOOL otherSessionsRequestNoRingtoneInterruption;

+ (id)sourceIdentifierForRouteID:(id)a0;
+ (id)filteredPickableRoutesFromPickableRoutes:(id)a0;
+ (id)sharedSystemController;
+ (BOOL)isPhoneCallAudioCategory:(id)a0;

- (id)init;
- (BOOL)pickRoute:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)_handlePickableRoutesDidChangeNotification:(id)a0;
- (void)_handleUplinkMuteDidChangeNotification:(id)a0;
- (void)_loadCurrentPickableRoutesWithCompletion:(id /* block */)a0;
- (BOOL)shouldSuppressCallUsingRoute:(id)a0;
- (id)currentlyPickedRouteIdForCategory:(id)a0 andMode:(id)a1;
- (void)_updateCachedState;
- (id)pickableRoutesForActiveCall;
- (void)switchBluetoothAudioFormats;
- (void)_mediaServicesWereReset:(id)a0;
- (id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)a0;
- (void)triggerEndInterruptionForAudioSessionID:(id)a0;
- (id)pickableRouteWithUniqueIdentifier:(id)a0;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(BOOL)a0;
- (void)getPickableRoutesForCategory:(id)a0 mode:(id)a1 completion:(id /* block */)a2;
- (id)pickableRoutesForCategory:(id)a0 andMode:(id)a1;
- (void)_handleVolumeDidChangeNotification:(id)a0;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(BOOL)a0;
- (void)_getPickableRoutesForCategory:(id)a0 mode:(id)a1 onlyKnownCombinations:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)_pickableRoutesForVoiceMailWithForceNewRequest:(BOOL)a0;
- (void)_subscribeToNotificationAttributes;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(BOOL)a0;
- (void)_handleDownlinkMuteDidChangeNotification:(id)a0;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(BOOL)a0;

@end

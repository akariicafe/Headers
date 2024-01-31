@class NSDate, NSString, PMMPredictionItem, PMMAudioDisconnectListener, PMMMusicStateProcessor, PETScalarEventTracker, PMMDataProtectionMonitor, PMMTelephonyConnection, NSObject, CXCallObserver;
@protocol OS_dispatch_queue;

@interface PMMPredictor : NSObject <PMMDataProtectionMonitorDelegate, CXCallObserverDelegate> {
    BOOL _callInProgress;
    CXCallObserver *_callObserver;
}

@property (retain, nonatomic) PMMAudioDisconnectListener *disconnectListener;
@property (retain, nonatomic) PMMMusicStateProcessor *musicStateProcessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nowPlayingStatusQueue;
@property (retain, nonatomic) PMMTelephonyConnection *ctConnection;
@property (retain, nonatomic) PMMDataProtectionMonitor *dataProtectionMonitor;
@property (retain, nonatomic) PMMPredictionItem *mostRecentPrediction;
@property (retain, nonatomic) PMMPredictionItem *mostRecentNowPlayingPrediction;
@property (retain, nonatomic) NSString *mostRecentNowPlayingApp;
@property (retain, nonatomic) NSDate *dateOfLastNowPlayingEvent;
@property (nonatomic) long long encryptedDataAvailability;
@property (nonatomic) BOOL unlockedSinceBoot;
@property (nonatomic) long long dataProtectionStatus;
@property (retain, nonatomic) PETScalarEventTracker *mmAppSuggestion;
@property (retain, nonatomic) PETScalarEventTracker *heroAppSuggestion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)_predictionPopulatesContinuity:(id)a0;
+ (BOOL)_predictionIsAudio:(id)a0;
+ (BOOL)_predictionPopulatesNowPlaying:(id)a0 fromUnitTest:(BOOL)a1;
+ (BOOL)_predictionPopulatesSpringboard:(id)a0;
+ (BOOL)_predictionPopulatesStark:(id)a0;
+ (BOOL)bundleSupportsINPlayMediaIntentForBundleId:(id)a0 fromUnitTest:(BOOL)a1;
+ (id)getHighestConfidencePredictionForNowPlayingConsumerFromPredictions:(id)a0 fromUnitTest:(BOOL)a1;
+ (long long)pmmReasonToDECReason:(long long)a0;

- (id)init;
- (id)notifyNonNowPlayingConsumersOfPredictionItem:(id)a0;
- (void)_notifyAppPredictionAboutMMUpdate:(id)a0;
- (void)_clearAllRecommendationsExceptAppPredictions;
- (void)handlePredictedApplications:(id)a0;
- (void)dataProtectionMonitor:(id)a0 encryptedDataAvailbilityDidChange:(long long)a1;
- (void)fetchMediaRemoteNowPlayingApplicationBundleId:(id /* block */)a0;
- (void)_clearAllRecommendations;
- (void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(id /* block */)a0;
- (void)logPrediction:(id)a0 predictionSource:(unsigned long long)a1 mmReason:(long long)a2 decReason:(long long)a3 reasonSingle:(long long)a4 reasonMetadata:(id)a5;
- (void)handleNowPlayingInfoDidChange;
- (void)dataProtectionMonitor:(id)a0 dataProtectionStatusDidChange:(long long)a1;
- (id)preprocessPrediction:(id)a0 predictionSource:(unsigned long long)a1 mmReason:(long long)a2 decReason:(long long)a3 reasonSingle:(long long)a4 reasonMetadata:(id)a5;
- (BOOL)_recommendingAudioWhileAlreadyPlaying:(id)a0;
- (void)dataProtectionMonitor:(id)a0 unlockedSinceBoot:(BOOL)a1;
- (void).cxx_destruct;
- (id)_publishPredictionWithPredictedApplication:(id)a0 fromUnitTest:(BOOL)a1;
- (void)_handleNowPlayingInfoDidChange;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)notifyNowPlayingConsumerOfPredictionItem:(id)a0;
- (void)_updatePredictionBasedOnPreviousDataProtectionStatus:(long long)a0 previousEncryptedDataAvailability:(long long)a1;
- (id)expirationForReason:(long long)a0;

@end

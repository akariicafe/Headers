@class HMCameraProfile, NSString, HFCameraAudioManager, NSError, HMCameraSource, HMHome;
@protocol HFCameraLiveStreamControllerDelegate;

@interface HFCameraLiveStreamController : NSObject <HFCameraObserver, HFCameraLiveStreamControlling>

@property (retain, nonatomic) HFCameraAudioManager *audioManager;
@property (nonatomic) unsigned long long inferredStreamState;
@property (nonatomic) BOOL startStreamingAfterStop;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HFCameraLiveStreamControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isStreamingEnabled) BOOL streamingEnabled;
@property (readonly, nonatomic) unsigned long long streamState;
@property (readonly, nonatomic) HMCameraSource *liveCameraSource;
@property (readonly, nonatomic) NSError *streamError;
@property (nonatomic, getter=isStreamAudioEnabled) BOOL streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)a0;
- (void)cameraStreamControl:(id)a0 didStopStreamWithError:(id)a1;
- (void)cameraStreamControlDidStartStream:(id)a0;
- (void)cameraUserSettingsDidUpdate:(id)a0;
- (id)mostRecentSnapshot;
- (id)initWithHome:(id)a0 cameraProfile:(id)a1;
- (void)startStreaming;
- (unsigned long long)_derivedAudioStreamSetting;
- (void)_updateAudioManagerState;
- (id)activeStream;
- (void)cameraStreamControlDidUpdateManagerState:(id)a0;
- (void)cameraStreamControlDidUpdateStreamState:(id)a0;
- (void)stopStreaming;

@end

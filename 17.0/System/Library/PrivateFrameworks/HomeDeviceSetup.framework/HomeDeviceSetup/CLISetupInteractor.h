@class NSString, HDSSetupSession, SFDevice, NSObject;
@protocol OS_dispatch_queue;

@interface CLISetupInteractor : NSObject <AVAudioPlayerDelegate, FMFSessionDelegate> {
    BOOL _recognizeVoiceEnabled;
    BOOL _locationEnabled;
    BOOL _personalRequestsEnabled;
    BOOL _siriEnabled;
    BOOL _activeDeviceEnabled;
    BOOL _odeonEnabled;
    BOOL _soundRecognitionEnabled;
    BOOL _psgEnabled;
    BOOL _siriForICloudEnabled;
    NSString *_homeName;
    NSString *_roomName;
    int _homeIndex;
    int _roomIndex;
    int _suggestedRoomIndex;
    unsigned long long _stereoPairIndex;
    unsigned int _delayTime;
    int _stereoRole;
    unsigned char _homePodType;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (nonatomic) unsigned long long peerFeatureFlags;
@property (retain, nonatomic) HDSSetupSession *setupSession;
@property (nonatomic) unsigned long long testFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_cleanupSession;
- (void)sessionHandleProgress:(unsigned int)a0 inInfo:(id)a1 session:(id)a2;
- (void)setCLIPromptsForStates;
- (void)setSetupUserInputConfig:(id)a0;

@end

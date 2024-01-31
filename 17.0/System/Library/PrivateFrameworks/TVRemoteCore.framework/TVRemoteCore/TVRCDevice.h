@class TVRCNowPlayingInfo, NSString, TVRCKeyboardController, TVRCDeviceState, TVRCDeviceInfo, TVRCSiriRemoteInfo, NSSet;
@protocol TVRCDeviceDelegate;

@interface TVRCDevice : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) TVRCDeviceState *deviceState;
@property (retain, nonatomic) TVRCKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCDeviceInfo *info;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) TVRCSiriRemoteInfo *pairedRemoteInfo;
@property (readonly, nonatomic) TVRCNowPlayingInfo *nowPlayingInfo;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) long long siriRemoteFindingState;
@property (weak, nonatomic) id<TVRCDeviceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL supportsTouchEvents;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, copy, nonatomic) NSSet *supportedButtons;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) unsigned long long pairingCapability;
@property (readonly, nonatomic) BOOL supportsFindMyRemote;

- (BOOL)isEqualToDevice:(id)a0;
- (void)dealloc;
- (void)connect;
- (id)description;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)a0;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)sendTouchEvent:(id)a0;
- (void)_connectWithConnectionContext:(long long)a0;
- (void)_deviceEncounteredAuthChallengeType:(long long)a0 attributes:(long long)a1 codeToEnterOnDevice:(id)a2 throttleSeconds:(long long)a3;
- (void)_deviceUpdatedState:(id)a0;
- (void)_disconnectDeviceDueToConnectionInterruption;
- (void)_sendRTIDataPayload:(id)a0;
- (void)connectWithConnectionContext:(long long)a0;
- (void)disconnectWithType:(unsigned long long)a0;
- (void)enableFindingSession:(BOOL)a0;
- (void)enableTVRemoteOnLockscreen:(BOOL)a0;
- (BOOL)isInEditingSession;

@end

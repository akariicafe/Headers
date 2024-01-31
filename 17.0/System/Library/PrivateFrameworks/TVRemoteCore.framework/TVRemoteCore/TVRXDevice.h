@class TVRCNowPlayingInfo, NSString, NSDictionary, NSSet, TVRCSiriRemoteInfo, TVRXKeyboardController;
@protocol _TVRXDeviceDelegate, _TVRCDeviceImpl;

@interface TVRXDevice : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSSet *supportedButtons;
@property (retain, nonatomic, getter=_impl, setter=_setImpl:) id<_TVRCDeviceImpl> impl;
@property (weak, nonatomic) id<_TVRXDeviceDelegate> delegate;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) BOOL supportsFindMyRemote;
@property (readonly, nonatomic) BOOL supportsTouchEvents;
@property (readonly, nonatomic) BOOL paired;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, nonatomic) TVRXKeyboardController *keyboardController;
@property (readonly, nonatomic) unsigned long long pairingCapability;
@property (readonly, nonatomic) long long attentionState;
@property (readonly, nonatomic) TVRCSiriRemoteInfo *pairedRemoteInfo;
@property (readonly, nonatomic) TVRCNowPlayingInfo *nowPlayingInfo;
@property (readonly, nonatomic) NSString *idsIdentifier;
@property (nonatomic) long long classification;
@property (readonly, nonatomic) long long siriRemoteFindingState;

- (void)disconnect;
- (id)_init;
- (id)allIdentifiers;
- (void)connect;
- (id)description;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)_setDeviceName:(id)a0;
- (void)sendTouchEvent:(id)a0;
- (void)_setDeviceSupportsFindMyRemote:(BOOL)a0;
- (BOOL)_authenticationIsSupported;
- (void)_connectionAttemptSucceeded;
- (void)_deviceUpdateAttentionState;
- (void)_deviceUpdateSiriRemoteFindingState;
- (void)_disconnected:(long long)a0 error:(id)a1;
- (void)_enableFindingSession:(BOOL)a0;
- (void)_encounteredAuthenticationChallenge:(id)a0;
- (void)_setActiveEndpoint;
- (void)_setIdentifier:(id)a0 alternateIdentifiers:(id)a1 name:(id)a2 model:(id)a3 supportedButtons:(id)a4;
- (void)_setNowPlayingInfo:(id)a0;
- (void)_setPairedRemoteInfo:(id)a0;
- (void)_setSupportedButtons:(id)a0;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;

@end

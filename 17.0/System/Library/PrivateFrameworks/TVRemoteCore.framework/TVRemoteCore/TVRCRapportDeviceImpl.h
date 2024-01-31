@class TVRCRPCompanionLinkClientWrapper, TVRCRapportRemoteTextInputKeyboardImpl, TVRXDevice, NSString, TVRXKeyboardController;

@interface TVRCRapportDeviceImpl : NSObject <_TVRCDeviceImpl, _TVRCCompanionLinkClientWrapperDelegate>

@property (weak, nonatomic) TVRXDevice *device;
@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *deviceWrapper;
@property (retain, nonatomic) TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithDevice:(id)a0;

- (id)nowPlayingInfo;
- (BOOL)isPaired;
- (void)disconnect;
- (id)model;
- (long long)connectionType;
- (void)connect;
- (id)identifier;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)idsIdentifier;
- (id)name;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (id)supportedButtons;
- (void)sendTouchEvent:(id)a0;
- (void)_setupKeyboardController;
- (id)alternateIdentifiers;
- (void)connectedToDevice:(id)a0;
- (long long)deviceAttentionState;
- (void)deviceEncounteredAuthenticationChallenge:(id)a0;
- (void)deviceSupportsFindMyRemote:(BOOL)a0;
- (void)deviceUpdateSiriRemoteFindingState;
- (void)deviceUpdatedAttentionState;
- (void)deviceUpdatedNowPlayingInfo:(id)a0;
- (void)deviceUpdatedPairedRemoteInfo:(id)a0;
- (void)deviceUpdatedSupportedButtons:(id)a0;
- (void)disconnectedFromDevice:(id)a0 error:(id)a1;
- (void)enableFindingSession:(BOOL)a0;
- (id)pairedRemoteInfo;
- (unsigned long long)pairingCapability;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;
- (void)setAuthenticationSupported:(BOOL)a0;
- (long long)siriRemoteFindingState;
- (BOOL)supportsFindMyRemote;
- (BOOL)supportsTouchEvents;

@end

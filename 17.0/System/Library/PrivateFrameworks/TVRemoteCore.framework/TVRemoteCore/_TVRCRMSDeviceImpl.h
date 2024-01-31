@class TVRXDevice, NSString, _TVRCRMSDeviceWrapper;

@interface _TVRCRMSDeviceImpl : NSObject <_TVRCRMSDeviceWrapperDelegate, _TVRCDeviceImpl>

@property (retain, nonatomic) _TVRCRMSDeviceWrapper *deviceWrapper;
@property (weak, nonatomic) TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithDevice:(id)a0;

- (BOOL)isPaired;
- (void)disconnect;
- (id)model;
- (long long)connectionType;
- (void)connect;
- (id)identifier;
- (id)keyboardController;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (id)supportedButtons;
- (void)sendTouchEvent:(id)a0;
- (id)alternateIdentifiers;
- (void)connectedToDevice:(id)a0;
- (void)deviceEncounteredAuthenticationChallenge:(id)a0;
- (void)deviceUpdatedSupportedButtons:(id)a0;
- (void)disconnectedFromDevice:(id)a0 error:(id)a1;
- (unsigned long long)pairingCapability;
- (void)setAuthenticationSupported:(BOOL)a0;
- (BOOL)supportsFindMyRemote;
- (BOOL)supportsTouchEvents;

@end

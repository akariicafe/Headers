@class NSArray, SCROBrailleClient;
@protocol VOSBluetoothConnectableDevice;

@interface AXUIVoiceOverDeviceConfigController : AXUISettingsSetupCapableListController {
    NSArray *_deviceSpecifiers;
    BOOL _dismissed;
    SCROBrailleClient *_brailleClient;
}

@property (retain, nonatomic) id<VOSBluetoothConnectableDevice> device;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void).cxx_destruct;
- (void)deviceUpdated:(id)a0;
- (void)setDisconnectOnSleep:(id)a0 specifier:(id)a1;
- (void)_allowUSBRM;
- (void)_clearVOUSBRMDisabler;
- (void)_doReallyForgetDevice;
- (void)deviceConnectedHandler:(id)a0;
- (void)deviceRemoved:(id)a0;
- (id)disconnectOnSleep:(id)a0;
- (void)forgetDevice:(id)a0;

@end

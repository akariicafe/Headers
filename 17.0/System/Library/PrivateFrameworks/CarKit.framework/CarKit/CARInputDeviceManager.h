@class NSArray, CARSession, NSString;

@interface CARInputDeviceManager : NSObject <CARInputDeviceTouchpadDelegate>

@property (readonly, weak, nonatomic) CARSession *session;
@property (readonly, nonatomic) NSArray *inputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)touchpadWithSenderID:(unsigned long long)a0;
- (void)_enumerateTouchpadsUsingBlock:(id /* block */)a0;
- (id)_generateInputDevicesWithEndpointInputDevices:(id)a0 screenIDs:(id)a1 vehicleInformation:(id)a2;
- (id)_initWithInputDevices:(id)a0 session:(id)a1;
- (id)_inputDeviceWithSenderID:(unsigned long long)a0;
- (id)_touchpadSettingsFromVehicleInformation:(id)a0;
- (void)_updateTouchpadSettings:(id)a0;
- (id)initWithEndpointInputDevices:(id)a0 screenIDs:(id)a1 vehicleInformation:(id)a2 session:(id)a3;
- (void)performHapticType:(unsigned long long)a0 deviceUUID:(id)a1;
- (BOOL)touchpadCharacterRecognitionSupported;
- (void)vehicleInformationChanged:(id)a0;

@end

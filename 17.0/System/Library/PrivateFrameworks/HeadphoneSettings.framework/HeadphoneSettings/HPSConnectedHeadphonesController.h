@class BluetoothManager;

@interface HPSConnectedHeadphonesController : NSObject {
    BluetoothManager *_bluetoothManager;
    id /* block */ _deviceChangeHandler;
}

- (id)init;
- (void)dealloc;
- (void)setDeviceChangeHandler:(id /* block */)a0;
- (void)deviceConnectionHandler:(id)a0;
- (id)topLevelSpecifiers;
- (id)connectedHeadphoneInfo;
- (BOOL)nicknameEnabled;
- (void).cxx_destruct;
- (BOOL)boolFromBluetoothPreferences:(id)a0;
- (id)getDeviceIcon:(unsigned int)a0;

@end

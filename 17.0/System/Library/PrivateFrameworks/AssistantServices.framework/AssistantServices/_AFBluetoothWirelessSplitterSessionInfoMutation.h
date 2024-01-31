@class NSString, NSArray, AFBluetoothWirelessSplitterSessionInfo;

@interface _AFBluetoothWirelessSplitterSessionInfoMutation : NSObject <AFBluetoothWirelessSplitterSessionInfoMutating> {
    AFBluetoothWirelessSplitterSessionInfo *_base;
    long long _state;
    NSArray *_deviceAddresses;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasState : 1; unsigned char hasDeviceAddresses : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (long long)getState;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (id)getDeviceAddresses;
- (void)setDeviceAddresses:(id)a0;

@end

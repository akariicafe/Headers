@class NSString;

@interface VOSBluetoothDevice : NSObject <NSCopying, VOSBluetoothConnectableDevice> {
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl { } *_device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)vendorId;
- (void)disconnect;
- (id)address;
- (struct BTDeviceImpl { } *)device;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (BOOL)connected;
- (BOOL)isEqualToDevice:(id)a0;
- (void)setPIN:(id)a0;
- (unsigned int)productId;
- (void)setDevice:(struct BTDeviceImpl { } *)a0;
- (unsigned int)deviceClass;
- (void)connect;
- (long long)compare:(id)a0;
- (id)identifier;
- (unsigned long long)connectedServices;
- (BOOL)paired;
- (void).cxx_destruct;
- (id)name;
- (BOOL)connecting;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unpair;
- (void)_clearName;
- (void)acceptSSP:(int)a0;
- (void)connectWithServices:(unsigned int)a0;
- (unsigned long long)connectedServicesCount;
- (id)initWithDevice:(struct BTDeviceImpl { } *)a0 address:(id)a1;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (unsigned int)authorizedServices;
- (BOOL)hasAddress:(id)a0;
- (BOOL)isAppleHIDDevice;
- (BOOL)isNameCached;

@end

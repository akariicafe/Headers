@interface DSIOHIDDevice : NSObject {
    struct __IOHIDManager { } *_manager;
    struct __IOHIDDevice { } *_device;
}

@property (readonly, nonatomic) unsigned long long deviceModel;

+ (id)deviceMatchingAccessories:(id)a0;
+ (id)deviceMatchingAccessories:(id)a0 identifierMask:(unsigned long long)a1;
+ (id)deviceWithAccessory:(unsigned long long)a0;
+ (id)deviceWithAccessory:(unsigned long long)a0 identifierMask:(unsigned long long)a1;

- (id)serialNumber;
- (void)dealloc;
- (id)_sharedSerialQueue;
- (id)initWithDeviceIdentifiers:(id)a0 identifierMask:(unsigned long long)a1;
- (BOOL)reportWithID:(long long)a0 reportType:(int)a1 object:(char *)a2 length:(long long *)a3;
- (id)stringFromHIDReport:(long long)a0;

@end

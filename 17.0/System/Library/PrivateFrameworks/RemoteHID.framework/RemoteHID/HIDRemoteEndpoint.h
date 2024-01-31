@class NSMutableDictionary, NSMutableArray;

@interface HIDRemoteEndpoint : NSObject {
    NSMutableDictionary *_devices;
    NSMutableArray *_prevDeviceLog;
}

@property unsigned long long endpointID;
@property unsigned char primarySide;

- (id)initWithID:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)removeDevice:(id)a0;
- (void)addDevice:(id)a0;
- (void)removeDeviceID:(unsigned long long)a0;
- (id)copyState;
- (id)getDevice:(unsigned long long)a0;
- (void)removeAllDevices;

@end

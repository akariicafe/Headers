@class NSString;

@interface VOSUSBDevice : NSObject <VOSBluetoothConnectableDevice>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (BOOL)connected;
- (void)connect;
- (BOOL)paired;
- (void).cxx_destruct;
- (BOOL)connecting;
- (void)unpair;

@end

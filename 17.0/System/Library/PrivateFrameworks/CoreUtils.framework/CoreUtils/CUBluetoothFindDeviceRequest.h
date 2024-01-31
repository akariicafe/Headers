@interface CUBluetoothFindDeviceRequest : NSObject

@property (nonatomic) struct { unsigned char bytes[6]; } address;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end

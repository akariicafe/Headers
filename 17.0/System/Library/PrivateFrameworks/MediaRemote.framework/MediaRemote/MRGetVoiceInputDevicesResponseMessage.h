@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly, nonatomic) long long errorCode;

- (unsigned long long)type;
- (id)initWithDeviceIDs:(id)a0 errorCode:(long long)a1;

@end

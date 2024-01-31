@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) unsigned long long deviceIdentifier;

- (unsigned long long)type;
- (id)initWithErrorCode:(long long)a0 deviceIdentifier:(unsigned long long)a1;

@end

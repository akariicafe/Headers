@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;
}

@property (readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithDeviceDescriptor:(id)a0;

@end

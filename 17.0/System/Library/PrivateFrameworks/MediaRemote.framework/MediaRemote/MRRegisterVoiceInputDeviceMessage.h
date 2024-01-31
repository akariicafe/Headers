@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

@property (readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;

@end

@class _TtC27SiriVirtualDeviceResolution22VoiceTriggerCapability;

@interface SVDVoiceTriggerCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution22VoiceTriggerCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (long long)supportsVoiceTrigger;
- (void).cxx_destruct;
- (id)_swiftBacking;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;

@end

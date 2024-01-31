@class _TtC27SiriVirtualDeviceResolution26ProfileSwitchingCapability;

@interface SVDProfileSwitchingCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution26ProfileSwitchingCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_swiftBacking;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (long long)supportsProfileSwitching;

@end

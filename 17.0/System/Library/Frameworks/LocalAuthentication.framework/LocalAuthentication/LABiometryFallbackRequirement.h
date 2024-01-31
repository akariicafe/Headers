@class NSArray;

@interface LABiometryFallbackRequirement : NSObject <LAACLSerializable> {
    long long _authType;
    NSArray *_subrequirements;
}

@property (class, readonly) LABiometryFallbackRequirement *defaultRequirement;
@property (class, readonly) LABiometryFallbackRequirement *devicePasscodeRequirement;

+ (id)customPasswordRequirement:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithACLCoder:(id)a0;

@end

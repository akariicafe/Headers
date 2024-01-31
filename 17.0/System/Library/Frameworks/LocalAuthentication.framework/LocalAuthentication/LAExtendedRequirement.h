@class NSDictionary;

@interface LAExtendedRequirement : NSObject <LAACLSerializable> {
    NSDictionary *_constraint;
}

@property (class, readonly) LAExtendedRequirement *applicationRemainsForegroundRequirement;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithACLCoder:(id)a0;

@end

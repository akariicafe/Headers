@class NSString;

@interface NISpatialBrowsingConfiguration : NIConfiguration

@property long long updatesPolicy;
@property (getter=isResponder) BOOL responder;
@property (copy) NSString *deviceIdentifier;
@property double maxNearbyObjectAge;

+ (BOOL)supportsSecureCoding;
+ (id)responderConfigurationWithIdentifier:(id)a0;
+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

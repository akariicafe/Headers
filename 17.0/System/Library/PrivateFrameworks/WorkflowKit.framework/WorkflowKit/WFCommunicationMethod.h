@class NSString;

@interface WFCommunicationMethod : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *type;

+ (BOOL)supportsSecureCoding;

- (id)serializedRepresentation;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)callCapability;
- (long long)preferredCallProvider;
- (id)initWithBundleIdentifier:(id)a0 type:(id)a1;

@end

@class NSArray, PKExternalProvisioningPolicy;

@interface PKExternalProvisioningOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKExternalProvisioningPolicy *policy;
@property (retain, nonatomic) NSArray *devices;

+ (id)mockOptions;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToExternalProvisioningOptions:(id)a0;

@end

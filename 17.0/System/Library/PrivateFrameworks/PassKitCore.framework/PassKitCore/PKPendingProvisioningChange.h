@class PKPendingProvisioning;

@interface PKPendingProvisioningChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKPendingProvisioning *pendingProvisioning;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 pendingProvisioning:(id)a1;

@end

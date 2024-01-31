@class NSSet;

@interface CRKPerformIDSFirewallActionResultObject : CATTaskResultObject

@property (copy, nonatomic) NSSet *allowedAppleIDs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

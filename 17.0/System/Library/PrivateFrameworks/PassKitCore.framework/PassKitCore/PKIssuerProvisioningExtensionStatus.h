@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) BOOL passEntriesAvailable;
@property (nonatomic) BOOL remotePassEntriesAvailable;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

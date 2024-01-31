@class NSString, PKSecureElementProvisioningState, NSDate;

@interface PKPendingProvisioning : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) BOOL shouldAutoProvision;
@property (nonatomic) unsigned long long provisioningAttemptCounter;
@property (retain, nonatomic) PKSecureElementProvisioningState *provisioningState;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)type;
- (id)initWithCoder:(id)a0;
- (BOOL)representsPass:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 status:(long long)a1;
- (BOOL)representsCredential:(id)a0;

@end

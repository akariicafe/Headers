@class NSNumber, NSError, HKClinicalAccount;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL didSucceed;
@property (readonly, copy, nonatomic) HKClinicalAccount *account;
@property (copy, nonatomic) NSNumber *alternateCredentialPersistentID;
@property (readonly, nonatomic) BOOL wasRelogin;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)completionStateWithError:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccount:(id)a0 alternateCredentialPersistentID:(id)a1 wasRelogin:(BOOL)a2 error:(id)a3;

@end

@class NSString;

@interface FMDActivationLockAuthInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *pet;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL isFindMyON;
@property (nonatomic) BOOL isActivationLockEnabled;
@property (nonatomic) BOOL isSignedIntoICloud;
@property (nonatomic) BOOL isAccountHSA2;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *altDsid;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

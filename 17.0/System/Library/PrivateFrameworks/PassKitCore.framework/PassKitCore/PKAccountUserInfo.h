@class PKSavingsAccountUserInfo, CNContact;

@interface PKAccountUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CNContact *creditPrimaryUser;
@property (copy, nonatomic) PKSavingsAccountUserInfo *savingsUserInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

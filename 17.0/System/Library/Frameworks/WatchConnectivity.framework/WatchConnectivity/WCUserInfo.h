@class NSDictionary, NSData;

@interface WCUserInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *clientUserInfo;
@property (copy) NSData *userInfoData;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)updateUserInfo:(id)a0 error:(id *)a1;
- (BOOL)updateUserInfoData:(id)a0 error:(id *)a1;
- (BOOL)verifyUserInfo;

@end

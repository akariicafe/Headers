@class TUPhoneNumber, NSString;

@interface TUPrivacyRule : NSObject <NSCoding>

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) TUPhoneNumber *phoneNumber;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *businessID;

+ (id)ruleForBusinessID:(id)a0;
+ (id)ruleForEmail:(id)a0;
+ (id)ruleForPhoneNumber:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForBusinessID:(id)a0;
- (id)initForEmail:(id)a0;
- (id)initForPhoneNumber:(id)a0;

@end

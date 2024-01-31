@class NSDictionary, FAFamilyMember, ACAccount, NSError;

@interface PASFlowResult : NSObject

@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) ACAccount *personalAccount;
@property (nonatomic, readonly) NSDictionary *authResults;
@property (nonatomic, readonly) NSError *error;

- (id)init;

@end

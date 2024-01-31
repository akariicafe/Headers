@class NSArray;

@interface IDSSignInServiceUserStatus : NSObject

@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, nonatomic) NSArray *serviceUserInfos;
@property (readonly, nonatomic) unsigned long long phoneUserStatus;
@property (readonly, nonatomic) unsigned long long appleIDUserStatus;

- (id)description;
- (void).cxx_destruct;
- (id)initWithServiceType:(unsigned long long)a0 userInfos:(id)a1;

@end

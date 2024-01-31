@class NSUUID;

@interface SFAuthenticateAccountHomeUserInfo : NSObject

@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier;
@property (readonly, nonatomic) NSUUID *userUniqueIdentifier;
@property (readonly, nonatomic) BOOL isRMVEnabled;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0 userUUID:(id)a1 isRMVEnabled:(BOOL)a2;

@end

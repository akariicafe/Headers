@class HMUser, NSString, NSArray, NSUUID, CLLocation;

@interface GDHMHomeMock : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *users;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSUUID *uniqueIdentifier;
@property (copy, nonatomic) HMUser *currentUser;

- (void).cxx_destruct;
- (id)homeAccessControlForUser:(id)a0;
- (id)asHMHome;

@end

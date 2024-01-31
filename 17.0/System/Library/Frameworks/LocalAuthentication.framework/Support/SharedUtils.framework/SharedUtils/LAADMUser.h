@class NSString;

@interface LAADMUser : NSObject

@property (readonly, nonatomic) BOOL isAdministrator;
@property (readonly, nonatomic) BOOL isDirectAdministrator;
@property (readonly, nonatomic) BOOL isGuestUser;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) long long userID;

+ (id)currentUser;
+ (id)allLocalUsers;
+ (id)findUserByID:(unsigned long long)a0 searchParent:(BOOL)a1;
+ (id)findUserByName:(id)a0 searchParent:(BOOL)a1;
+ (BOOL)isUserNameUnique:(id)a0 searchParent:(BOOL)a1;
+ (id)namesFromUsersWithUIDs:(id)a0;
+ (id)namesFromUsersWithUIDs:(id)a0 presentInGroupWithName:(id)a1;
+ (id)rootUser;
+ (BOOL)shouldDisplayUser:(id)a0;

- (void).cxx_destruct;
- (BOOL)isMemberOfGroupWithName:(id)a0;

@end

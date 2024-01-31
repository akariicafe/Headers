@class NSString, NSUUID;

@interface GDHMUserMock : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *uniqueIdentifier;
@property (copy, nonatomic) NSString *userID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asHMUser;

@end

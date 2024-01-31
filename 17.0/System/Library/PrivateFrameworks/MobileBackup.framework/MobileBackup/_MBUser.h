@interface _MBUser : NSObject

@property (class, readonly, nonatomic) _MBUser *currentUser;

@property (nonatomic) BOOL isPrimaryUser;

- (id)initWithUser:(id)a0;
- (id)description;

@end

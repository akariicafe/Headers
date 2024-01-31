@class MCMUserIdentity, MCMManagedPath;

@interface MCMManagedUserPathRegistry : MCMManagedPathRegistry

@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) MCMManagedPath *userHome;
@property (readonly, nonatomic) MCMManagedPath *userLibrary;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserLibrary;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserPendingUpdates;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserReplaceOperations;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserDeleteOperations;

- (id)initWithUserIdentity:(id)a0 daemonUser:(id)a1;
- (void)_initPathPropertiesWithUserIdentity:(id)a0;
- (void).cxx_destruct;

@end

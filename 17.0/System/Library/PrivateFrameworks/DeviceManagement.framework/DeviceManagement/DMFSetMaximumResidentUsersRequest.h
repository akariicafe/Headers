@interface DMFSetMaximumResidentUsersRequest : DMFTaskRequest

@property (nonatomic) unsigned long long count;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

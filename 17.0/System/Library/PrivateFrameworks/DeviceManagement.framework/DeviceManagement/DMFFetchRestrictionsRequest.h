@interface DMFFetchRestrictionsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeProfileRestrictions;
@property (nonatomic) unsigned long long profileFilterFlags;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

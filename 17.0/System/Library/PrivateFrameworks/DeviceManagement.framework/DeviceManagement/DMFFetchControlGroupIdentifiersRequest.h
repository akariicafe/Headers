@class NSString;

@interface DMFFetchControlGroupIdentifiersRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *leaderIdentifier;
@property (nonatomic) BOOL includeTemporary;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

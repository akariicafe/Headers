@class NSArray;

@interface CRKFetchApplicationsRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *bundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

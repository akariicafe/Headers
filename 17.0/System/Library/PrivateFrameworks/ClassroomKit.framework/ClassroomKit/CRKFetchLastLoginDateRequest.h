@class NSSet;

@interface CRKFetchLastLoginDateRequest : CATTaskRequest

@property (copy, nonatomic) NSSet *appleIDs;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

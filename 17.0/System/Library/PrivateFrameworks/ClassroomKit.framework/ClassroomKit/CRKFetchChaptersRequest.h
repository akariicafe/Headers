@class NSString;

@interface CRKFetchChaptersRequest : CATTaskRequest

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *identifierType;
@property (copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

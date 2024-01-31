@interface CRKFetchScreenshotRequest : CATTaskRequest

@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic) unsigned long long maxHeight;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

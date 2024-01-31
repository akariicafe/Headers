@class NSString;

@interface DMFFetchScreenshotRequest : DMFTaskRequest

@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic) unsigned long long maxHeight;
@property (nonatomic) BOOL usesPixels;
@property (copy, nonatomic) NSString *sessionToken;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

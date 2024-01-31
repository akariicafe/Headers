@class NSString, NSNumber, NSURL;

@interface DMFAppRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSURL *manifestURL;
@property (copy, nonatomic) NSString *personaIdentifier;
@property (copy, nonatomic) NSString *sourceIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

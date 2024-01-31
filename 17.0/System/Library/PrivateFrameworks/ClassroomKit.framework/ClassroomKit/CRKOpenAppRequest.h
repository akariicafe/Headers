@class NSString, NSData;

@interface CRKOpenAppRequest : CATTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSData *activityData;
@property (nonatomic) BOOL lockInApp;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

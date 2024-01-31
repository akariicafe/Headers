@class NSString;

@interface DMFLockDeviceRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *pin;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

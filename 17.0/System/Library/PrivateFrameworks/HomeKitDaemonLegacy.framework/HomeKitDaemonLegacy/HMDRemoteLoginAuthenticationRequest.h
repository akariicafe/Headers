@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage

@property (nonatomic) unsigned long long targetedAccountType;

+ (BOOL)supportsSecureCoding;
+ (id)messageName;
+ (id)objWithMessage:(id)a0;
+ (id)objWithDict:(id)a0;
+ (id)xpcMessageName;

- (void)encodeWithCoder:(id)a0;
- (id)messageName;
- (id)description;
- (id)messagePayload;
- (id)initWithCoder:(id)a0;
- (id)xpcMessageName;

@end

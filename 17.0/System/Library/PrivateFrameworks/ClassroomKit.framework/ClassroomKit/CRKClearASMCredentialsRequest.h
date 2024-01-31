@interface CRKClearASMCredentialsRequest : CATTaskRequest

@property (nonatomic) long long role;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

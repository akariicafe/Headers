@interface CRKIdentityServiceMockingRequest : CATTaskRequest

@property (nonatomic) BOOL shouldDisable;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

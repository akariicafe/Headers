@interface CRKRemoteConnectionResultObject : CATTaskResultObject

@property (nonatomic) long long response;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

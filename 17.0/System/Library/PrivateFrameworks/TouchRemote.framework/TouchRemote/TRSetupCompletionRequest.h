@interface TRSetupCompletionRequest : TRRequestMessage

@property (nonatomic) BOOL completedSuccessfully;
@property (nonatomic) long long errorCode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

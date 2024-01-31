@class NSError;

@interface MNNavigationServiceCallback_DidReceiveRoutingServiceError : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end

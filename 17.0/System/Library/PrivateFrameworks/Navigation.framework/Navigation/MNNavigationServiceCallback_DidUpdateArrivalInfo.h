@class MNArrivalInfo;

@interface MNNavigationServiceCallback_DidUpdateArrivalInfo : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNArrivalInfo *arrivalInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end

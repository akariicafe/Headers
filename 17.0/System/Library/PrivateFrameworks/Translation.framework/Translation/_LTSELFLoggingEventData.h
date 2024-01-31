@class NSUUID, NSString, _LTSELFLoggingInvocationOptions, NSError, _LTLocalePair;

@interface _LTSELFLoggingEventData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *invocationId;
@property (retain, nonatomic) _LTSELFLoggingInvocationOptions *startInvocationOptions;
@property (copy, nonatomic) NSUUID *qssSessionId;
@property (copy, nonatomic) NSError *invocationEndedError;
@property (copy, nonatomic) NSString *invocationCancelledReason;
@property (copy, nonatomic) NSString *translationPayload;
@property (copy, nonatomic) _LTLocalePair *translationLocalePair;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 invocationId:(id)a1;

@end

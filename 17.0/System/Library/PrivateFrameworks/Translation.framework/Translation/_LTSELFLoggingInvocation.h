@class NSUUID;

@interface _LTSELFLoggingInvocation : NSObject

@property (nonatomic) BOOL endSent;
@property (readonly, nonatomic) NSUUID *invocationId;

+ (void)userEndedTypingWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2 reason:(long long)a3;

- (void).cxx_destruct;
- (void)appBackgroundedWithPayload:(id)a0 localePair:(id)a1;
- (void)cancelWithReason:(id)a0 qssSessionId:(id)a1;
- (void)endSuccessfullyWithQSSSessionId:(id)a0;
- (void)endWithError:(id)a0 qssSessionId:(id)a1;
- (id)initWithInvocationId:(id)a0;
- (void)sendEventWithPayload:(id)a0 localePair:(id)a1 type:(long long)a2;
- (void)sendUserEndedTypingEventWithPayload:(id)a0 localePair:(id)a1 type:(long long)a2;
- (void)userEndedTypingWithPayload:(id)a0 localePair:(id)a1 reason:(long long)a2;

@end

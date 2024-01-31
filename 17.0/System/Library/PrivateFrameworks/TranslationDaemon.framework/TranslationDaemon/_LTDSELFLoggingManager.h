@class _LTDSELFLoggingSessionIdProvider;

@interface _LTDSELFLoggingManager : NSObject

@property (readonly, retain, nonatomic) _LTDSELFLoggingSessionIdProvider *sessionIdProvider;

+ (void)initialize;

- (id)init;
- (void)selfLoggingEventWithData:(id)a0;
- (void).cxx_destruct;
- (void)invocationAppBackgroundedWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2;
- (void)invocationCancelWithInvocationId:(id)a0 reason:(id)a1 qssSessionId:(id)a2;
- (void)invocationEndSuccessfullyWithInvocationId:(id)a0 qssSessionId:(id)a1;
- (void)invocationEndWithInvocationId:(id)a0 error:(id)a1 qssSessionId:(id)a2;
- (void)invocationStartWithInvocationId:(id)a0 task:(long long)a1 inputMode:(long long)a2 invocationType:(long long)a3 translateAppContext:(id)a4;
- (void)invocationUserEndedTypingEndedReasonTimeoutWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2;
- (void)invocationUserEndedTypingReasonNextButtonPressedWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2;
- (void)invocationUserEndedTypingReasonTextBoxDismissedWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2;
- (id)sendFrameworkRequestWithInvocationId:(id)a0 qssSessionId:(id)a1 requestType:(long long)a2 requestRoute:(long long)a3 requestSize:(unsigned long long)a4;

@end

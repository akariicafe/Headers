@class NSString;

@interface _LTDSELFLoggingProduction : NSObject <_LTDSELFLoggingEndpoint>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_sendEventWithContext:(id)a0 mtId:(id)a1 sessionId:(id)a2;
+ (void)appBackgroundedWithPayload:(id)a0 localePair:(id)a1 mtId:(id)a2 sessionId:(id)a3;
+ (void)cancelWithExists:(BOOL)a0 reason:(id)a1 qssSessionId:(id)a2 mtId:(id)a3 sessionId:(id)a4;
+ (void)endSuccessfullyWithExists:(BOOL)a0 qssSessionId:(id)a1 mtId:(id)a2 sessionId:(id)a3;
+ (void)endWithError:(id)a0 qssSessionId:(id)a1 mtId:(id)a2 sessionId:(id)a3;
+ (void)frameworkRequestResponseReceivedWithFrameworkRequestId:(id)a0 requestRoute:(long long)a1 mtId:(id)a2 sessionId:(id)a3;
+ (void)frameworkRequestSentWithFrameworkRequestId:(id)a0 qssSessionId:(id)a1 requestType:(long long)a2 requestRoute:(long long)a3 requestSize:(unsigned long long)a4 mtId:(id)a5 sessionId:(id)a6;
+ (void)startWithTask:(long long)a0 inputMode:(long long)a1 invocationType:(long long)a2 interfaceMode:(long long)a3 explicitLanguageFilterEnabled:(BOOL)a4 languageIdentificationEnabled:(BOOL)a5 onDevice:(BOOL)a6 mtId:(id)a7 sessionId:(id)a8 translateAppContext:(id)a9;
+ (void)userDismissedTextBoxWithPayload:(id)a0 localePair:(id)a1 mtId:(id)a2 sessionId:(id)a3;
+ (void)userPressedNextButtonWithPayload:(id)a0 localePair:(id)a1 mtId:(id)a2 sessionId:(id)a3;
+ (void)userTimeoutWithPayload:(id)a0 localePair:(id)a1 mtId:(id)a2 sessionId:(id)a3;


@end

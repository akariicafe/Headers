@class SNSpeechPacketInternal, NSArray, NSString;

@interface SNSpeechPacket : NSObject <SNSessionObject>

@property (retain, nonatomic) SNSpeechPacketInternal *underlyingSpeechPacket;
@property (retain, nonatomic) NSArray *packets;
@property (nonatomic) long long packetNumber;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestId;
- (id)init;
- (void)logDiagnostics;
- (BOOL)isProvisional;
- (void).cxx_destruct;
- (BOOL)isRestartable;
- (BOOL)supportedByRemoteLimitedSession;
- (BOOL)bufferingAllowedDuringActiveSession;
- (BOOL)isRetryable;
- (id)serializedAceDataError:(id *)a0;
- (void)setSessionRequestId:(id)a0;
- (BOOL)supportedByLocalSession;

@end

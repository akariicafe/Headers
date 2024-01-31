@class NSString, NSArray;

@interface SNSpeechPacketInternal : NSObject {
    void /* unknown type, empty encoding */ internalAceId;
    void /* unknown type, empty encoding */ internalRefId;
    void /* unknown type, empty encoding */ packets;
}

@property (nonatomic, copy) NSString *internalAceId;
@property (nonatomic, copy) NSString *internalRefId;
@property (nonatomic, copy) NSArray *packets;
@property (nonatomic) void /* unknown type, empty encoding */ packetNumber;

- (id)requestId;
- (id)init;
- (void)logDiagnostics;
- (BOOL)isProvisional;
- (void).cxx_destruct;
- (BOOL)isRestartable;
- (BOOL)supportedByRemoteLimitedSession;
- (BOOL)bufferingAllowedDuringActiveSession;
- (BOOL)isRetryable;
- (id)serializedAceDataAndReturnError:(id *)a0;
- (void)setSessionRequestId:(id)a0;
- (BOOL)supportedByLocalSession;

@end

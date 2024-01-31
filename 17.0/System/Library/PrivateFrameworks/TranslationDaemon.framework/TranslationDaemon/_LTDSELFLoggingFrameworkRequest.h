@class NSArray, NSString, SISchemaUUID, _LTDSELFLoggingSessionIdProvider;

@interface _LTDSELFLoggingFrameworkRequest : NSObject <_LTDSELFLoggingFrameworkRequestProtocol>

@property (retain, nonatomic) SISchemaUUID *mtId;
@property (retain, nonatomic) NSArray *endpoints;
@property (retain, nonatomic) _LTDSELFLoggingSessionIdProvider *sessionIdProvider;
@property (retain, nonatomic) SISchemaUUID *frameworkRequestId;
@property (nonatomic) long long requestRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)responseReceived;
- (id)initWithInvocationId:(id)a0 endpoints:(id)a1 sessionIdProvider:(id)a2 qssSessionId:(id)a3 requestType:(long long)a4 requestRoute:(long long)a5 requestSize:(unsigned long long)a6;

@end

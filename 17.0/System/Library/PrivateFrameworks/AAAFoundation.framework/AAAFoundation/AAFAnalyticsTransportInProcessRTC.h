@class NSNumber, NSString, NSDictionary;

@interface AAFAnalyticsTransportInProcessRTC : NSObject <AAFAnalyticsTransport>

@property (readonly, copy, nonatomic) NSNumber *clientType;
@property (readonly, copy, nonatomic) NSString *clientBundleId;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, copy, nonatomic) NSDictionary *sessionInfo;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)analyticsTransportRTCWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;

- (oneway void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)_sendOneMessageWithSessionInfo:(id)a0 userInfo:(id)a1 category:(id)a2 payload:(id)a3 error:(id *)a4;
- (id)_createPayloadWith:(id)a0;
- (id)initWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;

@end

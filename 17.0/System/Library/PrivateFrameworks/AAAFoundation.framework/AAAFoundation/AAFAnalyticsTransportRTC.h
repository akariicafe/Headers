@class NSNumber, NSString, AAFXPCSession;

@interface AAFAnalyticsTransportRTC : NSObject <AAFXPCSessionDelegate, AAFAnalyticsTransport>

@property (readonly, copy, nonatomic) NSNumber *clientType;
@property (readonly, copy, nonatomic) NSString *clientBundleId;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)analyticsTransportRTCWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;

- (void)dealloc;
- (oneway void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;

@end

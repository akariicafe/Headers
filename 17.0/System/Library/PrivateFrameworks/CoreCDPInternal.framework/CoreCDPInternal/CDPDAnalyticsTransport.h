@class NSNumber, NSString, AAFAnalyticsTransportInProcessRTC;

@interface CDPDAnalyticsTransport : NSObject <AAFAnalyticsTransport>

@property (copy, nonatomic) NSNumber *clientType;
@property (copy, nonatomic) NSString *clientBundleId;
@property (copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) AAFAnalyticsTransportInProcessRTC *transport;
@property (nonatomic) BOOL shouldSendAnalyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTransport;
+ (void)flushCaches;
+ (id)getAllowedCfuType;
+ (id)getAllowedErrorDomain;
+ (id)getAllowedEscapeOffer;
+ (id)getAllowedEvents;
+ (id)getAllowedLocalSecretType;
+ (id)getAllowedStringsForTelemetry;
+ (id)transportForClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;
+ (id)transportForEvent:(id)a0;

- (oneway void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;
- (void)enforcePrivacyComplianceOnEvent:(id)a0 key:(id)a1 value:(id)a2;
- (BOOL)shouldEnforcePrivacyComplianceForEvent:(id)a0;

@end

@class NSNumber, NSString, NSDictionary;

@interface IDSQuickRelayMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSNumber *type;
@property (readonly, nonatomic) NSNumber *subType;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *resultCode;
@property (readonly, nonatomic) NSNumber *providerType;
@property (readonly, nonatomic) NSNumber *transportType;
@property (readonly, nonatomic) NSNumber *interfaceType;
@property (readonly, nonatomic) NSNumber *skeEnabled;
@property (readonly, nonatomic) NSNumber *isInitiator;
@property (readonly, nonatomic) NSNumber *protocolVersion;
@property (readonly, nonatomic) NSNumber *retryCount;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *subServiceName;
@property (readonly, nonatomic) NSNumber *participantCount;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 eventSubType:(id)a1 duration:(id)a2 resultCode:(id)a3 providerType:(id)a4 transportType:(id)a5 interfaceType:(id)a6 skeEnabled:(id)a7 isInitiator:(id)a8 protocolVersion:(id)a9 retryCount:(id)a10 serviceName:(id)a11 subServiceName:(id)a12 participantCount:(id)a13;

@end

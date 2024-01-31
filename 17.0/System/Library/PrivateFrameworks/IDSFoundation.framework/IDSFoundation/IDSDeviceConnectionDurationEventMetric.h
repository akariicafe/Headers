@class NSString, NSNumber, NSDictionary;

@interface IDSDeviceConnectionDurationEventMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL wasSuccessful;
@property (readonly, nonatomic) NSNumber *clientInitTime;
@property (readonly, nonatomic) NSNumber *clientOpenSocketCompletionTime;
@property (readonly, nonatomic) NSNumber *daemonOpenSocketTime;
@property (readonly, nonatomic) NSNumber *daemonOpenSocketCompletionTime;
@property (readonly, nonatomic) NSNumber *firstPacketReceiveTime;
@property (readonly, nonatomic) NSNumber *connectionInitTime;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 wasSuccessful:(BOOL)a1 clientInitTime:(id)a2 clientOpenSocketCompletionTime:(id)a3 daemonOpenSocketTime:(id)a4 daemonOpenSocketCompletionTime:(id)a5 firstPacketReceiveTime:(id)a6 connectionInitTime:(id)a7;

@end

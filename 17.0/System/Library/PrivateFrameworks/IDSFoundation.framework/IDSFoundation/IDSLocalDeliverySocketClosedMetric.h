@class NSString, NSDictionary;

@interface IDSLocalDeliverySocketClosedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) BOOL isToDefaultPairedDevice;
@property (readonly, nonatomic) unsigned long long closeError;
@property (readonly, nonatomic) unsigned long long socketError;
@property (readonly, nonatomic) unsigned long long bytesSent;
@property (readonly, nonatomic) unsigned long long packetsSent;
@property (readonly, nonatomic) unsigned long long bytesReceived;
@property (readonly, nonatomic) unsigned long long packetsReceived;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 isToDefaultPairedDevice:(BOOL)a1 closeError:(unsigned long long)a2 socketError:(unsigned long long)a3 bytesSent:(unsigned long long)a4 packetsSent:(unsigned long long)a5 bytesReceived:(unsigned long long)a6 packetsReceived:(unsigned long long)a7;

@end

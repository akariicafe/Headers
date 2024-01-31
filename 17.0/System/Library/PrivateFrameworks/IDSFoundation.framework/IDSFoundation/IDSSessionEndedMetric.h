@class NSString, NSNumber, NSDictionary;

@interface IDSSessionEndedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) unsigned int endedReason;
@property (readonly, nonatomic) unsigned int genericError;
@property (readonly, nonatomic) unsigned int gameKitError;
@property (readonly, nonatomic) unsigned int conferenceMiscError;
@property (readonly, nonatomic) NSNumber *callDuration;
@property (readonly, nonatomic) unsigned int networkCheckResult;
@property (readonly, nonatomic) NSNumber *dataRate;
@property (readonly, nonatomic) NSNumber *gksError;
@property (readonly, nonatomic) NSNumber *connectDuration;
@property (readonly, nonatomic) unsigned int remoteNetworkConnection;
@property (readonly, nonatomic) unsigned int localNetworkConnection;
@property (readonly, nonatomic) unsigned int connectionType;
@property (readonly, nonatomic) BOOL usesRelay;
@property (readonly, nonatomic) NSNumber *currentNATType;
@property (readonly, nonatomic) NSNumber *remoteNATType;
@property (readonly, nonatomic) NSNumber *relayConnectDuration;
@property (readonly, nonatomic) BOOL isInitiator;
@property (readonly, nonatomic) NSNumber *linkQuality;
@property (readonly, nonatomic) NSNumber *gksReturnCode;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 endedReason:(unsigned int)a1 genericError:(unsigned int)a2 gameKitError:(unsigned int)a3 conferenceMiscError:(unsigned int)a4 callDuration:(id)a5 networkCheckResult:(unsigned int)a6 dataRate:(id)a7 gksError:(id)a8 connectDuration:(id)a9 remoteNetworkConnection:(unsigned int)a10 localNetworkConnection:(unsigned int)a11 connectionType:(unsigned int)a12 usesRelay:(BOOL)a13 currentNATType:(id)a14 remoteNATType:(id)a15 relayConnectDuration:(id)a16 isInitiator:(BOOL)a17 linkQuality:(id)a18 gksReturnCode:(id)a19;

@end

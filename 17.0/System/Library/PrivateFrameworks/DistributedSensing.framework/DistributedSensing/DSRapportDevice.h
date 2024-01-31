@class NSMutableArray, NSString, RPCompanionLinkDevice, NSObject, RPCompanionLinkClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DSRapportDevice : NSObject {
    RPCompanionLinkClient *_sessionClient;
    RPCompanionLinkClient *_screenOffDiscoveryClient;
    BOOL _isTryingForceDiscovery;
    BOOL _isSessionInForceL2CAP;
    NSObject<OS_dispatch_source> *_discoveryExitTimer;
    NSObject<OS_dispatch_source> *_responseTimeoutTimer;
    NSMutableArray *_pendingRequests;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int deviceType;
@property (retain, nonatomic) RPCompanionLinkDevice *rpDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)invalidate;
- (void).cxx_destruct;
- (void)sendNextRequest;
- (void)_activateSessionClientWithForceL2CAP:(BOOL)a0;
- (void)_forceBLEDiscoverytoSendRequestID;
- (void)_startDiscoveryExitTimer;
- (void)_startResponseTimeoutTimer;
- (void)activateSessionClient;
- (void)addRequestToQueue:(id)a0;
- (id)initWithRapportDevice:(id)a0 queue:(id)a1;

@end

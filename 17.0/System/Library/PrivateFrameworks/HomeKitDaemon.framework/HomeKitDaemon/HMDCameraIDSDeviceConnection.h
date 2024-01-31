@class NSObject, NSString, HMFTimer, HMDCameraStreamSessionID, IDSDeviceConnection;
@protocol OS_dispatch_queue, HMDIDSService, OS_dispatch_source;

@interface HMDCameraIDSDeviceConnection : HMFObject <HMFTimerDelegate, HMDIDSServiceDelegate, HMFLogging, HMDCameraRemoteStreamProtocol> {
    unsigned char _keepAliveCounter;
    NSObject<OS_dispatch_queue> *_highPriorityQueue;
    NSObject<OS_dispatch_source> *_keepAliveSocketReceiveSource;
    HMFTimer *_keepAliveByteSendTimer;
    HMFTimer *_keepAliveByteReceiveTimeoutTimer;
}

@property (copy) id /* block */ idsDeviceConnectionFactory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) id<HMDIDSService> idsProxyStreamService;
@property (retain) IDSDeviceConnection *watchVideoConnection;
@property (retain) IDSDeviceConnection *watchAudioConnection;
@property (retain) IDSDeviceConnection *keepAliveConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)startKeepAlive;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_createStreamSocketWithDevice:(id)a0;
- (void)_socketOpenedWithError:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 idsProxyStreamService:(id)a2;

@end

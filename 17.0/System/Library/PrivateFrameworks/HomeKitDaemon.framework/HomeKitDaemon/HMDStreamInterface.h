@class NSObject, NSString, HMDCameraStreamSessionID;
@protocol OS_dispatch_queue, HMDCameraRemoteStreamProtocol;

@interface HMDStreamInterface : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) id<HMDCameraRemoteStreamProtocol> sessionHandler;
@property (nonatomic) int localRTPSocket;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)loadMiscFields:(id)a0;
- (id)extractNetworkConfig:(int)a0 peerNameExtractor:(void /* function */ *)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegateQueue:(id)a2 sessionHandler:(id)a3;
- (int)openSocketWithNetworkConfig:(id)a0;
- (void)setStreamInterfaceState:(unsigned long long)a0;

@end

@class NSDate, NSString, CMContinuityCaptureConfiguration, CMContinuityCaptureTransportRapportDevice, NSMutableDictionary, NSObject, CMContinuityCaptureTimeSyncClock, RPRemoteDisplaySession, CMContinuityCaptureRemoteCompositeDevice;
@protocol ContinuityCaptureTransportDevice, OS_voucher, ContinuityCaptureTaskDelegate, OS_dispatch_queue;

@interface CMContinuityCaptureRapportServer : CMContinuityCaptureRapportTransportBase <ContinuityCaptureDeviceServer> {
    unsigned long long _currentSessionID;
    id<ContinuityCaptureTaskDelegate> _delegate;
    RPRemoteDisplaySession *_rpDisplaySession;
    CMContinuityCaptureRemoteCompositeDevice *_compositeDevice;
    CMContinuityCaptureTransportRapportDevice *_device;
    NSObject<OS_dispatch_queue> *_queue;
    CMContinuityCaptureTimeSyncClock *_timeSyncClock;
    NSMutableDictionary *_pendingActivateStreamsByIdentifier;
    long long _clientDeviceModel;
    NSString *_peerAddress;
    long long _currentTransport;
    NSDate *_sessionActivationStartTime;
    NSObject<OS_voucher> *_voucher;
}

@property (readonly, retain) CMContinuityCaptureRemoteCompositeDevice *compositeDevice;
@property (readonly) RPRemoteDisplaySession *displaySession;
@property (readonly) CMContinuityCaptureConfiguration *preStartConfiguration;
@property unsigned long long currentSessionID;
@property (readonly, retain) NSDate *sessionActivationStartTime;
@property (readonly) long long clientDeviceModel;
@property (readonly, retain) CMContinuityCaptureTimeSyncClock *timeSyncClock;
@property (readonly) long long currentTransport;
@property (readonly, retain) id<ContinuityCaptureTransportDevice> localDevice;
@property (weak) id<ContinuityCaptureTaskDelegate> delegate;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rapportDeviceForSession:(id)a0;

- (void)activate;
- (void).cxx_destruct;
- (void)cancel;
- (void)createStreamWithIdentifier:(id)a0 isMediaStream:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithRapportDisplaySession:(id)a0 queue:(id)a1 voucher:(id)a2 incomingStreamRequestHandler:(id /* block */)a3;
- (void)invalidateCurrentSession:(id /* block */)a0;
- (void)parseAndNotifySessionStartInfo:(id)a0 transportInfo:(id)a1;
- (void)relayTerminationComplete;
- (void)resetDisplaySession:(id)a0;
- (void)setupRemoteDisplaySession:(id)a0;

@end

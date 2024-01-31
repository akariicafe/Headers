@class HMDVideoStreamReconfigure, NSObject, HMFOSTransaction, NSString, NSNumber, AVCVideoStream;
@protocol HMDVideoStreamInterfaceDelegate, OS_dispatch_queue, HMDVideoStreamLastDecodedFrameDelegate;

@interface HMDVideoStreamInterface : HMDStreamInterface <AVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate>

@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (nonatomic) double rtcpSendIntervalSec;
@property (readonly, nonatomic) NSNumber *syncSource;
@property (readonly, nonatomic) NSNumber *streamToken;
@property (readonly, nonatomic) HMDVideoStreamReconfigure *videoStreamReconfigure;
@property (retain, nonatomic) AVCVideoStream *videoStream;
@property (readonly, weak) id<HMDVideoStreamInterfaceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lastFrameDelegateQueue;
@property (weak) id<HMDVideoStreamLastDecodedFrameDelegate> lastFrameDelegate;
@property (retain, nonatomic) HMFOSTransaction *snapshotDataTrasaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)captureSnapshot;
- (void)streamDidStop:(id)a0;
- (void)stopStream;
- (void)setRtcpSendInterval:(double)a0;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)stream:(id)a0 didGetLastDecodedFrame:(id)a1;
- (void)stream:(id)a0 didUpdateVideoConfiguration:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 downlinkQualityDidChange:(id)a1;
- (void)_callDidGetLastDecodedFrame:(id)a0;
- (void)_callDidUpdateConfiguration;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callStarted:(id)a0;
- (void)_callStopped:(id)a0;
- (BOOL)_createLocalSocketWithNetworkConfig:(id)a0;
- (BOOL)_initializeLocalStreamWithLocalNetworkConfig:(id)a0;
- (BOOL)_initializeStreamRemoteDestinationReceiver:(id)a0;
- (BOOL)_initializeStreamRemoteSender:(id)a0 localNetworkConfig:(id)a1;
- (BOOL)_initializeStreamRemoteSocketReceiver:(id)a0;
- (void)_startStreamWithConfig:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 sessionHandler:(id)a4 localNetworkConfig:(id)a5;
- (void)setSnapshotDelegate:(id)a0 delegateQueue:(id)a1;
- (void)startStreamWithConfig:(id)a0;
- (void)updateReconfigurationMode:(BOOL)a0;
- (void)updateStreamConfiguration:(id)a0;
- (void)videoStreamReconfigureDidNetworkDeteriorate:(id)a0;
- (void)videoStreamReconfigureDidNetworkImprove:(id)a0;

@end

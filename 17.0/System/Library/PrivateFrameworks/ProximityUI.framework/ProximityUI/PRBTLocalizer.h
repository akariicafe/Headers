@class PRBTRangingSession, NSUUID, PRRemoteDevice, NSTimer, PRBTCoreAnalytics, NSString, NSObject, PRBTProximityMeasurement, NSNumber;
@protocol OS_dispatch_queue, OS_os_log, PRBTLocalizerDelegate;

@interface PRBTLocalizer : NSObject <PRBTRangingSessionDelegate> {
    struct unique_ptr<BTFinding::PRRSSIFilter, std::default_delete<BTFinding::PRRSSIFilter>> { struct __compressed_pair<BTFinding::PRRSSIFilter *, std::default_delete<BTFinding::PRRSSIFilter>> { struct PRRSSIFilter *__value_; } __ptr_; } _rssiFilter;
    NSObject<OS_os_log> *_logger;
    int _clientState;
    unsigned long long _localizerState;
    BOOL _didFetchTxPower;
    BOOL _isUT;
    BOOL _shouldLogAnalytics;
    double _lastMeasurementTime;
}

@property (retain, nonatomic) PRBTRangingSession *session;
@property (retain, nonatomic) PRRemoteDevice *remoteDevice;
@property (retain, nonatomic) NSUUID *productUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *proximityQueue;
@property (retain, nonatomic) NSTimer *measurementTimer;
@property (retain, nonatomic) NSTimer *utRetryTimer;
@property (retain, nonatomic) NSTimer *btTrendTimer;
@property (retain, nonatomic) PRBTProximityMeasurement *latestProximityMeasurement;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *estimatorQueue;
@property (retain, nonatomic) NSNumber *txPower;
@property (retain, nonatomic) PRBTCoreAnalytics *analytics;
@property (weak, nonatomic) id<PRBTLocalizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInternalBuild;

- (BOOL)configure;
- (BOOL)stop:(id *)a0;
- (void)dealloc;
- (BOOL)start:(id *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didFailWithError:(id)a0;
- (void)didConnectDevice:(id)a0 error:(id)a1;
- (void)didFetchTxPower:(id)a0 fromDevice:(id)a1 withError:(id)a2;
- (void)didReceiveNewBTRSSI:(id)a0;
- (void)didStartRangingOnDevice:(id)a0 withError:(id)a1;
- (void)didStopOwnerRangingOnDevice:(id)a0 withError:(id)a1;
- (void)notifyDelegateOfRawMeasurement:(id)a0;
- (void)checkForMeasurementTimeout;
- (id)initWithDelegate:(id)a0 queue:(id)a1 id:(id)a2 isUT:(BOOL)a3 productUUID:(id)a4;
- (id)initWithDelegate:(id)a0 queue:(id)a1 id:(id)a2 isUT:(BOOL)a3 productUUID:(id)a4 withAnalytics:(BOOL)a5;
- (void)logEstimatorOutput:(struct RSSIFilterResult { double x0; double x1; int x2; double x3; })a0;
- (void)notifyDelegateOfFilterOutput:(struct RSSIFilterResult { double x0; double x1; int x2; double x3; })a0;
- (void)processRssiMeasurement:(id)a0;
- (void)resetBtTrend;
- (void)sendBTLocalizerChangedState:(unsigned long long)a0;
- (void)updateDelegateWithSelector:(SEL)a0 object:(id)a1;

@end

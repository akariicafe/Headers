@class NSObject, AVFoundationUnitTestSession, NSMutableArray, AWUnitTestFaceDetectOperation;
@protocol OS_dispatch_queue, BKDevicePearlDelegate;

@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler> {
    struct { unsigned long long sampleCount; unsigned long long pollCount; unsigned long long singleShotCount; } _sampleStats;
    NSObject<OS_dispatch_queue> *_awQueue;
    AWUnitTestFaceDetectOperation *_lastOperation;
    NSMutableArray *_displayCallbacks;
    NSMutableArray *_smarCoverCallbacks;
    NSMutableArray *_carplayCallbacks;
    AVFoundationUnitTestSession *_AVFoundationSession;
}

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *sampleStatsPtr;
@property BOOL facePresent;
@property BOOL pearlError;

+ (id)sharedDevice;
+ (id)sharedAVFoundationSession;

- (void)setSmartCoverClosed:(BOOL)a0;
- (id)init;
- (void)setDisplayState:(BOOL)a0;
- (void).cxx_destruct;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (void)setCarplayStateChangedCallback:(id /* block */)a0;
- (id)AVFoundationSession;
- (void)setSampleState:(BOOL)a0;
- (void)deliverPearlDeviceEvent:(long long)a0;
- (void)deliverPearlDeviceState:(long long)a0;
- (void)getStatsWithBlock:(id /* block */)a0;
- (void)resetStats;
- (void)setCarPlayConnected:(BOOL)a0;
- (void)setCarPlayConnected:(BOOL)a0 reply:(id /* block */)a1;
- (void)setDisplayCallback:(id /* block */)a0;
- (void)setDisplayState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setPearlErrorState:(BOOL)a0;
- (void)setPearlErrorState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSampleState:(BOOL)a0 deliverEvent:(BOOL)a1;
- (void)setSampleState:(BOOL)a0 deliverEvent:(BOOL)a1 reply:(id /* block */)a2;
- (void)setSampleState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSmartCoverCallback:(id /* block */)a0;
- (void)setSmartCoverClosed:(BOOL)a0 reply:(id /* block */)a1;

@end

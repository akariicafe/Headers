@class CBDiscovery, NSString, CUBonjourBrowser, NSObject;
@protocol OS_dispatch_queue;

@interface DASimulatedDeviceDiscovery : NSObject {
    BOOL _activateCalled;
    CBDiscovery *_bluetoothScanner;
    CUBonjourBrowser *_bonjourBrowser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_nameTXTKey;
}

@property (copy, nonatomic) NSString *deviceBonjourServiceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ eventHandler;

- (id)init;
- (void)_activate;
- (void)_invalidated;
- (id)descriptionWithLevel:(int)a0;
- (void)invalidate;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (void)_bluetoothEnsureStarted;
- (void)_bluetoothEnsureStopped;
- (void)_bluetoothFoundDevice:(id)a0;
- (void)_bluetoothLostDevice:(id)a0;
- (void)_bonjourEnsureStarted;
- (void)_bonjourEnsureStopped;
- (void)_bonjourFoundDevice:(id)a0;
- (void)_bonjourLostDevice:(id)a0;

@end

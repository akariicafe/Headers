@class NSData, NSString, NSArray, SFService, NSURL, NSMutableDictionary, SFSession, NSObject, CUSystemMonitor, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillService : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    SFDeviceDiscovery *_discovery;
    int _discoveryState;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    NSString *_receivedPassword;
    NSString *_receivedUsername;
    BOOL _requestingAutoFill;
    SFService *_service;
    int _serviceState;
    SFSession *_session;
    NSData *_systemBTAddress;
    CUSystemMonitor *_systemMonitor;
    int _systemMonitorState;
    NSURL *_urlForVisualScanning;
}

@property (readonly, nonatomic) BOOL needsSetup;
@property (nonatomic) BOOL unitTesting;
@property (copy, nonatomic) NSData *appIconData;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *fixedPIN;
@property (copy, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) NSString *unlocalizedAppName;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;
@property (copy, nonatomic) id /* block */ receivedCredentialsHandler;
@property (copy, nonatomic) id /* block */ sessionStartedHandler;
@property (copy, nonatomic) id /* block */ sessionEndedHandler;
@property (copy, nonatomic) id /* block */ showPINHandlerEx;
@property (readonly, nonatomic) unsigned long long discoveredDevices;
@property (copy, nonatomic) id /* block */ discoveredDevicesChanged;
@property (copy, nonatomic) id /* block */ urlForVisualScanningChanged;

- (void)_cleanup;
- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_activated;
- (void)_completedWithError:(id)a0;
- (void)_discoveryStart;
- (void)_serviceSessionEnded:(id)a0 withError:(id)a1;
- (void)_discoveryLost:(id)a0;
- (void)_serviceHidePIN;
- (void)_bluetoothAddressChanged;
- (void)_discoveryChanged:(id)a0;
- (void)_discoveryFound:(id)a0;
- (int)_readyForAutoFillRequest;
- (void)_serviceHandleReceivedContextRequest:(id)a0 handler:(id /* block */)a1;
- (void)_serviceHandleReceivedCredentialRequest:(id)a0 handler:(id /* block */)a1;
- (void)_serviceHandleReceivedRequest:(id)a0 handler:(id /* block */)a1;
- (void)_serviceSessionStarted:(id)a0;
- (void)_serviceStart;
- (void)_systemMonitorStart;
- (void)startRequestingAutoFill;
- (void)stopRequestingAutoFill;
- (void)updateURLForVisualScanning;
- (id)urlForVisualScanning;

@end

@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MTRDeviceControllerFactory : NSObject

@property (readonly) struct MTRPersistentStorageDelegateBridge { void /* function */ **x0; id x1; id x2; } *storageDelegateBridge;
@property (readonly) struct GroupDataProvider { void /* function */ **x0; unsigned short x1; unsigned short x2; struct GroupListener *x3; } *groupData;
@property (readonly) struct DeviceAttestationVerifier { void /* function */ **x0; BOOL x1; } *deviceAttestationVerifier;
@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) struct DeviceControllerFactory { unsigned short x0; struct DeviceControllerSystemState *x1; struct PersistentStorageDelegate *x2; struct OperationalKeystore *x3; struct OperationalCertificateStore *x4; struct CertificateValidityPolicy *x5; BOOL x6; } *controllerFactory;
@property (readonly) struct MTRPersistentStorageDelegateBridge { void /* function */ **x0; id x1; id x2; } *persistentStorageDelegateBridge;
@property (readonly) struct MTRAttestationTrustStoreBridge { void /* function */ **x0; id x1; } *attestationTrustStoreBridge;
@property (readonly) struct MTROTAProviderDelegateBridge { void /* function */ **x0; id x1; id x2; } *otaProviderDelegateBridge;
@property (readonly) struct RawKeySessionKeystore { void /* function */ **x0; } *sessionKeystore;
@property (readonly) void *groupStorageDelegate;
@property (readonly) void *groupDataProvider;
@property (readonly) NSMutableArray *controllers;
@property (readonly) struct PersistentStorageOperationalKeystore { void /* function */ **x0; struct PersistentStorageDelegate *x1; unsigned char x2; struct P256Keypair *x3; BOOL x4; BOOL x5; } *keystore;
@property (readonly) void *opCertStore;
@property (readonly) struct MTROperationalBrowser { id x0; id x1; struct _DNSServiceRef_t *x2; BOOL x3; BOOL x4; } *operationalBrowser;
@property struct DeviceAttestationVerifier { void /* function */ **x0; BOOL x1; } *deviceAttestationVerifier;
@property (readonly) BOOL advertiseOperational;
@property (readonly, nonatomic) struct IgnoreCertificateValidityPeriodPolicy { void /* function */ **x0; } *certificateValidityPolicy;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } controllersLock;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSArray *knownFabrics;

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)checkIsRunning:(id *)a0;
- (void)_assertCurrentQueueIsNotMatterQueue;
- (BOOL)checkForInitError:(BOOL)a0 logMsg:(id)a1;
- (void)cleanupInitObjects;
- (void)cleanupStartupObjects;
- (void)controllerShuttingDown:(id)a0;
- (id)createController;
- (id)createControllerOnExistingFabric:(id)a0 error:(id *)a1;
- (id)createControllerOnNewFabric:(id)a0 error:(id *)a1;
- (BOOL)findMatchingFabric:(void *)a0 params:(id)a1 fabric:(const struct FabricInfo **)a2;
- (id)maybeInitializeOTAProvider:(id)a0;
- (void)operationalInstanceAdded:(struct PeerId { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)runningControllerForFabricIndex:(unsigned char)a0;
- (BOOL)startControllerFactory:(id)a0 error:(id *)a1;
- (void)stopControllerFactory;

@end

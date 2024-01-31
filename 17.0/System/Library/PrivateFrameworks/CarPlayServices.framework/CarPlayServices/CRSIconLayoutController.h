@class NSObject, NSString, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CRSIconLayoutController : NSObject <CRSIconLayoutServerToClientInterface>

@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)exportIconStateForCertificateSerial:(id)a0 categories:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)a0 vehicleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchIconStateForVehicleID:(id)a0 completion:(id /* block */)a1;
- (void)resetIconStateForVehicleID:(id)a0;
- (void)setIconOrder:(id)a0 hiddenIcons:(id)a1 forVehicleID:(id)a2;

@end

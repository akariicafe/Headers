@class MPAVOutputDeviceRoute, NSString, MPAVEndpointRoute, NSHashTable, MRUOutputDeviceAsset;

@interface MRUSystemOutputDeviceRouteController : NSObject <MRUCallMonitorObserver>

@property (class, readonly, nonatomic) MRUSystemOutputDeviceRouteController *sharedController;

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) MPAVEndpointRoute *systemRoute;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (readonly, nonatomic) MRUOutputDeviceAsset *systemOutputDeviceAsset;
@property (readonly, nonatomic) MRUOutputDeviceAsset *systemOutputDeviceAssetWithInCall;
@property (readonly, nonatomic) MRUOutputDeviceAsset *primaryOutputDeviceAsset;
@property (readonly, nonatomic) MRUOutputDeviceAsset *secondaryOutputDeviceAsset;
@property (readonly, nonatomic) BOOL isSplitRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)outputContextDescription;

- (id)init;
- (void)routeDidChangeNotification;
- (void)removeObserver:(id)a0;
- (void)updateOutputDevices;
- (void).cxx_destruct;
- (void)callMonitorDidUpdateOnCall:(id)a0 isOnCall:(BOOL)a1;
- (void)addObserver:(id)a0;

@end

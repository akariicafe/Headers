@class NSString, NSTimer, GEOObserverHashTable, MNTraceRecorder, VGVehicle;
@protocol MNVirtualGarageProvider;

@interface MNVirtualGarageManager : NSObject <MNVirtualGarageProviderDelegate> {
    id<MNVirtualGarageProvider> _provider;
    BOOL _isStarted;
    GEOObserverHashTable *_observers;
    MNTraceRecorder *_traceRecorder;
    NSTimer *_timer;
}

@property (class, readonly, nonatomic) MNVirtualGarageManager *sharedManager;

@property (readonly, nonatomic) VGVehicle *lastVehicle;
@property (readonly, nonatomic) unsigned long long vehiclesCount;
@property (readonly, nonatomic) BOOL assumesFullCharge;
@property (readonly, nonatomic) NSString *lastVehicleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initPrivate;
- (void)_start;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)setProvider:(id)a0;
- (void).cxx_destruct;
- (void)_stop;
- (void)updatedVehicleStateWithHandler:(id /* block */)a0;
- (BOOL)_isStandardProvider:(id)a0;
- (id)_standardVirtualGarageProvider;
- (void)setTraceRecorder:(id)a0;
- (void)virtualGarageProvider:(id)a0 didUpdateSelectedVehicle:(id)a1;

@end

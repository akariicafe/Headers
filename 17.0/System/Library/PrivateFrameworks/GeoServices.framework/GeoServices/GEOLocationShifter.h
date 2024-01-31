@class NSObject, NSString, NSMutableArray, NSCache;
@protocol OS_dispatch_queue;

@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver> {
    BOOL _isRequestingShiftFunction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_locationsToShift;
    NSCache *_shiftFunctionCache;
    int _resetPrivacyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, retain, nonatomic) Class proxyClass;

@property (readonly, nonatomic) BOOL locationShiftEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLocationShiftEnabled;
+ (void)flushDiskCache;
+ (BOOL)isLocationShiftRequiredForCoordinate:(struct { double x0; double x1; })a0;
+ (unsigned int)locationShiftFunctionVersion;
+ (id)_proxy;

- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;
- (id)init;
- (void)dealloc;
- (void)_reset;
- (void)_countryProvidersDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shiftLocation:(id)a0;
- (void)_fetchShiftFunctionForLatLng:(id)a0 auditToken:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_requestNextShiftFunctionIfNecessary;
- (BOOL)shiftCoordinate:(struct { double x0; double x1; })a0 accuracy:(double)a1 shiftedCoordinate:(struct { double x0; double x1; } *)a2 shiftedAccuracy:(double *)a3;
- (void)shiftCoordinate:(struct { double x0; double x1; })a0 accuracy:(double)a1 withCompletionHandler:(id /* block */)a2;
- (void)shiftCoordinate:(struct { double x0; double x1; })a0 accuracy:(double)a1 withCompletionHandler:(id /* block */)a2 mustGoToNetworkCallback:(id /* block */)a3 errorHandler:(id /* block */)a4 callbackQueue:(id)a5;
- (void)shiftLatLng:(id)a0 accuracy:(double)a1 auditToken:(id)a2 withCompletionHandler:(id /* block */)a3 mustGoToNetworkCallback:(id /* block */)a4 errorHandler:(id /* block */)a5 callbackQueue:(id)a6;
- (BOOL)shiftLatLng:(id)a0 accuracy:(double)a1 shiftedCoordinate:(struct { double x0; double x1; } *)a2 shiftedAccuracy:(double *)a3;
- (void)shiftLatLng:(id)a0 accuracy:(double)a1 withCompletionHandler:(id /* block */)a2;
- (void)shiftLatLng:(id)a0 accuracy:(double)a1 withCompletionHandler:(id /* block */)a2 mustGoToNetworkCallback:(id /* block */)a3 errorHandler:(id /* block */)a4 callbackQueue:(id)a5;

@end

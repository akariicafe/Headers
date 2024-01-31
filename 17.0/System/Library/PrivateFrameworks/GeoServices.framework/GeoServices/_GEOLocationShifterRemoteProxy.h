@class NSNumber, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_shiftingEnabled;
    NSNumber *_shiftingFxnVersion;
    NSCache *_shiftFunctionCache;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSCache *memoryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shiftLatLng:(id)a0 auditToken:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(struct { double x0; double x1; })a0;
- (BOOL)isLocationShiftEnabled;
- (void)flushDiskCache;
- (BOOL)isLocationShiftRequiredForCoordinate:(struct { double x0; double x1; })a0;
- (void).cxx_destruct;
- (unsigned int)locationShiftFunctionVersion;
- (BOOL)_isLocationShiftRequiredForCoordinateInProcess:(struct { double x0; double x1; })a0;

@end

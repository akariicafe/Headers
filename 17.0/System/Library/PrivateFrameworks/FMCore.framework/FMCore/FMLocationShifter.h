@class GEOLocationShifter, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FMLocationShifter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) GEOLocationShifter *locationShifter;

- (id)init;
- (void).cxx_destruct;
- (void)shiftLocation:(id)a0 withCompletionHandler:(id /* block */)a1 callbackQueue:(id)a2;
- (BOOL)isLocationShiftRequiredForItem:(id)a0;
- (BOOL)isLocationShiftRequiredForItems:(id)a0;
- (id)shiftLocation:(id)a0 timeout:(double)a1;
- (id)shiftLocations:(id)a0 timeout:(double)a1;
- (void)shiftLocations:(id)a0 withCompletionHandler:(id /* block */)a1 callbackQueue:(id)a2;

@end

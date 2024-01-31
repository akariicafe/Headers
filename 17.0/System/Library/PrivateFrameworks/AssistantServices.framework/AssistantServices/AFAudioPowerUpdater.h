@class NSObject;
@protocol AFAudioPowerProviding, AFAudioPowerUpdaterDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface AFAudioPowerUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id<AFAudioPowerUpdaterDelegate> _delegate;
    void *_sharedMemory;
    float _averagePower;
    float _peakPower;
}

@property (readonly, nonatomic) id<AFAudioPowerProviding> provider;
@property (readonly, nonatomic) long long frequency;

- (void)_timerFired;
- (float)_unsafePeakPower;
- (id)_createNewXPCWrapper;
- (void)dealloc;
- (id)initWithProvider:(id)a0 queue:(id)a1 frequency:(long long)a2 delegate:(id)a3;
- (void)_beginUpdate;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)_writeSharedMemoryWithAveragePower:(float)a0 peakPower:(float)a1;
- (void)_destroySharedMemory;
- (void)_invalidate;
- (void)invalidate;
- (id)_createSharedMemoryXPCObject;
- (void)_getPowerWithCompletion:(id /* block */)a0;
- (void)getPowerWithCompletion:(id /* block */)a0;
- (BOOL)_createSharedMemory;
- (void)_updatePowerWithAveragePower:(float)a0 andPeakPower:(float)a1;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (float)_unsafeAveragePower;
- (void)_endUpdate;
- (void)endUpdate;
- (void)beginUpdate;

@end

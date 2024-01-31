@class AUAudioUnitBus, AUAudioUnitBusArray;

@interface RENotifierAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _hasNotified;
}

@property (copy, nonatomic) id /* block */ didAllocate;
@property (copy, nonatomic) id /* block */ didDeallocate;
@property (copy, nonatomic) id /* block */ firstRender;
@property (readonly) BOOL hasNotified;

+ (void)registerToAudioUnit;

- (void).cxx_destruct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)resetNotifications;

@end

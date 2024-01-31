@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue, VOSSoundPack, VOSHapticPack;

@interface VOSOutputEventDispatcher : NSObject <VOSOutputEventDispatching> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_eventHandlers;
    id<VOSSoundPack> _cachedActiveSoundPack;
    id<VOSHapticPack> _cachedActiveHapticPack;
}

@property (class, readonly, nonatomic) VOSOutputEventDispatcher *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeEventHandler:(id)a0;
- (id)_init;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (void)addEventHandler:(id)a0;
- (id)_activeHapticPack;
- (id)_activeSoundPack;
- (BOOL)shouldPlayHapticForEvent:(id)a0;
- (BOOL)shouldPlaySoundForEvent:(id)a0;

@end

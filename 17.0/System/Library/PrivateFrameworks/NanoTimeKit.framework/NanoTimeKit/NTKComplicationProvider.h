@class NSIndexSet, NSHashTable, CLKDevice;

@interface NTKComplicationProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_observers;
    NSIndexSet *_lock_disabledComplicationTypes;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, copy, nonatomic) NSIndexSet *disabledComplicationTypes;

+ (id)providerForDevice:(id)a0;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (id)_apricotComplicationsWithOptions:(id)a0;
- (id)_bundleComplicationsWithOptions:(id)a0;
- (id)_dateComplicationsWithOptions:(id)a0;
- (void)_handleAvailableComplicationsChange;
- (id)_remoteComplicationsWithOptions:(id)a0;
- (void)_resetDisabledTypes;
- (id)complicationsOfType:(unsigned long long)a0 withOptions:(id)a1;
- (id)complicationsWithOptions:(id)a0;
- (BOOL)isComplicationAvailable:(id)a0;

@end

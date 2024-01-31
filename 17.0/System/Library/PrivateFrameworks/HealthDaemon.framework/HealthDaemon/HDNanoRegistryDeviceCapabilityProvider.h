@class HKObserverSet, NRDevice;

@interface HDNanoRegistryDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding> {
    int _pairedDeviceDidChangeCapabilitiesNotificationToken;
    HKObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_isListeningForUpdates;
    NRDevice *_lock_lastActivePairedDevice;
    id /* block */ _activePairedDeviceProvider;
}

- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)init;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (void).cxx_destruct;
- (id)activePairedDevice;
- (BOOL)isCapabilitySupported:(id)a0 onDevice:(id)a1;
- (id)initWithActivePairedDeviceProvider:(id /* block */)a0;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)a0 error:(id *)a1;

@end

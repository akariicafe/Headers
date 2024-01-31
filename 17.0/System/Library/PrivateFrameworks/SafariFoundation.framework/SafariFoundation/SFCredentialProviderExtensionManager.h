@class NSSet, NSString, NSMutableOrderedSet, NSHashTable, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface SFCredentialProviderExtensionManager : NSObject <WBSDeallocationSentinelObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    id _extensionMatchingToken;
    NSSet *_extensions;
    NSMutableOrderedSet *_observers;
    NSHashTable *_weakObservers;
    BOOL _errorEncounteredDuringLastExtensionDiscovery;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _observerLock;
}

@property (class, readonly) SFCredentialProviderExtensionManager *sharedManager;

@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) NSSet *extensionsSync;
@property (readonly, nonatomic) NSExtension *primaryExtension;
@property (readonly, nonatomic) NSExtension *primaryExtensionSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)sentinelDidDeallocateWithContext:(id)a0;
- (void)_notifyObservers:(id)a0;
- (void)_updateExtensions:(id)a0;
- (BOOL)extensionIsEnabled:(id)a0;
- (id)displayNameForExtension:(id)a0;
- (BOOL)shouldShowConfigurationUIForEnablingExtension:(id)a0;
- (BOOL)extensionSupportsPasskeys:(id)a0;
- (void)getPrimaryExtensionWithCompletion:(id /* block */)a0;
- (void)setExtension:(id)a0 isEnabled:(BOOL)a1;
- (void)addWeakObserver:(id)a0;
- (void)_beginExtensionDiscovery;
- (void).cxx_destruct;
- (void)_observerWasRemovedOnInternalQueue;
- (void)_addObserverOnInternalQueue:(id)a0 shouldHoldWeakly:(BOOL)a1;
- (void)addObserver:(id)a0;
- (id)_extensions;
- (void)_endExtensionDiscovery;

@end

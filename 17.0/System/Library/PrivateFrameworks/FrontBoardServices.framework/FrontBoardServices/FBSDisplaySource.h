@class CADisplay, NSString, NSSet, FBSDisplayConfiguration, NSObject, FBSDisplayMonitor;
@protocol OS_dispatch_queue;

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding> {
    CADisplay *_display;
    FBSDisplayMonitor *_lock_monitor;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSDisplayConfiguration *_lock_rawConfiguration;
    FBSDisplayConfiguration *_lock_rawConfigurationOfLastTransition;
    FBSDisplayConfiguration *_lock_reportedRawConfiguration;
    NSSet *_lock_reportedEffectiveConfigurations;
    FBSDisplayConfiguration *_evlock_rawConfiguration;
    FBSDisplayConfiguration *_evlock_reportedRawConfiguration;
    NSSet *_evlock_reportedEffectiveConfigurations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _externallyVisibleLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateTransformsLock;
    unsigned int _displayID;
    unsigned int _instanceID;
    int _lock_attachment;
    int _evlock_attachment;
    unsigned int _lock_debounceToken;
    BOOL _alwaysConnected;
    BOOL _updatable;
    BOOL _observing;
    BOOL _lock_initialized;
    BOOL _lock_allowsUnknown;
    BOOL _lock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)succinctDescription;

@end

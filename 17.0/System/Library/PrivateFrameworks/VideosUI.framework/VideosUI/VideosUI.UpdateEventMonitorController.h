@interface VideosUI.UpdateEventMonitorController : NSObject <VUIAppDocumentUpdateEventMonitorObserving> {
    void /* unknown type, empty encoding */ isDocumentDirty;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ controllerName;
    void /* unknown type, empty encoding */ isCollectionChildrenUpdateMode;
    void /* unknown type, empty encoding */ eventEligibleViewModels;
    void /* unknown type, empty encoding */ isOptimizedTTLRefreshEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_foregroundTTLExpirationMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateEventStore;
    void /* unknown type, empty encoding */ documentEventIterable;
    void /* unknown type, empty encoding */ lastMonitoringReason;
    void /* unknown type, empty encoding */ hasRefreshEvents;
    void /* unknown type, empty encoding */ isDocumentDirtyForRefreshEvents;
    void /* unknown type, empty encoding */ registrationHandler;
    void /* unknown type, empty encoding */ isSuspended;
}

- (id)init;
- (void).cxx_destruct;
- (void)appDocumentDidReceiveEvent:(id)a0;
- (void)appDocumentHasBecomeActive;

@end

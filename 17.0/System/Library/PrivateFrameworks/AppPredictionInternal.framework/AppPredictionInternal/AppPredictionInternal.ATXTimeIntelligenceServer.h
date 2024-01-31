@class _TtC21AppPredictionInternal25ATXTimeIntelligenceServer;

@interface AppPredictionInternal.ATXTimeIntelligenceServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ guardedData;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ timeIntelligenceAPI;
    void /* unknown type, empty encoding */ nudger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_xpcListener;
}

@property (class, nonatomic, readonly) _TtC21AppPredictionInternal25ATXTimeIntelligenceServer *sharedInstance;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end

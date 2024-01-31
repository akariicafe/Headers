@class NSError, ATXSportsResponse;

@interface ATXSportsServer : NSObject <ATXSportsInterface, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_listener;
}

@property (class, nonatomic, readonly) ATXSportsServer *sharedInstance;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)requestedSchedulesForTeamsWithReply:(void (^)(ATXSportsResponse *, NSError *))a0;

@end

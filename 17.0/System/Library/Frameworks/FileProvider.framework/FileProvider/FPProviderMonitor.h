@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FPProviderMonitor : NSObject {
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)isProviderIDForeground:(id)a0;
+ (id)providerIDForApplication:(id)a0 sharedContainerIdentifier:(id)a1;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 forProviderID:(id)a1;
- (BOOL)supportsWakesForProviderID:(id)a0;
- (BOOL)wakeProviderID:(id)a0 forSessionIdentifier:(id)a1;
- (void)addObserver:(id)a0 forProviderID:(id)a1;

@end

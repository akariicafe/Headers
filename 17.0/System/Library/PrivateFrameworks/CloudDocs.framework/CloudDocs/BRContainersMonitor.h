@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRContainersMonitor : NSObject {
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)bundleIDFromPrimaryIdentifier:(id)a0 secondaryIdentifier:(id)a1;
+ (id)containerIDFromPrimaryIdentifier:(id)a0 secondaryIdentifier:(id)a1;
+ (BOOL)isContainerID:(id)a0;
+ (BOOL)isContainerIDForeground:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forContainerID:(id)a1;
- (void)removeObserver:(id)a0 forContainerID:(id)a1;

@end

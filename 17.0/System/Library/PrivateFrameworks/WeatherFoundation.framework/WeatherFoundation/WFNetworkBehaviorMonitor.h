@class NSHashTable;

@interface WFNetworkBehaviorMonitor : NSObject

@property (readonly, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)logNetworkEvent:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end

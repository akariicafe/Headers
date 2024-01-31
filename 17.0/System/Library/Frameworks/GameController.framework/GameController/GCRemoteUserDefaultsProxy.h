@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, GCUserDefaultsXPCProxyServiceRemoteClientInterface;

@interface GCRemoteUserDefaultsProxy : NSObject <GCUserDefaults> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_clients;
}

@property (readonly, nonatomic) BOOL agentConnectionEstablished;
@property (retain, nonatomic) id<GCUserDefaultsXPCProxyServiceRemoteClientInterface> activeClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)arrayForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (float)floatForKey:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)dataForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)consoleUserDidChange:(id)a0;
- (void)observeUserDefaultsValueForKeyPath:(id)a0 change:(id)a1;
- (void)postInitialKVONotificationForObservation:(id)a0 keyPath:(id)a1;
- (void)refreshActiveClient;
- (void)userDefaultsCheckIn:(id)a0 effectiveUserIdentifier:(unsigned int)a1;

@end

@class EDActivityPersistence, NSString, NSMutableSet, EDPersistenceHookRegistry, NSObject;
@protocol OS_os_log;

@interface EDActivityRegistry : NSObject <EFLoggable, EDActivityHookResponder, EMActivityRegistryInterface> {
    NSMutableSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDActivityPersistence *activityPersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activityWithID:(id)a0 finishedWithError:(id)a1;
- (void)activityWithID:(id)a0 setCompletedCount:(long long)a1 totalCount:(long long)a2;
- (void)activityWithID:(id)a0 setUserInfoObject:(id)a1 forKey:(id)a2;
- (void)registerActivityObserver:(id)a0 completion:(id /* block */)a1;
- (void)removedActivityWithID:(id)a0;
- (void)startedActivity:(id)a0;
- (id)initWithHookRegistry:(id)a0 activityPersistence:(id)a1;

@end

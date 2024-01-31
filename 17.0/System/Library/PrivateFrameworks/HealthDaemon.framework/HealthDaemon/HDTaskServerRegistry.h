@class NSMapTable, NSMutableDictionary, NSMutableSet, HDDaemon;

@interface HDTaskServerRegistry : NSObject {
    NSMutableDictionary *_taskServerClassesByTaskIdentifier;
    NSMapTable *_taskServersByUUID;
    NSMutableDictionary *_taskServerObserversByUUID;
    NSMutableSet *_loadedPluginURLs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

- (id)initWithDaemon:(id)a0;
- (void)removeObserver:(id)a0 forTaskServerUUID:(id)a1;
- (void)addObserver:(id)a0 forTaskServerUUID:(id)a1 queue:(id)a2;
- (BOOL)registerTaskServerClasses:(id)a0 error:(id *)a1;
- (id)taskServerForTaskUUID:(id)a0;
- (BOOL)loadTaskServersFromPluginAtURL:(id)a0 error:(id *)a1;
- (id)createTaskServerEndpointForIdentifier:(id)a0 taskUUID:(id)a1 instanceUUID:(id)a2 configuration:(id)a3 client:(id)a4 connectionQueue:(id)a5 error:(id *)a6;
- (BOOL)registerTaskServerClass:(Class)a0 error:(id *)a1;
- (void)taskServerDidInvalidate:(id)a0;
- (Class)_taskServerClassForIdentifier:(id)a0;
- (void)removeTaskServerObserver:(id)a0;
- (void)didCreateTaskServer:(id)a0;
- (void).cxx_destruct;
- (BOOL)registerTaskServerClassesWithProvider:(id)a0 error:(id *)a1;

@end

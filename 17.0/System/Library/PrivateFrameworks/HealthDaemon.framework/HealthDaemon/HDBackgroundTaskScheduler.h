@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HDBackgroundTaskScheduler : NSObject {
    NSMutableDictionary *_clients;
    NSMutableDictionary *_tasksQueuedForDelivery;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (id)init;
- (id)taskWithName:(id)a0 forClientNamed:(id)a1;
- (void)removeTaskWithName:(id)a0 forClientNamed:(id)a1;
- (void)unregisterClientWithName:(id)a0;
- (void).cxx_destruct;
- (void)addTask:(id)a0 withName:(id)a1 forClientNamed:(id)a2;
- (void)registerClientWithName:(id)a0 taskHandler:(id /* block */)a1;

@end

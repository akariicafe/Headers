@class DSTestAutomation, NSMutableSet, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface DSHardwareButtonEventMonitor : NSObject {
    struct __IOHIDEventSystemClient { } *_buttonHIDSystemClient;
}

@property (retain, nonatomic) NSMutableSet *buttonEventHandlers;
@property (nonatomic) BOOL allowEvents;
@property (retain, nonatomic) NSLock *eventHandlerChangeLock;
@property (retain, nonatomic) DSTestAutomation *testAutomation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *buttonEventQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *systemClientCreationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)stopWithCompletion:(id /* block */)a0;
- (void)removeTarget:(id)a0;
- (id)_handlersForEvent:(unsigned long long)a0;
- (id)_handlersForTarget:(id)a0;
- (BOOL)_triggerHandlers:(id)a0 event:(unsigned long long)a1;
- (void)addTarget:(id)a0 action:(SEL)a1 forButtonEvents:(unsigned long long)a2 propagate:(BOOL)a3;
- (BOOL)hasTarget:(id)a0;
- (void)removeTarget:(id)a0 action:(SEL)a1 forButtonEvents:(unsigned long long)a2 propagate:(BOOL)a3;
- (void)startWithPriority:(long long)a0 completion:(id /* block */)a1;

@end

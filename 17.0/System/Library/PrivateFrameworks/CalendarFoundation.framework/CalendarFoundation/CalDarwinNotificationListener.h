@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>

@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL listening;
@property (readonly, nonatomic) NSString *notificationName;

- (void)dealloc;
- (BOOL)_removeObserver;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1 queue:(id)a2;
- (BOOL)_addObserver;
- (void)activate;
- (void)_notificationWithNameReceived:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)deactivate;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1;

@end

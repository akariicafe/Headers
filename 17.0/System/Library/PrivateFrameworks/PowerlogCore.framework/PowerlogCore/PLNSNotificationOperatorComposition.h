@class NSArray, NSString, PLOperator, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PLNSNotificationOperatorComposition : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_notificationObservers;
}

@property (weak) PLOperator *operator;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSArray *notificationNames;
@property (readonly, copy) NSString *notificationName;
@property (copy) id /* block */ operatorBlock;

- (void)notification:(id)a0;
- (void)listenForNotifications:(BOOL)a0;
- (id)initWithWorkQueue:(id)a0 forNotification:(id)a1 withBlock:(id /* block */)a2;
- (void)dealloc;
- (id)initWithWorkQueue:(id)a0 forNotifications:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithOperator:(id)a0 forNotifications:(id)a1 withBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithOperator:(id)a0 forNotification:(id)a1 withBlock:(id /* block */)a2;

@end

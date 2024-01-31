@class PLOperator, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PLCFNotificationOperatorComposition : NSObject

@property (weak) PLOperator *operator;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property BOOL isStateRequired;
@property int stateToken;
@property BOOL listeningForNotifications;
@property (retain) NSString *notificationName;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (BOOL)listenForNotifications:(BOOL)a0;
- (void)dealloc;
- (id)initWithOperator:(id)a0 forNotification:(id)a1 requireState:(BOOL)a2 withBlock:(id /* block */)a3;
- (id)initWithWorkQueue:(id)a0 forNotification:(id)a1 requireState:(BOOL)a2 withBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end

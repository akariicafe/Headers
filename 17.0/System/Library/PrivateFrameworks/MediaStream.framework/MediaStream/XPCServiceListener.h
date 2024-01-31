@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, XPCServiceListenerDelegate;

@interface XPCServiceListener : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;
@property (retain, nonatomic) NSMutableSet *serviceConnections;
@property (nonatomic) unsigned long long clientCount;
@property (readonly, retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) id<XPCServiceListenerDelegate> delegate;

- (void)workQueueHandleIncomingConnection:(id)a0;
- (id)initWithServiceName:(id)a0 queue:(id)a1 delegate:(id)a2;
- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)_workQueueShutDownServiceConnections:(id)a0 index:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)start;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)serviceConnectionDidDisconnect:(id)a0;

@end

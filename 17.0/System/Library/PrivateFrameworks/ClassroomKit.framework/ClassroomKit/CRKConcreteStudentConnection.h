@class NSHashTable, NSString, CRKStudentDaemonProxy;

@interface CRKConcreteStudentConnection : NSObject <CRKStudentDaemonProxyObserver, CRKStudentConnection>

@property (readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSHashTable *notificationObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionWithStudentDaemonProxy:(id)a0 invalidationHandler:(id /* block */)a1;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)daemonProxy:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)daemonProxyDidDisconnect:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 invalidationHandler:(id /* block */)a1;
- (id)observeNotificationWithName:(id)a0 handler:(id /* block */)a1;
- (id)operationForRequest:(id)a0;

@end

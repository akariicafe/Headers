@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSEngagementServiceProtocol;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<AMSEngagementServiceProtocol> proxy;
@property (copy, nonatomic) id /* block */ errorHandler;

- (void)dealloc;
- (id)_makeExportedClientConnectionInterface;
- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (id)initWithNotificationCenter:(id)a0;
- (void)handlePushedEvent:(id)a0;
- (void).cxx_destruct;
- (void)treatmentsDidSyncronize;
- (void)_removeRemoteConnection;

@end

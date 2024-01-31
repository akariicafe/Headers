@class NSString, NSXPCConnection;
@protocol WFUIPresenterHostInterface;

@interface WFUIPresenterXPCConnection : NSObject <WFUIPresenterConnection>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL connected;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) id<WFUIPresenterHostInterface> host;
@property (readonly, nonatomic) BOOL isConnected;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (id)presenterWithErrorHandler:(id /* block */)a0;
- (void)resumeConnectionIfNecessary;
- (id)synchronousPresenterWithErrorHandler:(id /* block */)a0;

@end

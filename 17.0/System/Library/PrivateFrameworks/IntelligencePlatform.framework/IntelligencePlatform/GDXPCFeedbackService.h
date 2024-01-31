@class NSString, NSXPCInterface, NSXPCConnection;

@interface GDXPCFeedbackService : NSObject <GDFeedbackServiceProtocol> {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)locked_establishConnection;
- (BOOL)logWithFeedbackData:(id)a0 type:(id)a1 variant:(id)a2 eventId:(long long)a3 withTimestamp:(id)a4 shouldProcessImmediately:(BOOL)a5 error:(id *)a6;

@end

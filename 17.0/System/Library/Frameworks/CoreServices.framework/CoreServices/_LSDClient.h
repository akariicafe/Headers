@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _LSDClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, retain) NSXPCConnection *XPCConnection;

- (id)initWithXPCConnection:(id)a0;
- (void)didHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)handleXPCInvocation:(id)a0 isReply:(BOOL)a1;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)invokeServiceInvocation:(id)a0 isReply:(BOOL)a1;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1;
- (void).cxx_destruct;

@end

@class NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTServiceObserver : NSObject

@property (readonly) unsigned long long replyStream;
@property (readonly) NSObject<OS_xpc_object> *replyPath;
@property (readonly) id<GTXPCConnection> connection;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 notifyConnection:(id)a1;

@end

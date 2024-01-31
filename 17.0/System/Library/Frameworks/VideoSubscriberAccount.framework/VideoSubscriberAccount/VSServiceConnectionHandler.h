@class NSXPCConnection;
@protocol VSServiceConnectionHandlerDelegate;

@interface VSServiceConnectionHandler : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<VSServiceConnectionHandlerDelegate> delegate;

- (void)_didFinish;
- (void).cxx_destruct;

@end

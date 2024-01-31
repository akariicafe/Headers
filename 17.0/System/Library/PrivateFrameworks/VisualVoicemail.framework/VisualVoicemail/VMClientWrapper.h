@class NSXPCConnection;
@protocol VMClientXPCProtocol;

@interface VMClientWrapper : NSObject

@property (class, readonly, nonatomic, getter=isVMXPCAvailable) BOOL vmXPCAvailable;

@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (nonatomic) BOOL pingRetry;
@property (weak, nonatomic) id<VMClientXPCProtocol> manager;

+ (id)voicemailClientXPCInterface;
+ (id)voicemailServerXPCInterface;

- (id)asynchronousServerConnectionWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end

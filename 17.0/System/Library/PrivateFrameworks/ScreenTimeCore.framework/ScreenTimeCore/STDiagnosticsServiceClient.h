@class NSXPCConnection;
@protocol STDiagnosticsServiceProtocol;

@interface STDiagnosticsServiceClient : NSObject

@property (copy, nonatomic) id /* block */ inboundMessageCallback;
@property (copy, nonatomic) id /* block */ outboundMessageCallback;
@property (retain, nonatomic) id<STDiagnosticsServiceProtocol> remoteObject;
@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveInboundMessage:(id)a0;
- (void)didReceiveOutboundMessage:(id)a0;
- (void)registerCallback:(id /* block */)a0 forInboundMessagesFromIDSInterfaces:(long long)a1;
- (void)registerCallback:(id /* block */)a0 forOutboundMessagesFromIDSInterfaces:(long long)a1;

@end

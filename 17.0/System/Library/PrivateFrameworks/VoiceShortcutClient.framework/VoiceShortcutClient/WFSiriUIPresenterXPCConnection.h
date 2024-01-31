@class NSXPCConnection, NSString, NSXPCListenerEndpoint;

@interface WFSiriUIPresenterXPCConnection : NSObject <WFSiriUIPresenterConnection>

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL connected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

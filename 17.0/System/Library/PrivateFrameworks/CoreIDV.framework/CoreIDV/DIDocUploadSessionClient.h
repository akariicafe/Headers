@class NSString, DIXPCDisconnectHandler, NSXPCConnection;
@protocol DIDocUploadSessionXPCProtocol;

@interface DIDocUploadSessionClient : NSObject <DIDocUploadSessionXPCProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<DIDocUploadSessionXPCProtocol> remoteObjectProxy;
@property (retain, nonatomic) DIXPCDisconnectHandler *disconnectHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)uploadDocData:(id)a0 uploadSettings:(id)a1 completion:(id /* block */)a2;
- (void)cancelUploads;

@end

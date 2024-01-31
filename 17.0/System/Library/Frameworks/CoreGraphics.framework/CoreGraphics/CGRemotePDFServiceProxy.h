@class NSString, NSXPCConnection;
@protocol CGRemotePDFServiceProtocol;

@interface CGRemotePDFServiceProxy : NSObject <CGRemotePDFServiceProtocol> {
    NSXPCConnection *_connection;
    id<CGRemotePDFServiceProtocol> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (id)initWithError:(id *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)newPDFDocumentWithData:(id)a0 withReply:(id /* block */)a1;
- (void)newRemotePDFDocumentProxyWithData:(id)a0 withReply:(id /* block */)a1;

@end

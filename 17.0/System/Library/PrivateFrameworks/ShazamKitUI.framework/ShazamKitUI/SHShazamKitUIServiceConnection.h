@class NSXPCConnection, NSString, SHShazamKitUIServiceConnectionProvider;

@interface SHShazamKitUIServiceConnection : NSObject <SHShazamKitUIService>

@property (readonly, nonatomic) SHShazamKitUIServiceConnectionProvider *connectionProvider;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConnectionProvider:(id)a0;
- (void)tearDownConnection;
- (void).cxx_destruct;
- (void)attachDefaultConnectionHandlers;
- (void)presentMediaItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentMediaItem:(id)a0 presentationSettings:(id)a1 completionHandler:(id /* block */)a2;

@end

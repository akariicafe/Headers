@class NSXPCListener, NSUUID, NSXPCConnection, _EXSceneConfiguration, _EXExtension, NSXPCListenerEndpoint, NSString;
@protocol _EXScene;

@interface _EXSceneSession : NSObject <NSXPCListenerDelegate, _EXSceneSessionExtensionXPCProtocol, _EXConnectionHandler>

@property (retain) NSXPCListener *sceneConnectionListener;
@property (retain, nonatomic) id<_EXScene> scene;
@property (weak, nonatomic) NSXPCConnection *sessionXPCConnection;
@property (retain, nonatomic) NSXPCConnection *sceneXPCConnection;
@property (readonly, weak, nonatomic) _EXExtension *extension;
@property (retain) NSUUID *identifier;
@property (copy) _EXSceneConfiguration *configuration;
@property (readonly) NSXPCListenerEndpoint *hostEndpoint;
@property (readonly, nonatomic) BOOL hasSwiftUIContent;
@property (readonly) unsigned long long signpost;
@property (readonly, copy) NSString *role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExtension:(id)a0;
- (void)dealloc;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)role;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)makeSceneWithError:(id *)a0;
- (void).cxx_destruct;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)connectToScene:(id)a0;
- (void)connectSceneSessionWithRequest:(id)a0 reply:(id /* block */)a1;
- (id)makeConfigurationWithParameters:(id)a0;
- (id)makeConnectionResponse;

@end

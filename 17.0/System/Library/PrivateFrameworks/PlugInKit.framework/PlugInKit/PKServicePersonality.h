@class NSString, NSDictionary, NSXPCConnection, NSURL, NSUUID, NSUserDefaults;

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality>

@property (retain) id plugInPrincipal;
@property (retain) id hostPrincipal;
@property (retain) id embeddedPrincipal;
@property (retain) NSXPCConnection *connection;
@property (retain) NSUserDefaults *preferences;
@property (copy) NSDictionary *_userInfo;
@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *url;
@property (readonly) NSUUID *uuid;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSDictionary *plugInDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostHasControl;
- (void)prefsObjectForKey:(id)a0 inPlugIn:(id)a1 result:(id /* block */)a2;
- (void)prefsSetObject:(id)a0 forKey:(id)a1 inPlugIn:(id)a2 result:(id /* block */)a3;
- (void)shutdownPlugIn;
- (double)cleanExitTimeout;
- (id)setupWithIdentifier:(id)a0 extensionPointPlatform:(unsigned int)a1;
- (void)prepareUsing:(id)a0 reply:(id /* block */)a1;
- (void)beginUsingPlugIn:(id)a0 ready:(id /* block */)a1;
- (void)prepareUsingPlugIn:(id)a0 hostProtocol:(id)a1 reply:(id /* block */)a2;
- (id)findProtocol:(id)a0;
- (id)initWithConnection:(id)a0 proxyFactory:(id)a1;
- (void).cxx_destruct;
- (id)defaultPrincipalObject;

@end

@class NSString, NSXPCConnection;

@interface LSInstallProgressObserver : NSObject <LSInstallProgressProtocol>

@property (weak, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver;
- (void)_lsPing:(id)a0 reply:(id /* block */)a1;
- (id)initWithConnection:(id)a0;
- (void)removeObserver;
- (void)installationFailedForApplication:(id)a0 reply:(id /* block */)a1;
- (void)createInstallProgressForApplication:(id)a0 withPhase:(unsigned long long)a1 andPublishingString:(id)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (void)sendNotification:(int)a0 forApplications:(id)a1 withPlugins:(BOOL)a2;
- (void)sendNotification:(int)a0 forApplicationWithBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)setProgressProportionsByPhase:(id)a0 forInstallOfApplicationWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)installationEndedForApplication:(id)a0 withState:(unsigned long long)a1;

@end

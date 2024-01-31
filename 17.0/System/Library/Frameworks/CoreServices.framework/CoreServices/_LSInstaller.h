@class NSString, NSXPCConnection;

@interface _LSInstaller : NSObject <LSInstallationServiceProtocol>

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performShimmedInstallOfArtifact:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)performShimmedUninstallOfApplicationWithIdentifier:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

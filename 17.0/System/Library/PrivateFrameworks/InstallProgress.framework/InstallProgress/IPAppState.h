@class LSApplicationIdentity, IPAppStateSource;

@interface IPAppState : IPInstallableState

@property (readonly) IPAppStateSource *source;
@property (readonly) LSApplicationIdentity *launchServicesIdentity;

- (void).cxx_destruct;
- (id)initWithAppStateSource:(id)a0 applicationIdentity:(id)a1 isInstalling:(BOOL)a2;

@end

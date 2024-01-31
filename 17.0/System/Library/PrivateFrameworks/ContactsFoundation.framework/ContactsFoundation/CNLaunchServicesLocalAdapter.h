@class LSApplicationWorkspace;

@interface CNLaunchServicesLocalAdapter : NSObject <CNLaunchServicesAdapter>

@property (retain, nonatomic) LSApplicationWorkspace *workspace;

+ (id)lsApplicationWorkspaceForBundleId:(id)a0;

- (void).cxx_destruct;
- (id)initWithApplicationWorkspace:(id)a0;
- (void)applicationForBundleIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)applicationsAvailableForHandlingURLScheme:(id)a0 withReply:(id /* block */)a1;
- (void)applicationsForUserActivityType:(id)a0 withReply:(id /* block */)a1;
- (void)openSensitiveURLInBackground:(id)a0 withOptions:(id)a1 withReply:(id /* block */)a2;
- (void)openUserActivityData:(id)a0 inApplication:(id)a1 withReply:(id /* block */)a2;

@end

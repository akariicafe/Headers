@class FBSDisplayConfiguration, FBSDisplayIdentity;

@interface FBDisplayManager : FBSDisplayMonitor

@property (class, readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property (class, readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;

@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)postBookendConnections;
- (void)updateTransformsWithCompletion:(id /* block */)a0;

@end

@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (int)processID;
- (id)init;
- (id)bundleID;
- (id)name;

@end

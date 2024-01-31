@interface RTIInputSystemUIClient : RTIInputSystemClient

+ (id)_serviceName;

- (BOOL)_canResumeConnection;
- (id)initWithUIHostMachName:(id)a0;
- (void)_initializeConnectionWithMachName:(id)a0;

@end

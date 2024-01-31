@interface _EXNSExtensionShimExtension : _EXExtension

@property (retain) Class principalClass;
@property (retain) Class extensionContextClass;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (void)didFinishLaunching;
- (Class)delegateClass;
- (void).cxx_destruct;

@end

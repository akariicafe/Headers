@interface DOCPostLaunchBuffer : DOCOperationBuffer

@property (class, readonly) DOCPostLaunchBuffer *shared;

- (void)performAfterLaunch:(id /* block */)a0;
- (id)initWithLabel:(id)a0 targetQueue:(id)a1;
- (void)performAfterLaunchAlwaysAsync:(BOOL)a0 block:(id /* block */)a1;

@end

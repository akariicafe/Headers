@interface TSUApplicationExecutionContext : TSUExecutionContext

- (id)application;
- (void)performWithApplication:(id /* block */)a0;
- (BOOL)isApplicationContext;
- (BOOL)isUILayoutRTL;

@end

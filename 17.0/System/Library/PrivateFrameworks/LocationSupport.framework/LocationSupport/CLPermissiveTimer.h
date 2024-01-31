@interface CLPermissiveTimer : CLTimer

- (void)shouldFire;
- (void)invalidate;
- (void)dbgAssertInside;

@end

@interface HAP2PropertyLock : HAP2Lock

+ (id)lockWithName:(id)a0;

- (void)performWritingBlock:(id /* block */)a0;
- (void)performReadingBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;

@end

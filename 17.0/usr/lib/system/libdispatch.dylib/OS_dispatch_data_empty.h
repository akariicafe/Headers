@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (void)_activate;
- (unsigned long long)retainCount;
- (void)_suspend;
- (void)_resume;
- (id)autorelease;
- (void)_setTargetQueue:(id)a0;
- (void *)_getContext;
- (void)_setFinalizer:(void /* function */ *)a0;
- (oneway void)release;
- (void)_setContext:(void *)a0;

@end

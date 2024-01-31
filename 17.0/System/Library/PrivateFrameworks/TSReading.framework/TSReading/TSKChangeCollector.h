@interface TSKChangeCollector : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)threadCollector;

- (id)retain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (id)peekCollectedChanges;
- (void)registerChange:(int)a0 details:(id)a1 forChangeSource:(id)a2;

@end

@interface TSCH3DGLExportSharegroupToken : TSCH3DCachedSharegroupToken

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)token;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeCreatedFromOtherThread;
- (BOOL)hasInterestForDiscreteGraphics;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)shouldGarbageCollect;

@end

@interface TSCH3DSharegroupToken : NSObject

+ (id)glExport;
+ (id)interactiveCanvas;
+ (id)sharegroupMapWithDevice:(id)a0;
+ (id)sharegroupPool;

- (BOOL)isOneShot;
- (BOOL)canBeCreatedFromOtherThread;
- (BOOL)hasInterestForDiscreteGraphics;
- (BOOL)mustRunOnMainThread;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)shouldGarbageCollect;
- (id)targetThreadForFlushingWithOwningThread:(id)a0;

@end

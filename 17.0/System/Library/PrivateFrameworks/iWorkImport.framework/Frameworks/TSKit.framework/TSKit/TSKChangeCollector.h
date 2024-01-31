@interface TSKChangeCollector : NSObject

@property (class, readonly, nonatomic) TSKChangeCollector *threadCollector;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (id)peekCollectedChanges;
- (void)registerChange:(unsigned int)a0 details:(id)a1 forChangeSource:(id)a2;
- (void)endCollectingChangesAndDiscardChanges;

@end

@class NSPredicate, NSMutableArray;

@interface HREActionMap : NSObject <NSCopying>

@property (nonatomic) BOOL visitedByFlatten;
@property (retain, nonatomic) NSMutableArray *childMaps;
@property (retain, nonatomic) NSPredicate *condition;

+ (id)actionMapWithChildMaps:(id)a0;
+ (id)emptyMap;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)flattenedMapEvaluatedForObject:(id)a0;
- (id)_initWithCondition:(id)a0 childMaps:(id)a1;
- (BOOL)conditionSatisfiedByObject:(id)a0;
- (id)mergeWithActionMaps:(id)a0;

@end

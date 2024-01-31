@class NSArray;

@interface PLLibraryScopeConditionUnknown : PLLibraryScopeCondition

@property (copy, nonatomic) NSArray *unknownSingleQueries;

+ (id)conditionWithSingleQueries:(id)a0 criteria:(unsigned char)a1;
+ (BOOL)supportsQueryKey:(int)a0;

- (void).cxx_destruct;
- (unsigned char)type;
- (id)conditionQuery;

@end

@interface GEOSortPriorityMappingEntry : NSObject

@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) long long resultSubtype;

- (id)init;
- (id)initWithPriority:(long long)a0 resultType:(long long)a1 resultSubtype:(long long)a2;

@end

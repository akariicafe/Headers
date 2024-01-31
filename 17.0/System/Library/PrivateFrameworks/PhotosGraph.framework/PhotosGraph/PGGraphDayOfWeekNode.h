@class NSString, MANodeFilter;

@interface PGGraphDayOfWeekNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode>

@property (readonly) NSString *name;
@property (readonly) long long dayOfWeek;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (long long)dayOfWeekForName:(id)a0;
+ (id)nameForDayOfWeek:(long long)a0;

- (id)label;
- (id)propertyDictionary;
- (id)description;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)initWithDayOfWeek:(long long)a0;

@end

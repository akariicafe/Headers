@class PGGraphCalendarUnitNode, NSString, MARelation, PGGraphSeasonNode, PGGraphDateNodeCollection, MANodeFilter;

@interface PGGraphDateNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode>

@property (class, readonly) MARelation *seasonOfDate;
@property (class, readonly) MARelation *yearOfDate;
@property (class, readonly) MARelation *monthDayOfDate;
@property (class, readonly) MARelation *momentOfDate;
@property (class, readonly) MARelation *dayOfWeekOfDate;

@property (readonly) NSString *name;
@property (readonly) PGGraphCalendarUnitNode *dayNode;
@property (readonly) PGGraphCalendarUnitNode *monthNode;
@property (readonly) PGGraphCalendarUnitNode *monthDayNode;
@property (readonly) PGGraphCalendarUnitNode *yearNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfYearNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfMonthNode;
@property (readonly, nonatomic) PGGraphSeasonNode *seasonNode;
@property (readonly) long long day;
@property (readonly) long long month;
@property (readonly) long long monthDay;
@property (readonly) long long year;
@property (readonly) PGGraphDateNodeCollection *collection;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (id)dateNodeForDayNode:(id)a0 monthNode:(id)a1 yearNode:(id)a2;
+ (id)dayOfDate;
+ (id)filterWithDateNames:(id)a0;
+ (id)holidayOfDate;
+ (id)monthOfDate;
+ (id)weekOfMonthOfDate;
+ (id)weekOfYearOfDate;

- (id)label;
- (id)propertyDictionary;
- (id)initWithName:(id)a0;
- (id)description;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)associatedNodesForRemoval;
- (void)enumerateHolidayEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHolidayNodesUsingBlock:(id /* block */)a0;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)lastWeekDateNodes;
- (id)localDate;
- (id)sameWeekDateNodes;

@end

@class NSString, MANodeFilter;

@interface PGGraphCalendarUnitNode : PGGraphOptimizedNode <PGAssetCollectionFeature, MAUniquelyIdentifiableNode> {
    unsigned char _calendarUnit : 8;
}

@property (class, readonly, nonatomic) MANodeFilter *dayFilter;
@property (class, readonly, nonatomic) MANodeFilter *monthFilter;
@property (class, readonly, nonatomic) MANodeFilter *monthDayFilter;
@property (class, readonly, nonatomic) MANodeFilter *yearFilter;
@property (class, readonly, nonatomic) MANodeFilter *weekOfMonthFilter;
@property (class, readonly, nonatomic) MANodeFilter *weekOfYearFilter;

@property (readonly, nonatomic) unsigned short calendarUnitValue : 16;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (long long)encodedMonthDayForMonth:(long long)a0 day:(long long)a1;
+ (struct PGCalendarUnitMonthDayValue { long long x0; long long x1; })monthDayValueForMonthDayNode:(id)a0;
+ (struct PGCalendarUnitMonthDayValue { long long x0; long long x1; })monthDayValueForMonthDayNodeCalendarUnitValue:(long long)a0;
+ (id)propertiesForMonth:(long long)a0 day:(long long)a1;
+ (id)propertiesWithCalendarUnitValue:(long long)a0;

- (id)collection;
- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)name;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)initWithCalendarUnit:(unsigned long long)a0 value:(long long)a1;

@end

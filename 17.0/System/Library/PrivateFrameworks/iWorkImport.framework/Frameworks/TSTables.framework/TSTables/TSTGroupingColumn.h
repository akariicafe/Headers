@class TSULocale, TSKFormat, TSCEFormulaObject;

@interface TSTGroupingColumn : TSKSosBase <NSCopying> {
    struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _groupingColumnUid;
    struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _columnUid;
    TSKFormat *_groupingFormat;
    BOOL _groupingFormatComputed;
    TSULocale *_docLocale;
}

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } groupingColumnUid;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } uniqueObjectUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } columnUid;
@property (readonly, nonatomic) struct TSCEFunctor { TSCEFormulaObject *_formula; unsigned char _numArgs; } groupingFunctor;
@property (readonly, nonatomic) long long groupingType;

+ (id)shortStringForDayTypeForLocale:(id)a0;
+ (id)stringForYearWeekTypeForLocale:(id)a0;
+ (id)shortStringForQuarterOfYearType;
+ (long long)coarserGroupingTypeFor:(long long)a0;
+ (long long)coarserGroupingTypeFor:(long long)a0 groupTypesToAvoid:(id)a1;
+ (long long)finerGroupingTypeFor:(long long)a0;
+ (long long)finerGroupingTypeFor:(long long)a0 groupTypesToAvoid:(id)a1;
+ (BOOL)groupingTypeIsAnyDateType:(long long)a0;
+ (id)shortStringForDayOfWeekType;
+ (id)shortStringForDayOfWeekTypeForLocale:(id)a0;
+ (id)shortStringForDayType;
+ (id)shortStringForGroupingType:(long long)a0;
+ (id)shortStringForGroupingType:(long long)a0 locale:(id)a1;
+ (id)shortStringForMonthOfYearType;
+ (id)shortStringForMonthOfYearTypeForLocale:(id)a0;
+ (id)shortStringForMonthType;
+ (id)shortStringForMonthTypeForLocale:(id)a0;
+ (id)shortStringForQuarterOfYearTypeForLocale:(id)a0;
+ (id)shortStringForYearQuarterType;
+ (id)shortStringForYearQuarterTypeForLocale:(id)a0;
+ (id)shortStringForYearType;
+ (id)shortStringForYearTypeForLocale:(id)a0;
+ (id)shortStringForYearWeekType;
+ (id)shortStringForYearWeekTypeForLocale:(id)a0;
+ (id)stringForDayOfWeekType;
+ (id)stringForDayOfWeekTypeForLocale:(id)a0;
+ (id)stringForDayType;
+ (id)stringForDayTypeForLocale:(id)a0;
+ (id)stringForGroupingType:(long long)a0;
+ (id)stringForGroupingType:(long long)a0 locale:(id)a1;
+ (id)stringForMonthOfYearType;
+ (id)stringForMonthOfYearTypeForLocale:(id)a0;
+ (id)stringForMonthType;
+ (id)stringForMonthTypeForLocale:(id)a0;
+ (id)stringForQuarterOfYearType;
+ (id)stringForQuarterOfYearTypeForLocale:(id)a0;
+ (id)stringForUniqueType;
+ (id)stringForUniqueTypeForLocale:(id)a0;
+ (id)stringForYearQuarterType;
+ (id)stringForYearQuarterTypeForLocale:(id)a0;
+ (id)stringForYearType;
+ (id)stringForYearTypeForLocale:(id)a0;
+ (id)stringForYearWeekType;

- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 groupingType:(long long)a1;
- (void)getUUIDBytesForColumnUid:(unsigned char[16])a0;
- (void)getUUIDBytesForGroupingColumnUid:(unsigned char[16])a0;
- (id)groupValueForValue:(id)a0 calcEngine:(id)a1;
- (id)initWithColumnIndex:(struct TSUModelColumnIndex { unsigned short x0; })a0 groupingType:(long long)a1 inTableInfo:(id)a2;
- (id)initWithGroupingColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 columnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 groupingType:(long long)a2;
- (id)p_groupingFormatWithLocale:(id)a0;
- (void)setFunctorForType;

@end

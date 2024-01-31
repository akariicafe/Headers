@interface TSCECategoryRef : NSObject <NSCopying>

@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } groupByUid;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } pivotTableUid;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } relativeGroupUid;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } absoluteGroupUid;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } columnUid;
@property (nonatomic) unsigned char type;
@property (nonatomic) unsigned char groupLevel;
@property (nonatomic) unsigned short aggrIndexLevel;
@property (nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;
@property (nonatomic) short relativeColumn;
@property (nonatomic) unsigned char options;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL refersToPivotTable;
@property (readonly, nonatomic) BOOL refersToPivotTableRows;
@property (readonly, nonatomic) BOOL refersToPivotTableColumns;
@property (nonatomic) BOOL showAggregateName;

+ (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })groupByRootUid;
+ (BOOL)isRelativeAncestorGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })relativeAncestorGroupUid:(int)a0;
+ (int)relativeLevelOfAncestorGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;

- (id)init;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGroupByUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 absGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 columnUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 aggType:(unsigned char)a3 groupLevel:(unsigned char)a4;
- (id)initWithGroupByUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 absGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 columnUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 aggType:(unsigned char)a3 groupLevel:(unsigned char)a4 aggrIndexLevel:(unsigned short)a5;
- (BOOL)isBadRef;
- (BOOL)convertToBadRef;
- (id)copyAndReplaceGroupUIDs:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithGroupByUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 relGroupUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 absGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 columnUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a3 aggType:(unsigned char)a4 groupLevel:(unsigned char)a5 aggrIndexLevel:(unsigned short)a6 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a7;
- (id)initWithGroupByUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 relGroupUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 absGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 columnUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a3 aggType:(unsigned char)a4 groupLevel:(unsigned char)a5 aggrIndexLevel:(unsigned short)a6 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a7 relativeColumn:(short)a8 options:(unsigned char)a9;
- (BOOL)restoreFromBadRef;
- (void)setAsAbsoluteWithGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)setAsRelativeWithGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;

@end

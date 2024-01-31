@interface TSTTableGroupSortRuleUID : TSKSosBase {
    struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _groupingColumnUID;
    struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _columnUID;
    BOOL _definedGroupingColumnUID;
    BOOL _definedColumnUID;
    BOOL _definedDirection;
}

@property (nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } groupingColumnUID;
@property (nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } columnUID;
@property (nonatomic) int direction;

+ (id)ruleWithGroupingColumnUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 columnUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 direction:(int)a2;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToArchive:(void *)a0;
- (id)initFromArchive:(const void *)a0;
- (unsigned char)groupLevelInTable:(id)a0;
- (id)initWithGroupingColumnUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 columnUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 direction:(int)a2;
- (id)ruleByChangingDirectionTo:(int)a0;
- (id)ruleByChangingSummaryColumnTo:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;

@end

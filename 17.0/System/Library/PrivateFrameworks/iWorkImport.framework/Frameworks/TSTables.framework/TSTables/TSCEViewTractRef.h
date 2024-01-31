@class TSCEUndoTract;

@interface TSCEViewTractRef : NSObject <NSCopying>

@property (nonatomic) struct TSUPreserveFlags { unsigned char _flags; } preserveFlags;
@property (retain, nonatomic) TSCEUndoTract *tract;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (nonatomic) unsigned short aggregateIndexLevel;
@property (nonatomic) unsigned char columnGroupLevel;
@property (nonatomic) unsigned char rowGroupLevel;
@property (readonly, nonatomic) BOOL isValidOrSpanning;
@property (readonly, nonatomic) BOOL spansAllColumns;
@property (readonly, nonatomic) BOOL spansAllRows;
@property (readonly, nonatomic) BOOL isFixedAtZeroRef;

- (id)init;
- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithTract:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 preserveFlags:(struct TSUPreserveFlags { unsigned char x0; })a2 columnGroupLevel:(unsigned char)a3 rowGroupLevel:(unsigned char)a4 aggrIndexLevel:(unsigned short)a5;
- (id)initWithTract:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 preserveFlags:(struct TSUPreserveFlags { unsigned char x0; })a2;

@end

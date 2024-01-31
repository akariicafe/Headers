@class NSUUID;

@interface TSCEWrappedCellRef : NSObject <NSCopying>

@property (readonly, nonatomic) struct TSCECellRef { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } coordinate; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } cellRef;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } coordinate;
@property (readonly, retain, nonatomic) NSUUID *tableID;

+ (id)invalidCellRef;

- (id)init;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)description;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCellCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 tableID:(id)a1;
- (id)initWithCellCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 tableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;

@end

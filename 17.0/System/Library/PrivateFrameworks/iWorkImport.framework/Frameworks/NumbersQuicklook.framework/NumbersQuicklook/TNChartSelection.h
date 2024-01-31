@class TSCHChartDrawableInfo;

@interface TNChartSelection : TSDDrawableSelection

@property (readonly, nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _bottomRight; } range; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } reference;
@property (readonly, nonatomic) TSCHChartDrawableInfo *chart;

+ (Class)archivedSelectionClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initFromArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithChartInfo:(id)a0;
- (id)initWithChartInfo:(id)a0 reference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (BOOL)returnChartFrameForAutoscroll;

@end

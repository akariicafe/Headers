@class TSCECellTractRef, TSTColumnRowUIDMapper, TSCECalculationEngine;

@interface TSTUIDRectRef : NSObject <NSCopying> {
    struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } _colIdList; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } _rowIdList; } _uidRange;
    TSCECellTractRef *_lastKnownViewTractRef;
    unsigned long long _viewMapVersionCounter;
    TSTColumnRowUIDMapper *_viewUidMapper;
}

@property (weak, nonatomic) TSCECalculationEngine *calcEngine;
@property (nonatomic) unsigned char basePreserveFlags;
@property (nonatomic) unsigned char viewPreserveFlags;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; } uidRange;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } singleReferencedColumnUid;
@property (readonly) struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } viewTopLeftCoord;
@property (readonly) struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } viewBottomRightCoord;
@property (readonly) struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } baseTopLeftCoord;
@property (readonly) struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } baseBottomRightCoord;
@property (nonatomic) BOOL needsUidRectUpgrade;
@property (readonly, nonatomic) unsigned long long area;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (nonatomic) struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _bottomRight; } range; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } _ref; } chromeRangeRef;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isViewRectangle;
@property (readonly, nonatomic) BOOL isBaseRectangle;
@property (readonly, nonatomic) BOOL spansAllColumns;
@property (readonly, nonatomic) BOOL spansAllRows;

- (unsigned long long)hash;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)tableModel;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tableInfo;
- (id)viewTractRef;
- (id)viewCellRegionWithRangeContext:(unsigned char)a0;
- (struct RefTypeHolder<TSCERangeRef, 0> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })baseRangeRef;
- (struct vector<RefTypeHolder<TSCERangeRef, 0>, std::allocator<RefTypeHolder<TSCERangeRef, 0>>> { void *x0; void *x1; struct __compressed_pair<RefTypeHolder<TSCERangeRef, 0> *, std::allocator<RefTypeHolder<TSCERangeRef, 0>>> { void *x0; } x2; })baseRangeRefs;
- (BOOL)baseToViewPreserveFlagsAreInverted;
- (id)baseTractRef;
- (id)chromeTractRef;
- (void)convertUIDRefToViewTractRef;
- (void)convertViewTractRefToUID;
- (void)excludeSummaryAndLabelRows;
- (id)grabViewUidMapper;
- (id)includeUidTractList;
- (id)initWithCalcEngine:(id)a0 baseRangeRef:(const void *)a1 preserveFlags:(unsigned char)a2;
- (id)initWithCalcEngine:(id)a0 chromeRangeRef:(const void *)a1 preserveFlags:(unsigned char)a2;
- (id)initWithCalcEngine:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 uidRange:(const void *)a2 preserveFlags:(unsigned char)a3;
- (id)initWithCalcEngine:(id)a0 viewRangeRef:(const void *)a1 preserveFlags:(unsigned char)a2;
- (id)initWithCalcEngine:(id)a0 viewTractRef:(id)a1;
- (BOOL)isValidReference;
- (void)setBaseRangeRef:(const void *)a0 preserveFlags:(unsigned char)a1;
- (void)setChromeRangeRef:(const void *)a0 preserveFlags:(unsigned char)a1;
- (void)setViewRangeRef:(const void *)a0 preserveFlags:(unsigned char)a1;
- (id)uidTractListWithPurpose:(unsigned char)a0;
- (struct RefTypeHolder<TSCERangeRef, 1> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })viewRangeRef;
- (struct vector<RefTypeHolder<TSCERangeRef, 1>, std::allocator<RefTypeHolder<TSCERangeRef, 1>>> { void *x0; void *x1; struct __compressed_pair<RefTypeHolder<TSCERangeRef, 1> *, std::allocator<RefTypeHolder<TSCERangeRef, 1>>> { void *x0; } x2; })viewRangeRefs;
- (id)viewTractRefIfFullyValid;

@end

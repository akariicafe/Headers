@class TSTCellMap;

@interface TSTSummaryModelGroupByChangeState : TSKSosBase {
    BOOL _definedCellMap;
}

@property (readonly, nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } summaryRowHeightList;
@property (readonly, nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } labelRowHeightList;
@property (readonly, nonatomic) struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } labelRowVisibilityList;
@property (retain, nonatomic) TSTCellMap *cellMap;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;

@end

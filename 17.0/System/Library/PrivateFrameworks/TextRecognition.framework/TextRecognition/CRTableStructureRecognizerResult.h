@class CRTableStructureRecognizerResultProgram, CRNormalizedQuad;

@interface CRTableStructureRecognizerResult : NSObject

@property (nonatomic) struct vector<CRTableStructureRow, std::allocator<CRTableStructureRow>> { struct CRTableStructureRow *__begin_; struct CRTableStructureRow *__end_; struct __compressed_pair<CRTableStructureRow *, std::allocator<CRTableStructureRow>> { struct CRTableStructureRow *__value_; } __end_cap_; } rows;
@property (nonatomic) struct vector<CRTableStructureColumn, std::allocator<CRTableStructureColumn>> { struct CRTableStructureColumn *__begin_; struct CRTableStructureColumn *__end_; struct __compressed_pair<CRTableStructureColumn *, std::allocator<CRTableStructureColumn>> { struct CRTableStructureColumn *__value_; } __end_cap_; } columns;
@property (nonatomic) struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge *__begin_; struct CRTableStructureMerge *__end_; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge *__value_; } __end_cap_; } merges;
@property (nonatomic) struct vector<std::vector<unsigned long>, std::allocator<std::vector<unsigned long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<unsigned long> *, std::allocator<std::vector<unsigned long>>> { void *__value_; } __end_cap_; } textLineIndexesForCells;
@property (nonatomic) struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } rectForCells;
@property (nonatomic) struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } rowsForCells;
@property (nonatomic) struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } columnsForCells;
@property (retain, nonatomic) CRNormalizedQuad *tableQuad;
@property (retain) CRTableStructureRecognizerResultProgram *program;
@property (nonatomic) struct CRTableStructureRecognizerResultParsed { unsigned long long numRows; unsigned long long numColumns; BOOL valid; struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } rowHeights; struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } columnWidths; struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge *__begin_; struct CRTableStructureMerge *__end_; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge *__value_; } __end_cap_; } merges; } parsedProgram;

- (id).cxx_construct;
- (void).cxx_destruct;

@end

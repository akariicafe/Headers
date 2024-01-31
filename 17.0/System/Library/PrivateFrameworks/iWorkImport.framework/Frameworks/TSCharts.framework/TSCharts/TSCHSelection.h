@class NSArray, TSCHChartDrawableInfo, NSSet, TSCHSelectionPath, TSCHSelectionPathType;

@interface TSCHSelection : TSKSelection

@property (readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo;
@property (readonly, copy, nonatomic) NSArray *paths;
@property (readonly, nonatomic) unsigned long long pathCount;
@property (readonly, copy, nonatomic) TSCHSelectionPath *firstPath;
@property (readonly, copy, nonatomic) TSCHSelectionPathType *pathType;
@property (readonly, copy, nonatomic) NSSet *pathTypes;
@property (readonly, nonatomic) BOOL returnChartFrameForAutoscroll;

+ (Class)archivedSelectionClass;
+ (id)emptySelectionWithChartInfo:(id)a0;
+ (id)selectionWithChartInfo:(id)a0 paths:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initFromArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithChartInfo:(id)a0 path:(id)a1;
- (id)initWithChartInfo:(id)a0 paths:(id)a1;
- (id)selectionByAddingPathsFromArray:(id)a0;
- (id)selectionByRemovingPathsFromArray:(id)a0;

@end

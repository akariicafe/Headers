@class NSMutableArray;

@interface TPSectionHint : NSObject

@property (readonly, nonatomic) NSMutableArray *pageHints;
@property (nonatomic) unsigned long long documentStartPageIndex;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } documentPageRange;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long pageCountWithoutFillerPage;
@property (readonly, nonatomic) unsigned long long lastPageIndex;

+ (BOOL)verifyHints:(id)a0 withBodyStorage:(id)a1 upToPageIndex:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyForArchiving;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (BOOL)containsDocumentPageIndex:(unsigned long long)a0;
- (id)copyForCaching;
- (BOOL)hasEndOfTextLayoutBeforePageIndex:(unsigned long long)a0;
- (BOOL)hasPageHintOfKind:(long long)a0 atPageIndex:(unsigned long long)a1;
- (BOOL)hasPageHintOfKind:(long long)a0 beforePageIndex:(unsigned long long)a1;
- (id)pageHintForPageIndex:(unsigned long long)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2 shouldArchiveHintBlock:(id /* block */)a3;
- (void)setPageHints:(id)a0;
- (void)trimPageHintsFromPageIndex:(unsigned long long)a0;

@end

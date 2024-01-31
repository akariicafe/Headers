@class NSArray, TPSectionHint, TPSection, TPPageIndexPath, NSString;

@interface PagesQuicklook.TPPaginationState : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ _pageIndexPath;
    void /* unknown type, empty encoding */ _documentPageIndex;
    void /* unknown type, empty encoding */ _lastLaidOutSectionIndex;
    void /* unknown type, empty encoding */ _bodyLayoutState;
    void /* unknown type, empty encoding */ _bodyCharIndex;
    void /* unknown type, empty encoding */ _footnoteIndex;
    void /* unknown type, empty encoding */ _sectionHints;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ bodyStorage;
@property (nonatomic) void /* unknown type, empty encoding */ isInvalid;
@property (nonatomic, retain) TPPageIndexPath *pageIndexPath;
@property (nonatomic) unsigned long long documentPageIndex;
@property (nonatomic) unsigned long long lastLaidOutSectionIndex;
@property (nonatomic) void *bodyLayoutState;
@property (nonatomic) unsigned long long bodyCharIndex;
@property (nonatomic) unsigned long long footnoteIndex;
@property (nonatomic, copy) NSArray *sectionHints;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, readonly) unsigned long long pageHintCount;
@property (nonatomic, readonly) unsigned long long lastLaidOutDocumentPageIndex;
@property (nonatomic, readonly) TPSection *section;
@property (nonatomic, readonly) TPSectionHint *sectionHint;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } sectionCharRange;
@property (nonatomic, readonly) BOOL onLastSection;
@property (nonatomic, readonly) BOOL isPaginationComplete;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (void)addSectionHint:(id)a0;
- (void)advancePageIndex;
- (void)advanceSectionIndex;
- (void)backUpToPageIndexPath:(id)a0 documentPageIndex:(unsigned long long)a1;
- (id)copyForCaching;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })footnoteRangeInBodyTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithBodyStorage:(id)a0;
- (BOOL)isPaginationCompleteThroughDocumentPageIndex:(unsigned long long)a0;
- (BOOL)isPaginationCompleteUpToDocumentPageIndex:(unsigned long long)a0;
- (id)pageHintForPageIndex:(unsigned long long)a0;
- (id)pageIndexPathForPageIndex:(unsigned long long)a0;
- (void)removeAllSectionHints;
- (void)restartPaginationFromFirstPage;
- (void)restartPaginationFromPageIndexPath:(id)a0 documentPageIndex:(unsigned long long)a1;
- (void)trimSectionHintsFromIndex:(unsigned long long)a0;

@end

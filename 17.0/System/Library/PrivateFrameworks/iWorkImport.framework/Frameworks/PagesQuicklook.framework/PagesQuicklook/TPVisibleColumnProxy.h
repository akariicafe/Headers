@class NSString, TPPaginatedPageController;
@protocol TSWPFlowInfo;

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {
    unsigned long long _pageIndex;
    id<TSWPFlowInfo> _flowInfo;
    TPPaginatedPageController *_pageController;
}

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } anchoredRange;
@property (readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property (readonly, nonatomic) BOOL terminatedByBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)startAnchoredCharIndex;
- (unsigned long long)startCharIndex;
- (void)trimToCharIndex:(unsigned long long)a0 inTarget:(id)a1 removeFootnoteReferenceCount:(unsigned long long)a2 removeAutoNumberFootnoteCount:(unsigned long long)a3;
- (id)initWithPageIndex:(unsigned long long)a0 pageController:(id)a1;
- (id)initWithPageIndex:(unsigned long long)a0 pageController:(id)a1 flowInfo:(id)a2;
- (id)p_targetFirstHint;
- (id)p_targetLastHint;

@end

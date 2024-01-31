@class NSTimer, TPPaginatedPageInfo;

@interface TPHeaderRep : TSWPHeaderRep

@property (retain, nonatomic) NSTimer *editingDidBeginTimer;
@property (readonly, nonatomic) TPPaginatedPageInfo *pageInfo;
@property (nonatomic) BOOL hideKnobs;

- (void).cxx_destruct;
- (id)pageLayout;
- (BOOL)p_isInDocumentSetup;
- (BOOL)p_isMiddleFooterRep;
- (BOOL)p_isMiddleHeaderRep;
- (BOOL)p_shouldCreateArrowKnobs;

@end

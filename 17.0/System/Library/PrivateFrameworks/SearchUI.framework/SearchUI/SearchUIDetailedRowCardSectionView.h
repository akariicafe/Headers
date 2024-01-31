@class NSString, SearchUIDetailedView, SearchUIDetailedRowModel;

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>

@property (retain, nonatomic) SearchUIDetailedView *contentView;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)setFeedbackDelegate:(id)a0;
- (id)leadingView;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (BOOL)configureMenuForFootnoteButton:(id)a0;
- (id)leadingTextView;
- (void)footnoteButtonPressed;
- (id)setupContentView;
- (id)findDescendentOfView:(id)a0 matchingClass:(Class)a1;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (id)viewForQuickLookZoomTransitionSource;

@end

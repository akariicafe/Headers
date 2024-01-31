@class SearchUIDetailedView;

@interface SearchUIHorizontallyScrollingDetailedRowButtonController : SearchUIHorizontallyScrollingContainerButtonController

@property (retain, nonatomic) SearchUIDetailedView *detailedView;

- (double)spacing;
- (void)setFeedbackDelegate:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)setCardSectionRowModel:(id)a0;

@end

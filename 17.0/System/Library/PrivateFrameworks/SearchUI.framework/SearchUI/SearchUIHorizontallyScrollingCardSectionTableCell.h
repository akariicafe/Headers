@class SearchUIHorizontallyScrollingContainerView;

@interface SearchUIHorizontallyScrollingCardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUIHorizontallyScrollingContainerView *sizingContainer;

- (void)setDelegate:(id)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end

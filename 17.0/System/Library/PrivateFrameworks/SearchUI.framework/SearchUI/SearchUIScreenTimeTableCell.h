@class SearchUIScreenTimeView;

@interface SearchUIScreenTimeTableCell : SearchUITableViewCell

@property (retain) SearchUIScreenTimeView *sizingContainer;

- (void)updateWithRowModel:(id)a0;
- (id)visibleResults;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end

@class TLKHeaderView;

@interface SearchUICenteredResultTableViewCell : SearchUITableViewCell

@property (retain, nonatomic) TLKHeaderView *sizingContainer;

- (void)updateWithRowModel:(id)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end

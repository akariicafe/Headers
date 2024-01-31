@class SearchUIButtonItemStackView;

@interface SearchUIButtonItemAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIButtonItemStackView *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupView;

@end

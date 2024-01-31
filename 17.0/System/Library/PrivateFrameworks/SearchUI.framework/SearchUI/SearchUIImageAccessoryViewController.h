@class SearchUIImageView;

@interface SearchUIImageAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIImageView *view;

+ (BOOL)resultIsLegacySiriAction:(id)a0;
+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (id)setupView;
- (BOOL)containsSymbolImage;

@end

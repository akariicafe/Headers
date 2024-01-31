@class SearchUIImageButton;

@interface SearchUIButtonViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageButton *view;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)buttonPressed;
- (unsigned long long)type;
- (id)setupView;
- (BOOL)shouldVerticallyCenter;

@end

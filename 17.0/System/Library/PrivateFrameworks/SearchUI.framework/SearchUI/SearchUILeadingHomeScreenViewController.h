@class SearchUIHomeScreenAppIconView, NSString;

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>

@property (retain, nonatomic) SearchUIHomeScreenAppIconView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)setFeedbackDelegate:(id)a0;
- (void)deleteIcon:(id)a0;
- (void)didUpdateKeyboardFocusToResult:(id)a0 cardSection:(id)a1;
- (unsigned long long)type;
- (id)setupView;
- (BOOL)shouldVerticallyCenter;

@end

@class PSSpecifier;

@interface SCLHistoryDayDataSource : SCLSpecifierDataSource

@property (retain, nonatomic) PSSpecifier *countSpecifier;
@property (retain, nonatomic) PSSpecifier *itemSpecifier;

- (void).cxx_destruct;
- (id)initWithListController:(id)a0 viewModel:(id)a1 historyGroup:(id)a2 title:(id)a3;

@end

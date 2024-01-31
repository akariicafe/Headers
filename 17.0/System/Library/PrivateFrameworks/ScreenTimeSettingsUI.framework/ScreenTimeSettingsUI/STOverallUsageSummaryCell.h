@class STUsageSummaryTitleView, STNoUsageDataView, STUsageGraphViewController;

@interface STOverallUsageSummaryCell : STTableCell

@property (readonly) STUsageSummaryTitleView *titleView;
@property (readonly) STUsageGraphViewController *weekGraphViewController;
@property (readonly) STNoUsageDataView *noUsageDataView;

- (void)dealloc;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)value;
- (void)setValue:(id)a0;
- (void)_hasMulitlineLayoutDidChangeFrom:(BOOL)a0 to:(BOOL)a1;
- (void)_setNoUsageDataViewVisibility;

@end

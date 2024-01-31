@class UIViewController;

@interface HKDataMetadataReportAccessSection : HKDataMetadataSection

@property (readonly, nonatomic) UIViewController *accessViewController;

- (void).cxx_destruct;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (id)initWithSample:(id)a0 healthStore:(id)a1 delegate:(id)a2;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end

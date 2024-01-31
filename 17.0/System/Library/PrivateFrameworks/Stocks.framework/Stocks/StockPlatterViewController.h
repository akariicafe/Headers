@class ChartUpdater, StockUpdateManager, StocksStyle, UITableView, UILabel, StockFetcher, UIButton, UIView, StocksLayout, NSString, StockChartView, Stock, StockManager, NetPreferences;

@interface StockPlatterViewController : UIViewController <StockChartViewDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *stocksTableView;
@property (retain, nonatomic) UIView *statusBarView;
@property (retain, nonatomic) NetPreferences *netPreferences;
@property (retain, nonatomic) StockUpdateManager *stockUpdateManager;
@property (retain, nonatomic) StockChartView *chartView;
@property (retain, nonatomic) ChartUpdater *chartUpdater;
@property (retain, nonatomic) StocksStyle *style;
@property (retain, nonatomic) Stock *stock;
@property (retain, nonatomic) StocksLayout *layout;
@property (retain, nonatomic) StockManager *stockManager;
@property (retain, nonatomic) UIButton *attributionButton;
@property (retain, nonatomic) UILabel *exchangeStatusLabel;
@property (retain, nonatomic) NSString *stockTicker;
@property (nonatomic) long long chartInterval;
@property (nonatomic) long long rowDataType;
@property (retain, nonatomic) StockFetcher *stockFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithStockTicker:(id)a0;
- (void)_attributionButtonPressed:(id)a0;
- (void)_setupStockWithTicker:(id)a0;
- (void)_updateExchangeData;
- (void)stockChartView:(id)a0 chartIntervalDidChange:(long long)a1;
- (BOOL)stockChartViewIsCurrentChartView:(id)a0;
- (void)stockChartViewNeedsLoadingStatusUpdated:(id)a0;
- (void)updateChartForInterval:(long long)a0 completion:(id /* block */)a1;

@end

@class Stock, StockChartData;
@protocol ChartUpdaterDelegate;

@interface ChartUpdater : YQLRequest {
    Stock *_stock;
    StockChartData *_currentChartData;
    id /* block */ _updateCompletionHandler;
}

@property (weak, nonatomic) id<ChartUpdaterDelegate> delegate;
@property (readonly) long long interval;

+ (id)_rangeStringForInterval:(long long)a0;

- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)failWithError:(id)a0;
- (BOOL)updateChartForStock:(id)a0 interval:(long long)a1;
- (void)didParseData;
- (id)dataSeries;
- (void)parseDataSeriesDictionary:(id)a0;
- (void)parseDataSeriesDictionary:(id)a0 interval:(long long)a1;
- (BOOL)updateChartForStock:(id)a0 interval:(long long)a1 withCompletion:(id /* block */)a2;

@end

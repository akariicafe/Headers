@interface StocksUI.StockChartViewController : UIViewController {
    void /* unknown type, empty encoding */ stock;
    void /* unknown type, empty encoding */ topDateRangePickerSeparator;
    void /* unknown type, empty encoding */ dateRangePicker;
    void /* unknown type, empty encoding */ lineChartViewController;
    void /* unknown type, empty encoding */ columnChartViewController;
    void /* unknown type, empty encoding */ interactionDisplayView;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ interactionHandler;
    void /* unknown type, empty encoding */ calloutViewProvider;
    void /* unknown type, empty encoding */ rangeCalloutViewProvider;
    void /* unknown type, empty encoding */ activeCallout;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ loadingState;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ errorView;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

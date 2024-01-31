@interface WFTriggerSuggestionViewController : UIViewController <UISearchResultsUpdating> {
    void /* unknown type, empty encoding */ trigger;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ searchController;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ selectedEntryMetadataData;
    void /* unknown type, empty encoding */ selectedReference;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (id)initWithTrigger:(id)a0 selectedEntryMetadataData:(id)a1 selectedReference:(id)a2;

@end

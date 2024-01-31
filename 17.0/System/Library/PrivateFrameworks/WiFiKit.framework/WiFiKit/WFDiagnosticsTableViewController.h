@class WFNetworkSettingsCellFactory, NSOrderedSet, WFHyperlinkFooterView, WFAppearanceProxy, NSDate, UITableViewCell;
@protocol WFDiagnosticsProviderContext, WFDetailsProviderContext;

@interface WFDiagnosticsTableViewController : WFInsetTableViewController

@property (retain, nonatomic) id<WFDiagnosticsProviderContext> context;
@property (retain, nonatomic) id<WFDetailsProviderContext> detailsContext;
@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNetworkSettingsCellFactory *cellFactory;
@property (retain, nonatomic) WFHyperlinkFooterView *linkFooterView;
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy;
@property (retain, nonatomic) WFHyperlinkFooterView *networkQualityFooterView;
@property (retain, nonatomic) NSDate *networkQualityFooterDate;
@property (retain, nonatomic) UITableViewCell *networkQualityCell;
@property (nonatomic) BOOL networkQualitySpinning;
@property (nonatomic) BOOL useInsetGroupedTableView;

- (void)_refresh;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)donePressed;
- (void)_updateNetworkQualityFooterText;
- (id)_defaultSections;
- (void)_fillNetworkQualityCell:(id)a0;
- (void)_networkQualityOpenURL;
- (void)_openNetworkQualityDetails:(id)a0;
- (void)_reloadNetworkQualityCell;
- (void)_runNetworkQuality;
- (id)initWithDiagnosticsContext:(id)a0 detailsProviderContext:(id)a1;
- (id)initWithDiagnosticsContext:(id)a0 detailsProviderContext:(id)a1 appearanceProxy:(id)a2;

@end

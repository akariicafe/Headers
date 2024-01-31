@class NSString, UIPrinterAttributesService, NSURL, NSArray, PKPrinter;

@interface UIPrinterUtilityTableViewController : UITableViewController

@property PKPrinter *pkPrinter;
@property (retain) NSString *printerWarning;
@property (retain) UIPrinterAttributesService *printerAttributesService;
@property long long printerNameAndLocationSection;
@property long long suppliesSection;
@property long long printerWebPageRow;
@property long long removeKeychainItemSection;
@property BOOL showIdentifyPrinterItem;
@property BOOL showRemoveKeychainItem;
@property (retain) NSURL *printerSuppliesInfoURL;
@property (retain) NSURL *printerWebPageURL;
@property BOOL suppliesCheckComplete;
@property (retain, nonatomic) NSArray *supplyData;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithPrinter:(id)a0;
- (void)reloadPrinterInfoViews;
- (void)startPrinterWarningPoll;
- (void)stopPrinterWarningPolling;

@end

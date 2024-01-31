@class NSString, NSArray, NSDictionary, UISegmentedControl, PHAssetCollection, UITableView;

@interface PXCMMDebugSharingSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
}

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) PHAssetCollection *sourceSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)generateSectionTitles:(out id *)a0 andTableContent:(out id *)a1 forIndex:(long long)a2 sourceSuggestion:(id)a3 sourceDictionary:(id)a4;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)_debugDictionary;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_closeAction:(id)a0;
- (void)_sendByEmailAction:(id)a0;
- (void)_switchLogsAction:(id)a0;
- (id)initWithSharingSuggestion:(id)a0;

@end

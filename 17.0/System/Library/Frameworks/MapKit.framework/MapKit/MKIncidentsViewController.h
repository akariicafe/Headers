@class NSArray, NSString, GEOComposedRouteAdvisory;
@protocol IncidentsViewControllerDelegate;

@interface MKIncidentsViewController : _MKTableViewController <IncidentExtendedDetailCellDelegate> {
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *transitIncidents;
@property (readonly, nonatomic) NSString *incidentsTitle;
@property (copy, nonatomic) GEOComposedRouteAdvisory *advisory;
@property (weak, nonatomic) id<IncidentsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_localeDidChange;
- (void)viewDidLoad;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updateTitle;
- (long long)_numberOfRowsInSection:(long long)a0;
- (id)_transitCellForIndex:(long long)a0 inSection:(long long)a1;
- (unsigned long long)_incidentsCount;
- (id)_advisoryItemCellForIndex:(long long)a0;
- (id)_cellForRow:(long long)a0 inSection:(long long)a1;
- (void)_compileSections;
- (long long)_sectionForSectionIndex:(long long)a0;
- (long long)_transitIncidentIndexForRow:(long long)a0 section:(long long)a1;
- (unsigned long long)_transitIncidentsCount;
- (void)cellDidTapDownloadForLocation:(id)a0;
- (id)detailCellInSection:(long long)a0;
- (id)extendedDetailCell;
- (void)infoCardThemeChanged;
- (id)initWithTransitIncidents:(id)a0;
- (void)reloadDataSource;

@end

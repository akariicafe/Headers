@class NSString, MKTransitItemReferenceDateUpdater, MKTransitItemIncidentsController, NSDate;
@protocol MUTransitLineIncidentsViewControllerDelegate, GEOTransitLineItem;

@interface MUTransitLineIncidentsViewController : UITableViewController <MKTransitItemReferenceDateUpdaterDelegate> {
    MKTransitItemIncidentsController *_incidentsController;
}

@property (readonly, nonatomic) id<GEOTransitLineItem> lineItem;
@property (readonly, copy, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) MKTransitItemReferenceDateUpdater *itemUpdater;
@property (weak, nonatomic) id<MUTransitLineIncidentsViewControllerDelegate> incidentsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_incidents;
- (id)initWithLineItem:(id)a0;
- (void)transitItemReferenceDateUpdater:(id)a0 didUpdateToReferenceDate:(id)a1;
- (id)_incidentCellForRow:(long long)a0;
- (void)_showIncidentDetails;
- (void)transitUIReferenceTimeUpdated:(id)a0;
- (void)updateTransitLineItemIfNeeded;

@end

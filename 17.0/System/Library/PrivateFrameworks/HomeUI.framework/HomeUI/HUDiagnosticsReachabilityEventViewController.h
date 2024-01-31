@class HMCameraProfile, NSString, HFCameraScrubberReachabilityEventContainer, UITableView;

@interface HUDiagnosticsReachabilityEventViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *eventTableView;
@property (retain, nonatomic) HFCameraScrubberReachabilityEventContainer *container;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithReachabilityEvent:(id)a0 cameraProfile:(id)a1;

@end

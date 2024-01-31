@class NSTimer, UIView, NSArray, PKTextInputDebugStateIntrospector, PKTextInputDebugLogController, PKTextInputElementsController, NSString, UIToolbar, UITableView, PKTextInputDebugTargetsView;
@protocol PKTextInputDebugViewControllerDelegate;

@interface PKTextInputDebugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PKTextInputDebugViewTableCellDelegate, PKTextInputDebugStateIntrospectorDelegate>

@property (retain, nonatomic) UIView *_statusContainerView;
@property (retain, nonatomic) UITableView *_statusTableView;
@property (retain, nonatomic) UIToolbar *_statusViewToolbar;
@property (retain, nonatomic) PKTextInputDebugTargetsView *_targetsContainerView;
@property (retain, nonatomic) NSArray *_statusViewPositionConstraints;
@property (nonatomic, setter=_setVisualizeTargets:) BOOL _visualizeTargets;
@property (nonatomic) BOOL _needsReloadData;
@property (nonatomic) BOOL _needsReloadTargetsVisualization;
@property (retain, nonatomic) NSTimer *_autoreloadTimer;
@property (retain, nonatomic) PKTextInputDebugStateIntrospector *introspectorDataSource;
@property (weak, nonatomic) id<PKTextInputDebugViewControllerDelegate> delegate;
@property (retain, nonatomic) PKTextInputDebugLogController *debugLogController;
@property (retain, nonatomic) PKTextInputElementsController *elementsController;
@property (nonatomic) unsigned long long statusViewAnchorCorner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_handleCloseButton:(id)a0;
- (void)_updateStatusView;
- (void)_updateTargetsVisualizationView;
- (void)_configureCell:(id)a0 forItemAtIndex:(long long)a1;
- (void)_handleAutoreloadTimerFired;
- (void)_handleLogButton:(id)a0;
- (void)_handleRadarButton:(id)a0;
- (void)_handleTargetsButton:(id)a0;
- (void)_reloadDebugStateData;
- (void)_reloadTargetsVisualization;
- (void)_setupStatusView;
- (void)debugStateIntrospectorContentDidChange:(id)a0;
- (void)debugViewTableCellDidTapDetailsButton:(id)a0;
- (void)setNeedsReloadDebugStateData;
- (void)setNeedsReloadTargetsVisualization;

@end

@class FBSDisplayMonitor, NSString, MRUMirroringController;

@interface MRUMirroringViewController : CCUIMenuModuleViewController <MRUMirroringControllerDelegate>

@property (retain, nonatomic) MRUMirroringController *controller;
@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor;
@property (nonatomic) BOOL showMoreExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)updateState;
- (void)viewDidLoad;
- (void)updateItems;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)updateFooter;
- (void).cxx_destruct;
- (BOOL)isConnectedToExternalDisplay;
- (void)stopMirroringDismissOnComplete:(BOOL)a0;
- (void)mirroringController:(id)a0 didChangeAvailableOutputDevices:(id)a1;
- (id)leadingImageForMenuItem:(id)a0;
- (void)mirroringController:(id)a0 didUpdateBusyIdenifiers:(id)a1;
- (void)mirroringController:(id)a0 didChangeOutputDevice:(id)a1;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)selectOutputDevice:(id)a0;

@end

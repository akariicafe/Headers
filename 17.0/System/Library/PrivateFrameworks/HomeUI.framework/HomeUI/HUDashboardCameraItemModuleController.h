@class NSString, NSMapTable, HUCameraController;

@interface HUDashboardCameraItemModuleController : HUItemModuleController <HUCameraControllerDelegate, HUItemModuleItemPresenting>

@property (retain, nonatomic) HUCameraController *cameraController;
@property (retain, nonatomic) NSMapTable *mapTable;
@property (nonatomic) long long cameraPresentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;
- (id)_cameraItemFor:(id)a0;
- (void)disableCameraSnapshotsForCells:(id)a0;
- (id)_cellLayoutOptions;
- (id)_detailsViewControllerForCameraItem:(id)a0;
- (void)_logInteractionEventOfType:(unsigned long long)a0 withItem:(id)a1;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)a0;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)a0 cameraClip:(id)a1 animated:(BOOL)a2;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)a0 startDate:(id)a1 endDate:(id)a2 animated:(BOOL)a3;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)a0 withConfiguration:(id)a1;
- (id)_sourceViewForPresentingCameraItem:(id)a0;
- (Class)collectionCellClassForItem:(id)a0;
- (id)detailsViewControllerForCameraItem:(id)a0;
- (void)didDismissCameraController:(id)a0 forProfile:(id)a1;
- (void)enableCameraSnapshotsForCells:(id)a0;
- (id)initWithModule:(id)a0 cameraPresentationStyle:(long long)a1;
- (id)presentCameraPlayerViewControllerForHomeKitObject:(id)a0 cameraClip:(id)a1 animated:(BOOL)a2;
- (id)presentCameraPlayerViewControllerForHomeKitObject:(id)a0 startDate:(id)a1 endDate:(id)a2 animated:(BOOL)a3;
- (id)presentItem:(id)a0 destination:(unsigned long long)a1 animated:(BOOL)a2;
- (id)targetViewForDismissingCameraProfile:(id)a0;

@end

@class PXPlacesMapController, NSString, PKExtendedTraitCollection;

@interface PXPlacesMapViewController : UIViewController <PXChangeObserver, PXPlacesMapControllerAccess>

@property (retain, nonatomic) PXPlacesMapController *mapController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PKExtendedTraitCollection *pk_extendedTraitCollection;

- (void)viewWillAppear:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnableLocationAuthorizationMonitoring:(BOOL)a0;
- (void)sendTraitNotification;

@end

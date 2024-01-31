@class CPEntity, NSMapTable, NSString, CPSBaseEntityContentViewController, CPSEntityResourceProvider;

@interface CPSEntityViewController : CPSBaseTemplateViewController <CPSEntityActionDelegate, CPEntityUpdateProviding>

@property (readonly, nonatomic) CPEntity *entity;
@property (readonly, nonatomic) CPSBaseEntityContentViewController *contentViewController;
@property (retain, nonatomic) NSMapTable *buttonMap;
@property (retain, nonatomic) CPSEntityResourceProvider *resourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setupViewControllers;
- (void)updateEntityTemplate:(id)a0 withProxyDelegate:(id)a1;
- (void)_viewDidLoad;
- (BOOL)entityContentViewController:(id)a0 didPressButton:(id)a1 forEntity:(id)a2;
- (BOOL)entityContentViewController:(id)a0 didPressButton:(id)a1 forPOI:(id)a2;
- (BOOL)entityContentViewController:(id)a0 didSelectPointOfInterestWithIdentifier:(id)a1;
- (BOOL)entityContentViewController:(id)a0 regionDidChange:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1;
- (id)entityTemplate;
- (id)entityTemplateDelegate;
- (id)initWithEntityTemplate:(id)a0 templateDelegate:(id)a1 templateEnvironment:(id)a2;
- (void)trailingBarButtonPressed:(id)a0;

@end

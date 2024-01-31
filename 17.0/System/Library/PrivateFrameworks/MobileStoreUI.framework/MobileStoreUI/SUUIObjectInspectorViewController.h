@class UITableView, NSString, UIVisualEffectView, _SUUIInspectablePropertySection, UIView, NSMutableArray, UINavigationBar;
@protocol SUUIInspectableObject;

@interface SUUIObjectInspectorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate, SUUIObjectInspector>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<SUUIInspectableObject> inspectableObject;
@property (retain, nonatomic) _SUUIInspectablePropertySection *currentSection;
@property (retain, nonatomic) NSMutableArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *information;

+ (void)showInspectableObject:(id)a0;

- (void)dismiss;
- (void)done:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupConstraints;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)beginSectionWithFriendlyName:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateContentViewFrameWithParentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTraitCollection:(id)a1;
- (void)endSection;
- (void)exposePropertyWithFriendlyName:(id)a0 value:(id)a1;
- (void)handleBackgroundTap:(id)a0;
- (id)initWithInspectableObject:(id)a0;
- (void)populate;
- (void)showFromViewController:(id)a0;

@end

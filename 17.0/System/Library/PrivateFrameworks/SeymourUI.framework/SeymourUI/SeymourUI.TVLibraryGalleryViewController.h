@class NSArray;

@interface SeymourUI.TVLibraryGalleryViewController : UIViewController {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ metricPageCategory;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ settlingTimer;
    void /* unknown type, empty encoding */ timerProvider;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end

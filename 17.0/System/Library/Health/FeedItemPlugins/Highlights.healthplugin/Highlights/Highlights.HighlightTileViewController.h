@class NSString;

@interface Highlights.HighlightTileViewController : UIViewController <HealthVisualization.UnitChangeObserving, HealthVisualization.SignificantTimeChangeObserving> {
    void /* unknown type, empty encoding */ baseIdentifier;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_healthStore;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ debug_textSupportVariantOverrideUpdateNotificationToken;
    void /* unknown type, empty encoding */ tileProvider;
}

@property (nonatomic, copy) NSString *title;

- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)significantTimeChangeDidOccur;
- (void)unitDidChange;
- (void)updateWithShouldUpdateContentView:(BOOL)a0;

@end

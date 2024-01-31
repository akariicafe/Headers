@class NSString;

@interface MenstrualCyclesAppPlugin.SummaryTileViewController : UIViewController {
    void /* unknown type, empty encoding */ valueLabel;
    void /* unknown type, empty encoding */ supplementaryValueLabel;
    void /* unknown type, empty encoding */ pillView;
    void /* unknown type, empty encoding */ valueLabelTopConstraint;
    void /* unknown type, empty encoding */ valueLabelBottomConstraint;
    void /* unknown type, empty encoding */ supplementaryLabelBottomConstraint;
    void /* unknown type, empty encoding */ pillViewHiddenConstraint;
    void /* unknown type, empty encoding */ relativeLabelHiddenConstraint;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, copy) NSString *title;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)significantTimeChangeDidOccur;
- (void)respondToTraitCollectionChanges;
- (void)userPreferredUnitChanged;

@end

@class NSArray;

@interface SeymourUI.TVSessionSummaryViewController : UIViewController {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ stringBuilder;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ footerView;
    void /* unknown type, empty encoding */ metricGridView;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ burnBarView;
    void /* unknown type, empty encoding */ activityRingsView;
    void /* unknown type, empty encoding */ upNextSummaryView;
    void /* unknown type, empty encoding */ queueCompleteView;
    void /* unknown type, empty encoding */ topPaddingLayoutGuide;
    void /* unknown type, empty encoding */ bottomPaddingLayoutGuide;
    void /* unknown type, empty encoding */ gridViewWidthConstraint;
    void /* unknown type, empty encoding */ gridViewBottomConstraint;
    void /* unknown type, empty encoding */ gridViewTopConstraint;
    void /* unknown type, empty encoding */ activityRingsTopPinningConstraint;
    void /* unknown type, empty encoding */ activityRingsBottomPinningConstraint;
    void /* unknown type, empty encoding */ burnBarTrailingConstraint;
    void /* unknown type, empty encoding */ burnBarLeadingConstraint;
    void /* unknown type, empty encoding */ burnBarTopConstraint;
    void /* unknown type, empty encoding */ activityRingsTopConstraint;
    void /* unknown type, empty encoding */ activityRingsTrailingConstraint;
    void /* unknown type, empty encoding */ summary;
    void /* unknown type, empty encoding */ additionalMetadata;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)menuButtonTapped;

@end

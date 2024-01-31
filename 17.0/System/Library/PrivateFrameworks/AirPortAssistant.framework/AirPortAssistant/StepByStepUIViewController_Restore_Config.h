@class UILabel, UIView;

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController {
    UILabel *restoreRecommendationLabel;
    UILabel *dontRestoreRecommendationLabel;
    BOOL dontRestore;
}

@property (retain, nonatomic) UIView *restoreRecommendationContainerView;
@property (retain, nonatomic) UIView *dontRestoreRecommendationContainerView;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void)setupInitialTableHeaderConfiguration;

@end

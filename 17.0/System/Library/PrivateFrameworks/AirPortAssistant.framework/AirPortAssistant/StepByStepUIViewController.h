@class NetTopoMiniStaticLayout, UIActivityIndicatorView, UILabel, UIView;

@interface StepByStepUIViewController : AssistantSubUIViewController

@property (retain, nonatomic) UIView *topoView;
@property (retain, nonatomic) NetTopoMiniStaticLayout *topoLayout;
@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (retain, nonatomic) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (retain, nonatomic) UIView *tableFooterContainerView;
@property (retain, nonatomic) UIView *spinnerWithStatusBelowView;
@property (retain, nonatomic) UILabel *spinnerWithStatusBelowLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
@property (nonatomic) int sbsMode;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void)stepByStepUpdateProgress:(id)a0 forState:(int)a1;
- (void)syncTopoUIForTarget:(id)a0 andSource:(id)a1 andNetwork:(id)a2 connectionType:(id)a3;

@end

@class NSProgress, WFCompactStopButton, WFDialogAttribution;

@interface WFCompactStatusViewController : WFCompactPlatterViewController

@property (readonly, nonatomic) WFCompactStopButton *stopButton;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) WFDialogAttribution *attribution;

- (void)loadView;
- (void).cxx_destruct;
- (void)popCompletedCheckmark;
- (void)transitionToCompleted:(BOOL)a0 animated:(BOOL)a1;

@end

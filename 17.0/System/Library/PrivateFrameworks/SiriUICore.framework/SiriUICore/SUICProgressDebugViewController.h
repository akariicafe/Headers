@class NSString, NSProgress, SUICProgressIndicatorViewController, SUICProgressStateMachine, UIButton;

@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource> {
    SUICProgressIndicatorViewController *_indicatorViewController;
    UIButton *_eventGeneratorButton;
    SUICProgressStateMachine *_stateMachine;
    unsigned long long _testEventLoopCounter;
}

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_eventGeneratorButtonTouchedUpInside:(id)a0;
- (id)stateMachineForProgressIndicatorViewController:(id)a0;

@end

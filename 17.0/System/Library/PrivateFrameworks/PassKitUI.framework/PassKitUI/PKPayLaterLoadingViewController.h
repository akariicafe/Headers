@interface PKPayLaterLoadingViewController : PKPayLaterSetupViewController {
    double _minimumDelayNanoSeconds;
    BOOL _didRequestNextViewController;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)_updateHeaderSubtitleWithAltTextIfNecessary;
- (id)additionalAnalyticsDictionary;
- (id)initWithSetupFlowController:(id)a0;

@end

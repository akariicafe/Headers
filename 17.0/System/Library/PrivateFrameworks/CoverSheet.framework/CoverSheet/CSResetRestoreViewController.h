@protocol CSResetRestoreStatusProviding;

@interface CSResetRestoreViewController : CSModalViewControllerBase {
    id<CSResetRestoreStatusProviding> _statusProvider;
}

- (long long)presentationPriority;
- (void)viewDidLoad;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)aggregateBehavior:(id)a0;
- (id)_currentTextForResetOrRestoreState;
- (id)initWithStatusProvider:(id)a0;

@end

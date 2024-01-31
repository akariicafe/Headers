@interface DDParsecYeaAction : DDParsecAction

- (void)report;
- (id)feedbackListener;
- (id)localizedName;
- (BOOL)hasUserInterface;
- (id)createViewController;
- (void)performFromView:(id)a0;
- (void)prepareViewControllerForActionController:(id)a0;
- (unsigned long long)relevancy;

@end

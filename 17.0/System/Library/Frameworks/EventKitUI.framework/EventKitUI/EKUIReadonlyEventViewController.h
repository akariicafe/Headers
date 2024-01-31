@interface EKUIReadonlyEventViewController : EKEventViewController

- (BOOL)wantsManagement;
- (void)willCommitPreview;
- (id)initWithEvent:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end

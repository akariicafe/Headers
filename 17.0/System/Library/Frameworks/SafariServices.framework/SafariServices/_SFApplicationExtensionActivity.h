@interface _SFApplicationExtensionActivity : UIApplicationExtensionActivity

@property (copy, nonatomic) id /* block */ customCompletionHandler;

- (void).cxx_destruct;
- (void)activityDidFinish:(BOOL)a0 items:(id)a1 error:(id)a2;
- (BOOL)validateExtensionHasSameContainerAsHostApp:(id)a0;

@end

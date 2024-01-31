@class NSString;

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate

@property (copy, nonatomic) NSString *action;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_legacyUnwindExecutorForTarget:(id)a0;
- (id)_perform:(id)a0;
- (id)_performWithDestinationViewController:(id)a0 sender:(id)a1;
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;
- (id)segueWithDestinationViewController:(id)a0;

@end

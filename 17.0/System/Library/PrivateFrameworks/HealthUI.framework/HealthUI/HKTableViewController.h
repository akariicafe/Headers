@interface HKTableViewController : UITableViewController {
    BOOL _useInsetStyling;
}

- (id)init;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithUsingInsetStyling:(BOOL)a0;

@end

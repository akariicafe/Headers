@interface VUIASCNavigationViewController : UINavigationController {
    void /* unknown type, empty encoding */ onFlowComplete;
}

- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithChannelDetails:(id)a0 punchoutAction:(id)a1 handleVPPA:(BOOL)a2 onFlowComplete:(id /* block */)a3;

@end

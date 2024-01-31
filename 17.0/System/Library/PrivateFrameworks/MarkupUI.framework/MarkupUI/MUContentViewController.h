@class AKController;
@protocol MUContentViewControllerDelegate;

@interface MUContentViewController : UIViewController

@property (weak) id<MUContentViewControllerDelegate> delegate;
@property (retain) AKController *annotationController;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 delegate:(id)a2;

@end

@class NSArray, NSMutableArray;
@protocol PURadioButtonGroupDelegate;

@interface PURadioButtonGroup : UIViewController

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id<PURadioButtonGroupDelegate> radioButtonDelegate;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) NSMutableArray *horizontalConstraints;
@property (retain, nonatomic) NSMutableArray *verticalConstraints;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_didSelectButton:(id)a0;
- (id)initWithImages:(id)a0 delegate:(id)a1;

@end

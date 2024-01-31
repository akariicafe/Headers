@class NSOperationQueue, NSArray, VSOptional;
@protocol VSSupportedAppsViewControllerDelegate;

@interface VSSupportedAppsViewController : UIViewController

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) NSArray *apps;
@property (retain, nonatomic) VSOptional *identityProvider;
@property (retain, nonatomic) NSArray *supportedApps;
@property (weak, nonatomic) id<VSSupportedAppsViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)_didFinish;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_presentError:(id)a0;
- (void)_displayApps;
- (void)_doneButtonPresed:(id)a0;
- (void)beginLoadingImages;

@end

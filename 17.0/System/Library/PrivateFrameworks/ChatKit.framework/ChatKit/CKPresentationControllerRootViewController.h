@interface CKPresentationControllerRootViewController : UIViewController

@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) BOOL restrictedToPortraitOrientation;

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end

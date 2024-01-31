@class NSString, UIViewController;

@interface SXViewControllerPresentingManager : NSObject <SXViewControllerPresenting, SWViewControllerPresentingManager>

@property (readonly, nonatomic) UIViewController *controller;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

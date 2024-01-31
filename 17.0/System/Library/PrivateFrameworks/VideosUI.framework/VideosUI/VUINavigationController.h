@class UITapGestureRecognizer, VUIDocumentUIConfiguration, NSString;

@interface VUINavigationController : VUIAppNavigationController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *gesture;
@property (retain, nonatomic) VUIDocumentUIConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end

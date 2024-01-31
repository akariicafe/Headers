@class NSExtension, NSString, ILClassificationRequest, UINavigationController, ILClassificationUIExtensionHostContext, ILClassificationExtensionShellViewController, ILClassificationReportingController, NSObject, ILClassificationResponse;
@protocol OS_dispatch_queue, ILClassificationUIExtensionHostViewControllerDelegate, NSCopying;

@interface ILClassificationUIExtensionHostViewController : UIViewController <ILClassificationUIExtensionHostContextDelegate, ILClassificationExtensionShellViewControllerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) ILClassificationRequest *classificationRequest;
@property (retain, nonatomic) ILClassificationResponse *classificationResponse;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) ILClassificationExtensionShellViewController *shellViewController;
@property (retain, nonatomic) ILClassificationUIExtensionHostContext *extensionHostContext;
@property (readonly, nonatomic) ILClassificationReportingController *reportingController;
@property (weak, nonatomic) id<ILClassificationUIExtensionHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)activateExtensionWithCompletion:(id /* block */)a0;
- (id)initUnactivatedVCWithRequest:(id)a0 sender:(id)a1 isoCountryCode:(id)a2;
- (void)launchSettings;
- (void)blockNumber:(id)a0 withCountryCode:(id)a1;
- (void)context:(id)a0 didBecomeReadyForClassificationResponse:(BOOL)a1;
- (void)didCompleteClassificationRequestWithResponse:(id)a0;
- (id)initWithClassificationRequest:(id)a0 sender:(id)a1 isoCountryCode:(id)a2;
- (id)logErrorWithMessage:(id)a0;
- (void)presentBlockAlertWithCompletion:(id /* block */)a0;
- (void)userDidCancelForExtensionShellViewController:(id)a0;
- (void)userDidFinishForExtensionShellViewController:(id)a0;

@end

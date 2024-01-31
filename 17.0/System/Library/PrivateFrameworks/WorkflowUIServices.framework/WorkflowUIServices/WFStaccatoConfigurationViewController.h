@class WFConfiguredStaccatoAction, NSString, _UIRemoteViewController, NSExtension;
@protocol WFStaccatoConfigurationViewControllerDelegate, NSCopying;

@interface WFStaccatoConfigurationViewController : UIViewController <_UIRemoteViewControllerContaining, WFStaccatoConfigurationRemoteViewControllerDelegate>

@property (weak, nonatomic) _UIRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> extensionRequest;
@property (copy, nonatomic) NSString *configurationContext;
@property (weak, nonatomic) id<WFStaccatoConfigurationViewControllerDelegate> delegate;
@property (retain, nonatomic) WFConfiguredStaccatoAction *selectedAction;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)loadRemoteViewController;
- (void)configurationController:(id)a0 didFinishWithAction:(id)a1 error:(id)a2;
- (id)initWithConfigurationContext:(id)a0;
- (void)installRemoteViewController:(id)a0 extension:(id)a1 extensionRequest:(id)a2;

@end

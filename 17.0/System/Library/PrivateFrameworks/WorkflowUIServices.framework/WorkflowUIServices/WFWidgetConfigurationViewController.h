@class NSExtension, UIViewController, NSString, WFWidgetConfigurationLoadingContentViewController, WFWidgetConfigurationRequest, WFWidgetConfigurationRemoteViewController, _UIRemoteViewController, WFWidgetConfigurationView;
@protocol WFWidgetConfigurationViewControllerDelegate, WFWidgetConfigurationContainerViewControllerProtocol, NSCopying;

@interface WFWidgetConfigurationViewController : UIViewController <_UIRemoteViewControllerContaining, WFWidgetConfigurationRemoteViewControllerDelegate, WFWidgetConfigurationContainerViewControllerProtocolDelegate>

@property (readonly, nonatomic) WFWidgetConfigurationRequest *request;
@property (readonly, nonatomic) UIViewController<WFWidgetConfigurationContainerViewControllerProtocol> *containerViewController;
@property (readonly, nonatomic) WFWidgetConfigurationLoadingContentViewController *loadingContentViewController;
@property (retain, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> extensionRequest;
@property (readonly, nonatomic) WFWidgetConfigurationView *configurationView;
@property (weak, nonatomic) id<WFWidgetConfigurationViewControllerDelegate> delegate;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)finishWithCurrentConfiguration;
- (void)installRemoteViewController:(id)a0;
- (void)loadWidgetConfigurationRemoteViewController;
- (void)setRemoteViewController:(id)a0 extension:(id)a1 extensionRequest:(id)a2;
- (void)showErrorMessage;
- (void)widgetConfigurationContainerViewControllerDidRequestToClose:(id)a0;
- (void)widgetConfigurationRemoteViewController:(id)a0 didReceiveConfiguredIntent:(id)a1;
- (void)widgetConfigurationRemoteViewController:(id)a0 preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a1;

@end

@class WFConfiguredStaccatoAction;
@protocol WFStaccatoConfigurationRemoteViewControllerDelegate;

@interface WFStaccatoConfigurationRemoteViewController : _UIRemoteViewController <WFStaccatoConfigurationServiceHostProtocol>

@property (weak, nonatomic) id<WFStaccatoConfigurationRemoteViewControllerDelegate> delegate;
@property (retain, nonatomic) WFConfiguredStaccatoAction *selectedAction;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)didCancelStaccatoConfiguration:(id)a0;
- (void)didSelectStaccatoAction:(id)a0;

@end

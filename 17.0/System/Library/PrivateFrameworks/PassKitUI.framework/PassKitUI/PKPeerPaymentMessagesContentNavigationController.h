@class NSString, PKPeerPaymentMessagesAppViewController, PKPeerPaymentMessagesContentView;

@interface PKPeerPaymentMessagesContentNavigationController : PKNavigationController <PKPeerPaymentMessagesContentProtocol>

@property (readonly, weak, nonatomic) PKPeerPaymentMessagesAppViewController *appController;
@property (readonly, nonatomic) PKPeerPaymentMessagesContentView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMessagesAppController:(id)a0;
- (void)reloadContent;

@end

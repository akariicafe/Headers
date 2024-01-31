@class NSString, PKPeerPaymentMessagesAppViewController, PKPeerPaymentMessagesContentView;

@interface PKPeerPaymentMessagesContentBaseViewController : UIViewController <PKPeerPaymentMessagesContentProtocol>

@property (readonly, weak, nonatomic) PKPeerPaymentMessagesAppViewController *appController;
@property (readonly, nonatomic) PKPeerPaymentMessagesContentView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithMessagesAppController:(id)a0;
- (void)reloadContent;

@end

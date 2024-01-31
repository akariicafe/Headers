@class NSArray, NSString, UIActivity;
@protocol PKInterceptableActivityViewControllerDelegate;

@interface PKInterceptableActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate> {
    UIActivity *_defferedActivity;
    BOOL _isSendingOverAirdrop;
    NSString *_airdropRecipientName;
    NSString *_airdropRecipientContactIdentifier;
}

@property (weak, nonatomic) id<PKInterceptableActivityViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *allowedActivityTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setItems:(id)a0;
- (void)_performActivity:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setExcludedActivityTypes:(id)a0;
- (void)activityViewController:(id)a0 willStartAirdropTransferToRecipient:(id)a1 contactIdentifier:(id)a2;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)a0;
- (void)activityViewControllerWillStartAirdropTransfer:(id)a0;
- (void)handleInterceptedShareActivity;
- (id)initWithItems:(id)a0 delegate:(id)a1;
- (id)initWithItems:(id)a0 peopleSuggestionBundleIds:(id)a1 delegate:(id)a2;
- (id)selectedRecipientWithOutContactIdentifier:(id *)a0;

@end

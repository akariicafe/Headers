@class LPLinkMetadata, NSString, MFMessageComposeViewController, NSArray, FAInviteContext, FAInviteRecipientEvaluator, UIViewController;
@protocol FAInviteControllerDelegate;

@interface FAMessagesInviteConfigurationController : NSObject <MFMessageComposeViewControllerInternalDelegate, FAInviteConfigurationController> {
    MFMessageComposeViewController *_messageComposeViewController;
    LPLinkMetadata *_linkMetadata;
    UIViewController *_presentationContext;
    NSArray *_recipientAddresses;
    NSString *_familySuggestionHandle;
    FAInviteRecipientEvaluator *_inviteRecipientEvaluator;
}

@property (class, readonly) BOOL isAvailable;

@property (readonly, nonatomic) FAInviteContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FAInviteControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)_messageComposeViewController;
- (void)messageComposeViewController:(id)a0 shouldSendMessage:(id)a1 toRecipients:(id)a2 completion:(id /* block */)a3;
- (void)presentWhenReadyWithCompletion:(id /* block */)a0;
- (void)_presentInviteControllerWithCompletion:(id /* block */)a0;
- (id)initWithInviteContext:(id)a0 presentingController:(id)a1;
- (id)initWithInviteContext:(id)a0 presentingController:(id)a1 familySuggestionHandle:(id)a2;

@end

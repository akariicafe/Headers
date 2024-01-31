@class LPLinkMetadata, NSString, MFMessageComposeViewController, NSArray, AAMessagesInviteContext, UIViewController;
@protocol AAUIInviteControllerDelegate;

@interface AAUIMessagesInviteConfigurationController : NSObject <MFMessageComposeViewControllerInternalDelegate, AAUIOBWelcomeControllerDelegate, AAUIInviteConfigurationController> {
    unsigned long long _flow;
    MFMessageComposeViewController *_messageComposeViewController;
    LPLinkMetadata *_linkMetadata;
    UIViewController *_presentingViewController;
    NSArray *_recipientAddresses;
}

@property (class, readonly) BOOL isAvailable;

@property (readonly, nonatomic) AAMessagesInviteContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUIInviteControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)_messageComposeViewController;
- (void)messageComposeViewController:(id)a0 shouldSendMessage:(id)a1 toRecipients:(id)a2 completion:(id /* block */)a3;
- (void)presentWhenReadyWithCompletion:(id /* block */)a0;
- (id)_bubbleImageForFlow:(unsigned long long)a0;
- (void)_presentInviteControllerWithCompletion:(id /* block */)a0;
- (id)initWithInviteContext:(id)a0 flow:(unsigned long long)a1 presentingController:(id)a2;

@end

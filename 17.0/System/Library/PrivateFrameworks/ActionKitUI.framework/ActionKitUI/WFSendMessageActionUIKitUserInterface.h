@class NSArray, NSString;

@interface WFSendMessageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFSendMessageActionUserInterface, MFMessageComposeViewControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *files;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithRecipients:(id)a0 content:(id)a1 attachments:(id)a2 completionHandler:(id /* block */)a3;
- (void)showWithRecipients:(id)a0 content:(id)a1 files:(id)a2 completionHandler:(id /* block */)a3;

@end

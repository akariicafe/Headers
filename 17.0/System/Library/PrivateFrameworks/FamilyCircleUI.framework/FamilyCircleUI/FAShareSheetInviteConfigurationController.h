@class NSString, NSArray, FAInviteLinkMetadata, FAInviteContext, UIViewController;
@protocol FAInviteControllerDelegate;

@interface FAShareSheetInviteConfigurationController : NSObject <UIActivityItemSource, FAActivityViewControllerDelegate, FAInviteConfigurationController> {
    FAInviteContext *_context;
    FAInviteLinkMetadata *_linkMetadata;
    UIViewController *_presentationContext;
    NSArray *_recipientAddresses;
    id /* block */ _activityControllerCompletionHandler;
}

@property (nonatomic) BOOL alwaysNotifyServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FAInviteControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void)presentWhenReadyWithCompletion:(id /* block */)a0;
- (void)_presentInviteControllerWithCompletion:(id /* block */)a0;
- (id)_parameterForActivityType:(id)a0;
- (void)activityViewController:(id)a0 didCompleteActivityType:(id)a1;
- (void)activityViewController:(id)a0 willStartAsyncActivity:(id)a1;
- (id)initWithInviteContext:(id)a0 presentingController:(id)a1;
- (id)linkMetadataForActivityViewController:(id)a0;

@end

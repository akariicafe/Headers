@class IAMWebMessageController, NSString, ICInAppMessageEntry, NSURL;
@protocol IAMWebMessagePresentationCoordinatorDelegate;

@interface IAMWebMessagePresentationCoordinator : NSObject <IAMWebMessageControllerDelegate, IAMViewControllerMetricsDelegate> {
    NSURL *_webArchiveURL;
    id /* block */ _modalViewControllerDismissedCompletion;
}

@property (retain, nonatomic) IAMWebMessageController *webMessageController;
@property (retain, nonatomic) ICInAppMessageEntry *webMessageEntry;
@property (weak, nonatomic) id<IAMWebMessagePresentationCoordinatorDelegate> delegate;
@property (nonatomic) BOOL isPresenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)load;
- (BOOL)present;
- (id)presentingViewController;
- (void).cxx_destruct;
- (void)_handleOpenURL:(id)a0;
- (void)_dismissModalViewController:(id /* block */)a0;
- (void)_handleWebMessageDismissed;
- (void)_modalViewControllerDismissalTransitionDidEnd:(id)a0;
- (id)initWithWebMessageEntry:(id)a0 webArchiveURL:(id)a1;
- (void)viewController:(id)a0 didReportDismissalAction:(long long)a1;
- (void)webMessageControllerWebViewDidReportEvent:(id)a0 event:(id)a1;
- (void)webMessageControllerWebViewDidRequestAction:(id)a0 actionConfiguration:(id)a1 options:(id)a2;
- (void)webMessageControllerWebViewDidRequestClose:(id)a0;
- (void)webMessageControllerWebViewDidRequestOpenURL:(id)a0 url:(id)a1 options:(id)a2;

@end

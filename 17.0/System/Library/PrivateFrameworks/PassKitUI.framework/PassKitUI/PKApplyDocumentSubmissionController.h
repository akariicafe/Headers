@class PKBusinessChatController, PKApplyDocumentUploadPage, PKApplyController, UIViewController;

@interface PKApplyDocumentSubmissionController : PKPaymentDocumentSubmissionController {
    PKApplyController *_applyController;
    UIViewController *_nextViewController;
    PKBusinessChatController *_businessChatController;
    PKApplyDocumentUploadPage *_documentPage;
    BOOL _isLoading;
    BOOL _isCancelling;
}

- (void)uploadID;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeApplicationUpdateObserver;
- (void)_cancelledConfirmed;
- (void)_featureApplicationUpdated;
- (void)contactApplePressed;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 documentPage:(id)a2;
- (id)nextViewController;
- (void)reportAnalyticsEvent:(id)a0 pageTag:(id)a1;
- (void)userWantsToCancel;

@end

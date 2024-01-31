@class BrowserController, TabDocument, NSTimer;

@interface UserActivityController : NSObject {
    NSTimer *_tabCreationDelayTimer;
}

@property (readonly, weak, nonatomic) BrowserController *browserController;
@property (weak, nonatomic) TabDocument *tabDocumentPendingUserActivityPayload;

- (BOOL)continueUserActivity:(id)a0;
- (id)initWithBrowserController:(id)a0;
- (void)_invalidateTabCreationDelayTimer;
- (void)didFailToContinueUserActivityWithType:(id)a0 error:(id)a1;
- (id)_tabDocumentWithURL:(id)a0;
- (BOOL)willContinueUserActivityWithType:(id)a0;
- (void)_prepareTabDocumentForNewUserActivityWithDelay:(double)a0;
- (void).cxx_destruct;
- (void)_prepareTabDocumentForNewUserActivity;

@end

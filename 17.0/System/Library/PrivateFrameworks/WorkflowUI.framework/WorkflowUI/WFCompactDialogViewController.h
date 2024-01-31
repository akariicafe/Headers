@class NSArray, WFDialogRequest, WFCompactDialogAction;
@protocol WFCompactDialogViewControllerDelegate;

@interface WFCompactDialogViewController : WFCompactPlatterViewController

@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) WFCompactDialogAction *preferredAction;
@property (retain, nonatomic) WFCompactDialogAction *cancelAction;
@property (weak, nonatomic) id<WFCompactDialogViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDialogRequest *request;

- (void)cancelKeyPressed;
- (void)loadView;
- (id)keyCommands;
- (id)initWithRequest:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)prepareForPresentationWithCompletionHandler:(id /* block */)a0;
- (BOOL)canHandleFollowUpRequest:(id)a0;
- (void)configureActionGroupWithActions:(id)a0;
- (void)doneKeyPressed;
- (void)finishWithResponse:(id)a0;
- (void)finishWithResponse:(id)a0 waitForFollowUpRequest:(BOOL)a1;
- (void)handleFollowUpRequest:(id)a0;
- (void)systemDismissedBanner;

@end

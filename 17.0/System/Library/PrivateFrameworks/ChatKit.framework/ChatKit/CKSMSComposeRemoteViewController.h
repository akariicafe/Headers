@class NSString;
@protocol CKSMSComposeRemoteViewControllerDelegate;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate>

@property (weak, nonatomic) id<CKSMSComposeRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)dealloc;
- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerEntryViewContentInserted;
- (void)smsComposeControllerSendStartedWithText:(id)a0 messageGUID:(id)a1;
- (void)smsComposeControllerShouldSendMessageWithText:(id)a0 toRecipients:(id)a1 completion:(id /* block */)a2;

@end

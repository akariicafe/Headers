@class NSString, NSMutableArray;

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate> {
    NSMutableArray *_alerts;
    NSMutableArray *_dialogs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)presentDialog:(id)a0;
- (void).cxx_destruct;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)alertViewCancel:(id)a0;
- (void)_performActionForDialog:(id)a0 buttonIndex:(long long)a1;
- (void)presentDialog:(id)a0 fromViewController:(id)a1;

@end

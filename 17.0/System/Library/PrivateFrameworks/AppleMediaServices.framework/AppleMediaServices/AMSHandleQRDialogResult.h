@interface AMSHandleQRDialogResult : NSObject

+ (id)_dismissalIdentifierFromDialogResult:(id)a0;
+ (BOOL)_isDismissQRDialogEnabled;
+ (void)_observeQRDialogDismissalNotificationForIdentifier:(id)a0 dialog:(id)a1;
+ (void)_removeQRDialogDismissalObserverForIdentifier:(id)a0;
+ (void)handleQRDialogPresentationForRequest:(id)a0 result:(id)a1 logKey:(id)a2;

@end

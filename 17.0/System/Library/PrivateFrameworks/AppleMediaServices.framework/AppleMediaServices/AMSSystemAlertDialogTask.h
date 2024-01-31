@class AMSDialogResult, AMSDialogRequest;

@interface AMSSystemAlertDialogTask : AMSTask

@property (retain, nonatomic) AMSDialogResult *autoDismissResult;
@property long long defaultButtonIndex;
@property BOOL dismissOnHomeButton;
@property BOOL dismissOnLock;
@property BOOL shouldDismissAfterUnlock;
@property BOOL shouldDisplayAsTopMost;
@property BOOL shouldPendInSetupIfNotAllowed;
@property BOOL displaysOnLockscreen;
@property long long unlockActionButtonIndex;
@property struct __CFUserNotification { } *userNotification;
@property BOOL isDialogDismissalEnabled;
@property (readonly, nonatomic) AMSDialogRequest *request;

- (id)present;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)_dismiss;
- (struct __CFDictionary { } *)_createNoteDictionaryWithKeys:(struct ButtonKey { struct __CFString *x0; int x1; } *)a0 buttonActions:(id)a1 outOptions:(unsigned long long *)a2;
- (long long)_defaultButtonIndexForActions:(id)a0;
- (id)_handleResponseForNote:(struct __CFUserNotification { } *)a0 buttonActions:(id)a1 keys:(struct ButtonKey { struct __CFString *x0; int x1; } *)a2;
- (long long)_keyboardTypeFor:(long long)a0;
- (id)_reorderButtonActions;
- (struct __CFUserNotification { } *)_showNotificationFromDictionary:(struct __CFDictionary { } *)a0 options:(unsigned long long)a1;

@end

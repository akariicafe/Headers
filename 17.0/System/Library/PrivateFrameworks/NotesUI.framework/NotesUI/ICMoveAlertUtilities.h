@interface ICMoveAlertUtilities : NSObject

+ (void)postAlertForFolderDepthLimitWithPresentingViewController:(id)a0 completionHandler:(id /* block */)a1;
+ (void)postAlertForMovingFolderWithSharedNotes:(id)a0 sharedSubfolders:(id)a1 destination:(id)a2 presentingViewController:(id)a3 shareHandler:(id /* block */)a4 cancelHandler:(id /* block */)a5;
+ (void)postAlertForMovingLockedNotesToOtherAccountIsCopy:(BOOL)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
+ (void)postAlertForMovingLockedOrSingleJoinedNotesToSharedFolderWithCountOfNotes:(unsigned long long)a0 guiltyObjects:(id)a1 presentingViewController:(id)a2 completionHandler:(id /* block */)a3;
+ (void)postAlertForMovingNotesContainingSharedNotesToSharedFolder:(id)a0 destination:(id)a1 presentingViewController:(id)a2 shareHandler:(id /* block */)a3 cancelHandler:(id /* block */)a4;
+ (void)postAlertForMovingSharedNotesToAnotherAccountWithPresentingViewController:(id)a0 completionHandler:(id /* block */)a1;
+ (void)postAlertForMovingSmartFolderWithRestrictedFilterToLocalAccount:(id)a0 presentingViewController:(id)a1;
+ (void)postAlertForOwnerStoppedSharingCurrentFolderWithPresentingViewController:(id)a0 completionHandler:(id /* block */)a1;
+ (void)postAlertForSharingFolderContainingLockedOrJoinedRootObjectsWithGuiltyObjects:(id)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
+ (void)postAlertForSharingFolderWithSharedNotes:(id)a0 sharedSubfolders:(id)a1 presentingViewController:(id)a2 shareHandler:(id /* block */)a3 cancelHandler:(id /* block */)a4;
+ (void)postAlertForUnsupportedAttachmentsInLegacyAccount:(id)a0 presentingViewController:(id)a1;
+ (void)postAlertWithOKButtonWithTitle:(id)a0 message:(id)a1 presentingViewController:(id)a2 completionHandler:(id /* block */)a3;
+ (void)postAlertWithProceedAndCancelButtonsWithTitle:(id)a0 message:(id)a1 proceedTitle:(id)a2 presentingViewController:(id)a3 proceedHandler:(id /* block */)a4 cancelHandler:(id /* block */)a5;
+ (void)setSuppressesAlerts:(BOOL)a0;
+ (BOOL)suppressesAlerts;

@end

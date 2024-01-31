@class NSString;

@interface ICPasswordUtilities : NSObject

@property (class, readonly, nonatomic) ICPasswordUtilities *sharedInstance;

@property (nonatomic) BOOL isShowingDivergedDialogue;
@property (retain, nonatomic) NSString *divergedAccountPassword;
@property (retain, nonatomic) id displayedSheet;

+ (BOOL)deviceHasPasscode;
+ (id)imageForCurrentDecryptedStatusForNote:(id)a0;

- (void).cxx_destruct;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)a0 withNote:(id)a1;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)a0 account:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPasswordSetUpSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showUpdateDivergedPasswordForAccountPassword:(id)a0 oldPassword:(id)a1 account:(id)a2 displayWindow:(id)a3;

@end

@class ISDialog, NSURL, ISDialogButton, NSNumber, SSAuthenticationContext;

@interface ISServerAuthenticationOperation : ISOperation

@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) NSURL *redirectURL;
@property (retain) ISDialogButton *selectedButton;
@property (retain) ISDialogButton *performedButton;
@property (retain) SSAuthenticationContext *authenticationContext;
@property (retain) ISDialog *dialog;
@property BOOL performsButtonAction;
@property unsigned long long authenticatedAccountCredentialSource;

- (id)init;
- (void)run;
- (void)dealloc;

@end

@interface SYDocumentWorkflowsCloseConfirmationSettings : NSObject {
    long long _registrationToken;
    BOOL _didRegisterConfirmationDialogNotifier;
}

- (void)dealloc;
- (void)registerCustomCloseConfirmationSettings;

@end

@interface GameCenterUI.GameCenterSignInActionImplementation : NSObject <AAUISignInControllerDelegate> {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ signInViewController;
    void /* unknown type, empty encoding */ currentActionOutcome;
}

- (id)init;
- (void).cxx_destruct;
- (void)signInController:(id)a0 didCompleteWithSuccess:(BOOL)a1 error:(id)a2;
- (void)signInControllerDidCancel:(id)a0;

@end

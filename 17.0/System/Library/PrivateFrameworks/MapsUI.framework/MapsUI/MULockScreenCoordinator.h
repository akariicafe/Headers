@interface MULockScreenCoordinator : NSObject {
    id /* block */ _passcodeProvider;
}

- (void).cxx_destruct;
- (id)initWithPasscodeProvider:(id /* block */)a0;
- (void)performActionIfSuccessfullyAuthenticated:(id /* block */)a0;

@end

@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {
    NSString *_identifier;
    SBFAuthenticationAssertion *_disableLockAssertion;
}

+ (void)initialize;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;

@end

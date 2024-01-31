@class NSString, SBFAuthenticationAssertionTracker;

@interface SBFAuthenticationAssertionManager : NSObject <BSDescriptionProviding> {
    SBFAuthenticationAssertionTracker *_preventLockTracker;
    SBFAuthenticationAssertionTracker *_transientTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAssertion:(id)a0;
- (id)init;
- (void)removeAssertion:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isAssertionValid:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasActiveAssertions;
- (id)succinctDescription;

@end

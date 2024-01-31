@class NSDictionary, PKAuthenticatorEvaluationContext;
@protocol PKAuthenticatorDelegate;

@interface PKAuthenticator : NSObject {
    unsigned long long _authenticationIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
    PKAuthenticatorEvaluationContext *_context;
}

@property (weak, nonatomic) id<PKAuthenticatorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long authenticationIdentifier;
@property (readonly, nonatomic) long long evaluationState;
@property (readonly, nonatomic) long long coachingState;
@property (readonly, nonatomic) BOOL fingerPresent;
@property (readonly, nonatomic) BOOL passcodeActive;
@property (readonly, nonatomic) BOOL passphraseActive;
@property (readonly, nonatomic) BOOL passcodeWasPresented;
@property (copy, nonatomic) NSDictionary *clientAnalyticsParameters;

+ (BOOL)canPerformPSD2StyleBuyForAccessControlRef:(struct __SecAccessControl { } *)a0;
+ (long long)userIntentStyle;
+ (BOOL)isUserIntentAvailableWithStyle:(long long)a0;
+ (unsigned long long)cachedStateForPolicy:(long long)a0;
+ (unsigned long long)currentStateForAccessControl:(struct __SecAccessControl { } *)a0;
+ (unsigned long long)currentStateForPolicy:(long long)a0;
+ (void)removeUserIntentAvailable;
+ (void)resetSharedRootContextWithCompletion:(id /* block */)a0;
+ (id)viewServiceBundleID;
+ (unsigned long long)_currentStateForMechanisms:(id)a0;
+ (BOOL)_isAccessibilityUserIntentEnabled;
+ (void)preheatAuthenticator;

- (id)init;
- (void)dealloc;
- (id)_context;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)evaluateRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)accessExternalizedContextWithCompletion:(id /* block */)a0;
- (void)cancelEvaluation;
- (void)cancelEvaluationWithOptions:(unsigned long long)a0;
- (void)fallbackToSystemPasscodeUI;
- (void)restartEvaluation;
- (BOOL)_delegateSupportsPasscodePresentation;
- (BOOL)_delegateSupportsPassphrasePresentation;
- (void)_evaluateEvaluationContext:(id)a0;
- (void)_handleInstructionsForRequest:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)_optionsForEvaluationRequest:(id)a0 withEvaluationContext:(id)a1;
- (id)_swapContext:(id)a0;
- (id)_swapContext:(id)a0 withOptions:(unsigned long long)a1;

@end

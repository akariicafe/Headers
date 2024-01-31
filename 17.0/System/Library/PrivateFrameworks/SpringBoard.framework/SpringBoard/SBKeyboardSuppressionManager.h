@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject {
    NSMutableDictionary *_keyboardSuppressionAssertions;
}

+ (id)sharedInstance;

- (void)_setKeyboardSuppressed:(BOOL)a0 forReason:(id)a1 withPredicate:(id /* block */)a2 displayIdentity:(id)a3;
- (id)init;
- (void)stopSuppressingKeyboardWithReason:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)startSuppressingKeyboardWithReason:(id)a0 predicate:(id /* block */)a1 displayIdentity:(id)a2;
- (id)acquireKeyboardSuppressionAssertionWithReason:(id)a0 predicate:(id /* block */)a1 displayIdentity:(id)a2;

@end

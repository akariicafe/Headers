@class _EXBDisplayAssertionStack, FBSDisplayIdentity;
@protocol EXBDisplayAssertionDelegate;

@interface EXBDisplayAssertion : NSObject {
    _EXBDisplayAssertionStack *_assertionStack;
    id<EXBDisplayAssertionDelegate> _delegate;
    BOOL _invalidated;
    BOOL _invalidatedByClient;
    BOOL _hasControlOfDisplay;
    unsigned long long _receivedDeactivationReasons;
}

@property (readonly, nonatomic) FBSDisplayIdentity *rootDisplayIdentity;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic) unsigned long long deactivationReasonsWhenActive;
@property (readonly, nonatomic) BOOL hasControlOfDisplay;

- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_didGainControlOfDisplay;
- (void)_didInvalidateForDisplayDisconnect;
- (void)_didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)a0;
- (void)_didReceiveNewDeactivationReasons:(unsigned long long)a0;
- (id)_initWithPhysicalDisplay:(id)a0 level:(unsigned long long)a1 deactivationReasons:(unsigned long long)a2 assertionStack:(id)a3 delegate:(id)a4;
- (void)updateWithPreferences:(id)a0;

@end

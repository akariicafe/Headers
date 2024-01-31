@class NSString, HDProfile, NSMutableDictionary, NSObject;
@protocol HDAppExtensionAssertionDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface HDAppExtensionAssertion : NSObject {
    BOOL _pendingAssertion;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDProfile *_profile;
    NSMutableDictionary *_pendingAssertionCompletions;
    NSMutableDictionary *_pendingDataTypeCodesToAnchors;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_graceTimer;
    NSObject<OS_dispatch_queue> *_queue;
    double _lastAssertionAttempt;
    long long _connectionErrorCount;
}

@property (weak, nonatomic) id<HDAppExtensionAssertionDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL shouldAssert;
@property (readonly, nonatomic) double nextAssertionAttempt;
@property (copy, nonatomic) id /* block */ unitTest_errorCountDidIncrement;
@property (copy, nonatomic) id /* block */ unitTest_extensionWillTimeout;
@property (nonatomic) BOOL unitTest_timersWithShortTimeout;

- (id)init;
- (void).cxx_destruct;
- (long long)_unitTest_connectionErrorCount;
- (BOOL)_unitTest_invalidated;
- (double)_unitTest_lastAssertionAttempt;
- (unsigned long long)_unitTest_pendingAssertionCompletionsCount;
- (id)_unitTest_pendingDataTypeCodesToAnchors;
- (void)assertAndUpdateWithCompletion:(id /* block */)a0;
- (void)extendForDataType:(long long)a0 anchor:(id)a1 completion:(id /* block */)a2;
- (id)initWithBundleIdentifier:(id)a0 profile:(id)a1 queue:(id)a2;
- (void)invalidateForDataType:(long long)a0 anchor:(id)a1;

@end

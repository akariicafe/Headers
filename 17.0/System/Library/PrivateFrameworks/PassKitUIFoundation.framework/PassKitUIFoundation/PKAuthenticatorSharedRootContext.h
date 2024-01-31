@class LAContext;

@interface PKAuthenticatorSharedRootContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    LAContext *_LAContext;
}

@property (nonatomic) long long userIntentAvailabilityState;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)externalizedContext;
- (void)resetWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)_initialUserIntentAvailabilityState;

@end

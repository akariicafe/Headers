@class AAStorableLoginContext;

@interface AALoginContextManager : NSObject {
    AAStorableLoginContext *_stashedContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stashedContextLock;
}

@property (class, readonly, nonatomic) AALoginContextManager *sharedManager;

@property (retain, nonatomic) AAStorableLoginContext *stashedContext;

+ (void)stashLoginResponseWithAuthenticationResults:(id)a0 cloudKitToken:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)persistStashedContext;

@end

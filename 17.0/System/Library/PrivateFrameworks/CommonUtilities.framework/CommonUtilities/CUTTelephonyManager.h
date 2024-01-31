@class NSMutableSet, NSRecursiveLock;

@interface CUTTelephonyManager : NSObject

@property (nonatomic) struct __CTServerConnection { } *_serverConnection;
@property (nonatomic) void *_suspendDormancyAssertion;
@property (nonatomic) BOOL registered;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableSet *disableFastDormancyTokens;
@property (readonly, nonatomic) BOOL disableFastDormancy;

+ (id)sharedInstance;

- (id)init;
- (void)addFastDormancyDisableToken:(id)a0;
- (void)dealloc;
- (void)removeFastDormancyDisableToken:(id)a0;
- (void)_setFastDormancySuspended:(BOOL)a0;
- (void).cxx_destruct;
- (void)__adjustFastDormancyTokens;
- (void)_adjustFastDormancyTokens;

@end

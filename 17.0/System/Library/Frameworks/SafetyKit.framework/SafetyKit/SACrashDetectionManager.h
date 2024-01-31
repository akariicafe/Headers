@class SAClient;
@protocol SACrashDetectionDelegate;

@interface SACrashDetectionManager : NSObject <SACrashDetectionClientProtocol>

@property (class, readonly, nonatomic, getter=isAvailable) BOOL available;

@property (readonly, nonatomic) SAClient *client;
@property (readonly, nonatomic) long long authorizationStatus;
@property (weak, nonatomic) id<SACrashDetectionDelegate> delegate;

+ (BOOL)availableOverrideSetting;

- (id)init;
- (void).cxx_destruct;
- (void)requestAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void)_appDidBecomeActive:(id)a0;
- (void)_callDelegateWithCrashEvent:(id)a0;
- (void)updateMostRecentCrashDetectionEvent:(id)a0;

@end

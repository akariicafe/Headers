@class NSString;

@interface PasscodeInvalidationSource : PreflightCacheInvalidationSource <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updateStatus;
- (id)invalidationReason;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)a0 userInfo:(id)a1;
- (id)initWithPreflightCache:(id)a0;

@end

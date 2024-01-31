@class _PASLock;

@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateFactors;
- (id)baseModelName;
- (id)engineConfig;
- (BOOL)foundInMailNotifications;
- (id)notificationsAllowListOverride;
- (id)structuredEventInputMapping;
- (id)structuredEventOutputMapping;
- (id)supportedProviders;

@end

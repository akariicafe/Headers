@class _CDContextualChangeRegistration;
@protocol _CDContext;

@interface SUCSScheduler : NSObject {
    id<_CDContext> _context;
    _CDContextualChangeRegistration *_registration;
}

+ (int)_batteryLevel;
+ (id)carplayPredicate:(BOOL)a0;
+ (id)networkPredicate:(BOOL)a0;
+ (id)phoneCallPredicate:(BOOL)a0;
+ (BOOL)_callInProgress;
+ (BOOL)_getBoolForKeyPath:(id)a0;
+ (int)_getIntForKeyPath:(id)a0;
+ (BOOL)_hasNetworkConnection;
+ (id)batteryLevelPredicate:(id)a0;

- (id)init;
- (void)dealloc;
- (void)registerInstallAlertConditionsWithHandler:(id /* block */)a0;
- (void)unregisterInstallationAlertAction;

@end

@interface DEExtensionTracker : NSObject

+ (void)checkIn;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (void)extensionTrackerCleanup;
+ (void)scheduleXPCActivity;
+ (id)userDefaults;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (id)criteria:(id)a0;
+ (id)sharedSerialQueue;
+ (id)currentLoggingExtensions;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (double)xpcActivityTimeInterval;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)_updateXPCActivityDate;

@end

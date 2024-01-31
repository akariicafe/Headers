@class NSXPCConnection;

@interface CARAutomaticDNDStatus : NSObject

@property (class, readonly, nonatomic, getter=isAutomaticDNDAvailable) BOOL automaticDNDAvailable;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) unsigned long long cachedAutomaticDNDActiveState;
@property (copy, nonatomic) id /* block */ statusChangeObserver;
@property (copy, nonatomic) id /* block */ exitConfirmationChangeObserver;

+ (id)_DNDServiceInterface;

- (void)setStartedFirstRidePreference:(BOOL)a0;
- (void)disableDNDUntilEndOfDriveWithReply:(id /* block */)a0;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(id /* block */)a0;
- (id)init;
- (BOOL)shouldActivateWithCarPlay;
- (void)setHasMigratedToDriving:(BOOL)a0;
- (void)setAutomaticDNDTriggeringMethod:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)automaticDNDTriggeringMethod;
- (id)disableTimerTimestamp;
- (BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (void)_dndStateChanged:(BOOL)a0;
- (void)setActivateWithCarPlay:(BOOL)a0;
- (id)firstBuddyPresentationFirstMoment;
- (BOOL)isAutomaticDNDInternalDNDBuddyPreference;
- (BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (BOOL)platformSupportsUrgentMessages;
- (void)allowedAutoReplyAudience:(id /* block */)a0;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)a0;
- (void)_exitConfirmationStateChanged:(BOOL)a0;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)a0;
- (void)_setupConnection;
- (void)setAutoReplyMessage:(id)a0 reply:(id /* block */)a1;
- (void)setOptedOutOfAutomaticDND:(BOOL)a0;
- (void)autoReplyMessageWithReply:(id /* block */)a0;
- (double)mostRecentTriggerMethodChange;
- (void)setHasAdjustedTriggerMethod:(BOOL)a0;
- (BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (void)_detachObservers;
- (BOOL)hasMigratedToDriving;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)a0;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)a0;
- (BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(BOOL)a0;
- (void)setFirstBuddyPresentationFirstMoment:(id)a0;
- (BOOL)hasStartedFirstRidePreference;
- (void).cxx_destruct;
- (BOOL)hasOptedOutOfAutomaticDND;
- (void)setDisableTimerTimestamp:(id)a0;
- (BOOL)hasCompletedFirstRidePreference;
- (void)_resetUserDNDSettingsWithReply:(id /* block */)a0;
- (BOOL)hasAdjustedTriggerMethod;
- (BOOL)platformSupportsSendingAutoReplies;
- (void)_xpcFetchWithServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)disableDNDUntilEndOfDriveWithContext:(id)a0 reply:(id /* block */)a1;
- (void)setAutomaticDNDActive:(BOOL)a0 withReply:(id /* block */)a1;
- (void)setAutomaticDNDTriggerPreference:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)setMostRecentTriggerMethodChange:(double)a0;
- (void)fetchAutomaticDNDAssertionWithReply:(id /* block */)a0;
- (void)setAllowedAutoReplyAudience:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(id /* block */)a0;
- (void)setCompletedFirstRidePreference:(BOOL)a0;
- (void)_performCARPreferencesBlock:(id /* block */)a0 forReading:(BOOL)a1;

@end

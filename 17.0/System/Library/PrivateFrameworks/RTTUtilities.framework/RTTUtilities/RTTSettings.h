@class NSMutableDictionary, NSString, NSMutableSet, NSArray, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface RTTSettings : NSObject {
    NSLock *_synchronizeDomainsLock;
    NSMutableDictionary *_cachedSettings;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nanoSynchronizeQueue;
@property (nonatomic) BOOL TTYHardwareEnabled;
@property (nonatomic) BOOL TTYSoftwareEnabled;
@property (nonatomic) BOOL incomingCallsTTY;
@property (nonatomic) BOOL ttyShouldBeRealtime;
@property (retain, nonatomic) NSString *preferredRelayNumber;
@property (nonatomic) BOOL answerRTTCallsAsMuted;
@property (readonly, nonatomic) BOOL showsRTTNotifications;
@property (readonly, nonatomic) BOOL rttLiveTranscriptionsEnabled;
@property (retain, nonatomic) NSArray *cannedResponses;
@property (nonatomic) BOOL rttInlineAbbreviationBarEnabled;
@property (readonly, nonatomic) BOOL rttCallHoldEnabled;
@property (nonatomic) BOOL continuityRTTIsSupported;
@property (nonatomic) BOOL supportsRelayCalling;
@property (nonatomic) BOOL isRelayCallingEnabled;
@property (nonatomic) BOOL hasReceivedRTTCall;
@property (nonatomic) long long incomingTTYCallCount;
@property (nonatomic) long long outgoingTTYCallCount;
@property (nonatomic) double lastCallCountReset;
@property (nonatomic) double lastDBVacuum;
@property (nonatomic) BOOL internalOverrideTTYAvailability;

+ (id)sharedInstance;
+ (void)initialize;

- (long long)settingsVersion;
- (void)setSettingsVersion:(long long)a0;
- (id)currentLocale;
- (id)valueForPreferenceKey:(id)a0;
- (BOOL)answerRTTCallsAsMutedForContext:(id)a0;
- (id)init;
- (void)dealloc;
- (id)uuidFromContext:(id)a0;
- (void)setAnswerRTTCallsAsMuted:(BOOL)a0 forContext:(id)a1;
- (void)setPreferredRelayNumber:(id)a0 forContext:(id)a1;
- (id)preferredRelayNumberForContext:(id)a0;
- (void)clearServerSettingsCacheForKey:(id)a0;
- (id)_preferenceKeyForSelector:(SEL)a0;
- (void)clearAllServerSettingsCache;
- (BOOL)ttyShouldBeRealtimeForContext:(id)a0;
- (id)_notificationForPreferenceKey:(id)a0;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)_registerForNotification:(id)a0;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1 andContext:(id)a2;
- (id)notificationForSelector:(SEL)a0;
- (BOOL)rttLiveTranscriptionsFeatureFlagEnabled;
- (BOOL)TTYSoftwareEnabledForContext:(id)a0;
- (void)_synchronizeIfNecessary:(id)a0;
- (id)objectValueForKey:(id)a0 andContext:(id)a1 withClass:(Class)a2 andDefaultValue:(id)a3;
- (void)resetCannedResponses;
- (void)setTTYHardwareEnabled:(BOOL)a0 forContext:(id)a1;
- (long long)integerValueForKey:(id)a0 withDefaultValue:(long long)a1;
- (SEL)selectorForPreferenceKey:(id)a0;
- (BOOL)shouldMigrateSettings;
- (void)setIncomingCallsTTY:(BOOL)a0 forContext:(id)a1;
- (void)updateGizmoValueIfNeeded:(id)a0 forPreferenceKey:(id)a1;
- (void).cxx_destruct;
- (void)setTTYSoftwareEnabled:(BOOL)a0 forContext:(id)a1;
- (id)_selectorMap;
- (void)setTTYShouldBeRealtime:(BOOL)a0 forContext:(id)a1;
- (BOOL)boolValueForKey:(id)a0 andContext:(id)a1 withDefaultValue:(BOOL)a2;
- (id)objectValueForKey:(id)a0 withClass:(Class)a1 andDefaultValue:(id)a2;
- (BOOL)incomingCallsTTYForContext:(id)a0;
- (BOOL)rttLiveTranscriptionsEnabledForContext:(id)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (BOOL)showsRTTNotificationsForContext:(id)a0;
- (BOOL)TTYHardwareEnabledForContext:(id)a0;
- (BOOL)boolValueForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)setShowsRTTNotifications:(BOOL)a0 forContext:(id)a1;
- (void)setRTTLiveTranscriptionsEnabled:(BOOL)a0 forContext:(id)a1;
- (void)migrateSettings;
- (void)_handlePreferenceChanged:(id)a0;
- (id)valueForPreferenceKey:(id)a0 andContext:(id)a1;

@end

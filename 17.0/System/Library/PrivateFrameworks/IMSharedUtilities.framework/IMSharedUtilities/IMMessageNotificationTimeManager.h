@class NSString, NSMutableDictionary, BKSApplicationStateMonitor;

@interface IMMessageNotificationTimeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *chatsStartTimeDictionary;
@property (retain, nonatomic) NSString *latestIDSTokenURI;
@property (retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (long long)_getTimeWindowOverride;
- (long long)_getToneTimeWindow;
- (BOOL)_isToneToggleSwitchOn;
- (BOOL)_shouldSendNotificationForChatIdentifier:(id)a0;
- (void)acquireAssertionToUnsuspendProcess;
- (void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:(id)a0;
- (void)setDate:(id)a0 forChatIdentifier:(id)a1;
- (void)setLatestNotificationIDSTokenURI:(id)a0;
- (void)tearDownSessionForChatIdentifier:(id)a0;

@end

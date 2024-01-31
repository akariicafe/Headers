@class CALNTriggeredEventNotificationSource, NSString, CALNNotificationSourceRefresher, CALNInboxNotificationMonitor, NSArray, EKEphemeralCacheEventStoreProvider, CALNSchedulingSnoozeUpdateTimer, CALNNotificationServer, CALNNotificationIconCache, EKEventStore, CALNCalendarAppBadgeUpdater, CALNNotificationStorageWrapper;
@protocol CALNCalendarIconIdentifierProvider, CalIconProvider, CALNNotificationIconProvider;

@interface CALNNotificationServerModule : NSObject <CADModule> {
    EKEphemeralCacheEventStoreProvider *_eventStoreProvider;
    EKEventStore *_lastCreatedEventStore;
}

@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (readonly, nonatomic) CALNNotificationServer *calendarNotificationServer;
@property (readonly, nonatomic) CALNNotificationSourceRefresher *notificationSourceRefresher;
@property (readonly, nonatomic) CALNCalendarAppBadgeUpdater *calendarAppBadgeUpdater;
@property (readonly, nonatomic) CALNNotificationStorageWrapper *calendarStorageWrapper;
@property (readonly, nonatomic) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource;
@property (readonly, nonatomic) CALNNotificationIconCache *iconCache;
@property (readonly, nonatomic) CALNSchedulingSnoozeUpdateTimer *snoozeUpdateTimer;
@property (readonly, nonatomic) id<CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider> iconProvider;
@property (readonly, nonatomic) NSArray *modules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createNotificationStorageAtPath:(id)a0 protected:(BOOL)a1;
+ (id)_unprotectedTriggeredEventNotificationDataStorage;
+ (id)_protectedTriggeredEventNotificationDataStorage;
+ (id)_timeToLeaveRefreshStorage;
+ (void)_setProtectedClassForStorageAtPath:(id)a0;
+ (id)_notificationStoragePathWithName:(id)a0;
+ (id)_createTimeToLeaveRefreshStorageAtPath:(id)a0;
+ (id)_timeToLeaveRefreshStoragePathWithName:(id)a0;
+ (void)_migrateNotificationFilesFromDirectory:(id)a0 toDirectory:(id)a1;
+ (id)_createTriggeredEventNotificationDataStorageAtPath:(id)a0 protected:(BOOL)a1;
+ (void)_migrateNotificationFiles;
+ (id)_unprotectedCalendarNotificationStorage;
+ (id)_filesToMigrate;
+ (id)_triggeredEventNotificationDataStoragePathWithName:(id)a0;
+ (id)_protectedCalendarNotificationStorage;

- (void)receivedNotificationNamed:(id)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)a0;
- (void)didRegisterForAlarms;
- (id)init;
- (void)_removeNotificationsFromUnprotectedStorage:(id)a0;
- (void)_reloadNotificationsFromUnprotectedStorage:(id)a0 intoProtectedStorage:(id)a1 withStorageWrapper:(id)a2 forNotificationServer:(id)a3;
- (void)_registerSettingsCaptureHandlers;
- (void)_reloadNotificationRecords:(id)a0 forNotificationServer:(id)a1;
- (void)activate;
- (void)_reloadTriggeredEventNotificationData;
- (void)_updateLocaleReloadIfDifferent:(BOOL)a0;
- (id)_createNotificationSourcesWithNotificationManager:(id)a0 eventStoreProvider:(id)a1 inboxNotificationProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (void)_updateSourceClientIdentifiersIfNeeded;
- (void).cxx_destruct;
- (void)updateIconsToNewVersionIfNeeded;
- (void)_reloadNotificationsAfterFirstUnlock;
- (void)refreshEventStoreInResponseToDatabaseChangeNotification:(id)a0;
- (id)_createNotificationServerWithUserNotificationCenter:(id)a0 storage:(id)a1 eventStoreProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)a0 storage:(id)a1 eventStoreProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (void)deactivate;

@end

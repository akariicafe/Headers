@class UNCKeyedDictionaryRepository, NSObject;
@protocol OS_dispatch_queue;

@interface UNSNotificationScheduleRepository : NSObject {
    UNCKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;
- (id)allBundleIdentifiers;
- (void)_queue_setSchedule:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)scheduleForBundleIdentifier:(id)a0;
- (void)performMigration;
- (void)setSchedule:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_performMigration;
- (id)_queue_scheduleForBundleIdentifier:(id)a0;
- (id)_dateFormatter;
- (void)removeScheduleForBundleIdentifier:(id)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)_queue_removeScheduleForBundleIdentifier:(id)a0;

@end

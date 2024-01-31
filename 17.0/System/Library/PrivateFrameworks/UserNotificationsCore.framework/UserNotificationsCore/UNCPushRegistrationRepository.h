@class UNCKeyedDictionaryRepository, NSObject;
@protocol OS_dispatch_queue;

@interface UNCPushRegistrationRepository : NSObject {
    UNCKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;
- (id)allBundleIdentifiers;
- (void).cxx_destruct;
- (void)performMigration;
- (void)_queue_performMigration;
- (void)notificationSourcesDidUninstall:(id)a0;
- (id)_queue_registrationForBundleIdentifier:(id)a0;
- (void)_queue_removeRegistrationForBundleIdentifier:(id)a0;
- (void)_queue_setRegistration:(id)a0 forBundleIdentifier:(id)a1;
- (id)registrationForBundleIdentifier:(id)a0;
- (void)removeRegistrationForBundleIdentifier:(id)a0;
- (void)setRegistration:(id)a0 forBundleIdentifier:(id)a1;

@end

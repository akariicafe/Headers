@class _PASLock, NSUserDefaults, HVContentAdmissionKVOObserver;

@interface HVContentAdmission : NSObject {
    _PASLock *_lock;
    NSUserDefaults *_defaults;
    HVContentAdmissionKVOObserver *_kvoObserver;
    HVContentAdmissionKVOObserver *_pastEventsObserver;
}

+ (void)registerConfigurationAsset:(id)a0;
+ (void)addContentAdmissionObserver:(id)a0;
+ (void)initialize;
+ (void)clearTestSettings;
+ (BOOL)suggestionsShouldShowPastEvents;
+ (BOOL)shouldAdmitContentFromBundleIdentifier:(id)a0;
+ (void)disableBundleIdentifier:(id)a0;
+ (void)migrateForTests;
+ (void)updateConfigurableBundleIdentifierDenyList:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end

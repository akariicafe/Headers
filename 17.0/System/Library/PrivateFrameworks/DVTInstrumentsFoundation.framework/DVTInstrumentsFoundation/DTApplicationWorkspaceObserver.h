@class NSString, NSMutableDictionary;

@interface DTApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary *_registrationsByToken;
    NSMutableDictionary *_knownAppsByPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyWithApplicationProxy:(id)a0 addition:(BOOL)a1;
- (void)_notifyWithDictionaryRepresentation:(id)a0 addition:(BOOL)a1;
- (void)_unregisterNotificationTokenInternal:(id)a0;
- (id)registerNotificationToken:(id)a0 observer:(id)a1 query:(id)a2;
- (void)unregisterNotificationToken:(id)a0 observer:(id)a1;

@end

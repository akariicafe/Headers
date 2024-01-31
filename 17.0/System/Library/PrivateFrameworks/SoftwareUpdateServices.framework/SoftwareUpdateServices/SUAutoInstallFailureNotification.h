@class NSString;

@interface SUAutoInstallFailureNotification : NSObject <SUAutoInstallFailureNotification> {
    struct __CFUserNotification { } *_notification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)dismissNotification;
- (void)postNotificationForError:(id)a0;
- (void)postNotificationForError:(id)a0 withUpdateBuildNumber:(id)a1;

@end

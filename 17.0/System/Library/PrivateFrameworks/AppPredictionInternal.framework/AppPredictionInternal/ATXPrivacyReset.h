@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (id)init;
- (id)_placeholderPath;
- (void)dealloc;
- (void)_removeAllAppActionData;
- (void)_writeDeletionPlaceholder;
- (void)_removeAllBlendingUICaches;
- (void).cxx_destruct;
- (void)_handlePrivacyResetNotification;
- (void)_registerForResetPrivacyWarningsNotification;
- (BOOL)_placeholderExists;

@end

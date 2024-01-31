@interface _LSRegistrationNotificationJournaller : _LSInstallNotificationJournaller {
    BOOL _placeholder;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)entityExists;
- (id)initWithPrimaryBundleID:(id)a0 placeholder:(BOOL)a1;
- (BOOL)shouldExpectEntityToExist;
- (id)synthesizedPreliminaryJournalledNotifications;

@end

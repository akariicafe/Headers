@class NSString, NSMutableArray;

@interface _LSInstallNotificationJournaller : NSObject <NSSecureCoding> {
    BOOL _preliminary;
    NSString *_primaryBundleID;
    NSMutableArray *_journalledNotifications;
    unsigned long long _operationType;
    double _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)createInstallJournalDirectoryIfRequired;
+ (BOOL)shouldJournalNotificationType:(int)a0;

- (void)encodeWithCoder:(id)a0;
- (double)timestamp;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)primaryBundleID;
- (void)_writeJournalUnconditionally;
- (BOOL)applicableForCurrentDatabase;
- (BOOL)entityExists;
- (id)initWithPrimaryBundleID:(id)a0 operation:(unsigned long long)a1;
- (unsigned long long)installOperation;
- (BOOL)isApplicationRegisteredWithbundleID:(id)a0 placeholder:(BOOL)a1;
- (id)journalURL;
- (id)journalledNotifications;
- (void)removeJournalAfterNotificationFence;
- (void)removeJournalFile;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2 options:(id)a3;
- (void)setPrimaryBundleID:(id)a0;
- (BOOL)shouldExpectEntityToExist;
- (id)synthesizedPreliminaryJournalledNotifications;
- (void)writeFinalJournal;
- (void)writePreliminaryJournal;

@end

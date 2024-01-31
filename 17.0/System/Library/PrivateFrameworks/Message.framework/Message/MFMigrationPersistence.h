@class NSString;

@interface MFMigrationPersistence : NSObject <MFUserAgent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)migrateDatabaseAtPath:(id)a0;

- (id)init;
- (BOOL)isForeground;
- (BOOL)isMaild;
- (void)autofetchAccount:(id)a0 mailboxUid:(id)a1;
- (BOOL)canRegisterForAPSPush;
- (BOOL)canUseSpotlightIndex;
- (BOOL)isAllowedToAccessProtectedData;
- (BOOL)isMobileMail;
- (void)networkActivityEnded:(id)a0;
- (void)networkActivityStarted:(id)a0;

@end

@interface LocalAccount : MailAccount

@property (class, readonly, nonatomic) LocalAccount *localAccount;

+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (id)csAccountTypeString;
+ (id)legacyPathNameForAccountWithHostname:(id)a0 username:(id)a1;

- (void)setPassword:(id)a0;
- (void)setHostname:(id)a0;
- (id)identifier;
- (id)uniqueID;
- (BOOL)isLocalAccount;
- (BOOL)isActive;
- (id)displayName;
- (void)setUsername:(id)a0;
- (id)sendLaterFolder;
- (id)_URLScheme;
- (id)_copyMailboxUidWithParent:(id)a0 name:(id)a1 attributes:(unsigned long long)a2 existingMailboxUid:(id)a3 dictionary:(id)a4;
- (id)_infoForMatchingURL:(id)a0;
- (BOOL)_setChildren:(id)a0 forMailboxUid:(id)a1;
- (BOOL)_shouldConfigureMailboxCache;
- (void)_synchronouslyLoadListingForParent:(id)a0;
- (BOOL)canFetch;
- (BOOL)canGoOffline;
- (BOOL)deleteInPlaceForMailbox:(id)a0;
- (id)legacySQLExpressionToMatchAllMailboxes;
- (id)mailboxPathExtension;
- (id)mailboxUidForFileSystemPath:(id)a0;
- (id)mailboxUidForRelativePath:(id)a0 create:(BOOL)a1 withOption:(int)a2;
- (id)primaryMailboxUid;
- (id)pushedMailboxUids;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1 parent:(id)a2;
- (void)resetSpecialMailboxes;
- (id)sendLaterFolderShouldCreate:(BOOL)a0;
- (Class)storeClass;
- (BOOL)supportsAppend;
- (BOOL)supportsArchiving;
- (BOOL)supportsPurge;
- (id)transientDraftsFolder;
- (id)transientDraftsFolderShouldCreate:(BOOL)a0;

@end

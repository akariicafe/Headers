@interface LocalAccount : MailAccount

+ (id)localAccount;
+ (id)accountTypeString;
+ (id)defaultPathNameForAccountWithHostname:(id)a0 username:(id)a1;

- (void)setPassword:(id)a0;
- (id)uniqueId;
- (void)setHostname:(id)a0;
- (id)initWithLibrary:(id)a0;
- (BOOL)isActive;
- (id)displayName;
- (void)setUsername:(id)a0;
- (id)_URLScheme;
- (id)_copyMailboxUidWithParent:(id)a0 name:(id)a1 attributes:(unsigned int)a2 existingMailboxUid:(id)a3 dictionary:(id)a4;
- (id)_infoForMatchingURL:(id)a0;
- (BOOL)_setChildren:(id)a0 forMailboxUid:(id)a1;
- (BOOL)_shouldConfigureMailboxCache;
- (void)_synchronouslyLoadListingForParent:(id)a0;
- (BOOL)canFetch;
- (BOOL)canGoOffline;
- (BOOL)deleteInPlaceForMailbox:(id)a0;
- (id)mailboxPathExtension;
- (id)mailboxUidForFileSystemPath:(id)a0;
- (id)primaryMailboxUid;
- (id)pushedMailboxUids;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1 parent:(id)a2;
- (void)resetSpecialMailboxes;
- (Class)storeClass;
- (BOOL)supportsAppend;
- (BOOL)supportsArchiving;
- (BOOL)supportsPurge;
- (id)transientDraftsFolder;
- (id)transientDraftsFolderShouldCreate:(BOOL)a0;

@end

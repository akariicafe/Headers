@class NoteContext, NSArray, ACAccountStore, NSLock, NSObject;
@protocol OS_dispatch_group;

@interface AccountUtilities : NSObject {
    NSArray *_accountIDsEnabledForNotes;
    NoteContext *_noteContext;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *backgroundDispatchGroup;
@property (retain) NSLock *updateAccountInfosLock;

+ (id)sharedAccountUtilities;

- (id)init;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)localNotesExist;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)a0;
- (void)updateAccountInfos;
- (id)localAccountDisplayName;
- (id)accountsEnabledForNotes;
- (void)startKeepingAccountInfosUpToDate;
- (void).cxx_destruct;
- (id)freshContext;
- (id)accountIDsEnabledForNotes;

@end

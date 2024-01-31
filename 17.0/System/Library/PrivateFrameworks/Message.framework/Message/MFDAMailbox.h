@class NSString;

@interface MFDAMailbox : MFMailboxUid {
    NSString *_folderID;
}

@property (copy) NSString *folderID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)_folderID;
- (id)URLWithAccount:(id)a0;
- (id)_privacySafeDescription;
- (id)initWithName:(id)a0 attributes:(unsigned long long)a1 account:(id)a2 folderID:(id)a3;
- (BOOL)mergeWithUserInfo:(id)a0;

@end

@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(BOOL *)a1;
- (id)ef_publicDescription;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;
- (id)cachedSelf;
- (void)encodeWithCoder:(id)a0;
- (BOOL)excludeTypes;
- (void).cxx_destruct;
- (id)mailboxObjectIDs;
- (BOOL)scopeContainsMailbox:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mailboxTypes;
- (id)initWithCoder:(id)a0;
- (BOOL)excludeMailboxes;
- (BOOL)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;

@end

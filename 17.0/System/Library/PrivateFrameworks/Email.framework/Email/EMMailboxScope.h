@class NSString, NSSet;

@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly, nonatomic) EMMailboxScope *allMailboxesScope;
@property (class, readonly, nonatomic) EMMailboxScope *noMailboxesScope;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *mailboxTypes;
@property (readonly, nonatomic) BOOL excludeTypes;
@property (readonly, copy, nonatomic) NSSet *mailboxObjectIDs;
@property (readonly, nonatomic) BOOL excludeMailboxes;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mailboxScopeForMailboxTypes:(id)a0 forExclusion:(BOOL)a1;
+ (id)mailboxScopeForMailboxObjectIDs:(id)a0 forExclusion:(BOOL)a1;
+ (id)mailboxScopeForMailboxType:(long long)a0 forExclusion:(BOOL)a1;

- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(BOOL *)a1;
- (id)init;
- (id)_mailboxTypesDescription;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;
- (BOOL)containsOnlyInboxType;
- (id)cachedSelf;
- (id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_mailboxObjectIDsDescriptionIsDebug:(BOOL)a0;
- (BOOL)_scopeContainsMailboxWithObjectID:(id)a0 mailboxTypeBlock:(id /* block */)a1;
- (void)_calculateHash;
- (id)initWithMailboxTypes:(id)a0 excludeTypes:(BOOL)a1 mailboxObjectIDs:(id)a2 excludeMailboxes:(BOOL)a3 cached:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithMailboxTypes:(id)a0 excludeTypes:(BOOL)a1 mailboxObjectIDs:(id)a2 excludeMailboxes:(BOOL)a3;
- (BOOL)scopeContainsMailbox:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;

@end

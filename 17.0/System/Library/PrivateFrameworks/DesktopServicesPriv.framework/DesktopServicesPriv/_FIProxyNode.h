@class FINode;

@interface _FIProxyNode : FICustomNode

@property (readonly, nonatomic) FINode *proxyNode;

- (id)itemIdentifier;
- (BOOL)isShared;
- (id)fileURL;
- (id)contentType;
- (id)tags;
- (id)creationDate;
- (id)fileName;
- (id)typeIdentifier;
- (BOOL)isFolder;
- (void).cxx_destruct;
- (id)source;
- (id)debugDescription;
- (id)displayName;
- (id)fetchTags:(BOOL)a0;
- (id)lastUsedDate;
- (BOOL)isPackage;
- (id)contentModificationDate;
- (BOOL)isTrashed;
- (id)fpItem;
- (id)childItemCount;
- (id)documentSize;
- (BOOL)isSharedByCurrentUser;
- (BOOL)isTopLevelSharedItem;
- (id)ownerNameComponents;
- (id)itemDecorations;
- (id)enumeratorError;
- (id)propertyAsDate:(unsigned int)a0;
- (unsigned long long)nodeIs:(unsigned long long)a0;
- (BOOL)propertyAsBool:(unsigned int)a0;
- (id)fetchLastUsedDate:(BOOL)a0;
- (id)fpDomain;
- (id)initWithProxyNode:(id)a0;
- (void)inlineProgressCancel;
- (id)iteratorIncludingInvisibleItems:(BOOL)a0 synchronous:(BOOL)a1;
- (unsigned int)nodePermissions:(unsigned int)a0;
- (id)propertyAsArray:(unsigned int)a0;
- (id)propertyAsDictionary:(unsigned int)a0;
- (id)propertyAsNSObject:(unsigned int)a0;
- (id)propertyAsNumber:(unsigned int)a0;
- (id)propertyAsString:(unsigned int)a0;
- (BOOL)requiresForcedSyncing;
- (unsigned int)volumeIs:(unsigned int)a0;

@end

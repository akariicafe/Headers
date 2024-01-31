@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (copy, nonatomic) NSString *customMarkString;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isSearchable;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned int)elementKind;
- (id)childEnumerator;
- (id)copyWithContext:(id)a0;
- (unsigned long long)findCharIndex;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)applyMark;
- (void)checkDebug;
- (id)initWithContext:(id)a0 wpStorage:(id)a1;
- (void)setContainedStorageParentInfoToStorage:(id)a0;
- (void)setParentStorage:(id)a0;
- (BOOL)shouldArchiveStringEquivalent;
- (id)stringEquivalent;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned long long)findCharIndexWithHintIndex:(unsigned long long *)a0;
- (id)objectsForStyleMigrating;
- (BOOL)supportsUUID;

@end

@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (retain, nonatomic) NSString *customMarkString;

- (void)dealloc;
- (BOOL)isSearchable;
- (id)initWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)elementKind;
- (id)copyWithContext:(id)a0;
- (unsigned long long)findCharIndex;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)applyMark;
- (void)checkDebug;
- (id)initWithContext:(id)a0 wpStorage:(id)a1;
- (void)setContainedStorageParentInfoToStorage:(id)a0;
- (void)setParentStorage:(id)a0;
- (id)stringEquivalent;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;

@end

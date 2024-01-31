@class NSString, TSWPStorage, TSDCommentStorage, NSDate, TSKAnnotationAuthor;

@interface TSWPHighlight : TSPObject <TSDComment, TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField>

@property (copy, nonatomic) NSString *textAttributeUUIDString;
@property (retain, nonatomic) TSDCommentStorage *commentStorage;
@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly, nonatomic) BOOL isHighlight;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (readonly, nonatomic) NSString *parentUUID;
@property (readonly, nonatomic) int annotationType;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultHighlightWithContext:(id)a0 includeCommentWithAuthor:(id)a1;
+ (id)highlightTextColorForHighlights:(id)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 commentStorage:(id)a1;
- (void)commentWillBeAddedToDocumentRoot;
- (void)i_setTextAttributeUUIDString:(id)a0;
- (id)initWithContext:(id)a0 commentStorage:(id)a1 annotationUUID:(id)a2;
- (BOOL)isCommentEmpty;
- (BOOL)isEquivalentToObject:(id)a0;
- (BOOL)isFloatingComment;
- (BOOL)isInDocument;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)a0 key:(id)a1;
- (void)resetTextAttributeUUIDString;

@end

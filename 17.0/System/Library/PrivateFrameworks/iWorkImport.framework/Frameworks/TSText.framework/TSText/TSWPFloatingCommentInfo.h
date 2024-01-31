@class NSString, TSDCommentStorage, NSDate, TSKAnnotationAuthor;

@interface TSWPFloatingCommentInfo : TSWPShapeInfo <TSDComment, TSKAnnotationParent> {
    TSDCommentStorage *_commentStorage;
}

@property (retain, nonatomic) TSDCommentStorage *commentStorage;
@property (readonly, nonatomic) double commentScalingMultiplier;
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

+ (id)p_defaultStroke;
+ (id)p_defaultShadow;
+ (id)bezierPathForExportCommentOutline;
+ (id)commentInfoWithContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1 storage:(id)a2;
+ (struct CGSize { double x0; double x1; })commentInitialSizeWithContext:(id)a0;
+ (id)commentParagraphStyleForStylesheet:(id)a0;
+ (id)commentParagraphStyleForStylesheet:(id)a0 scalingMultiplier:(double)a1;
+ (id)commentParagraphStyleIdentifierForFontSize:(unsigned long long)a0;
+ (id)commentStyleIdentifier;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)a0;
+ (id)p_commentInfoWithContext:(id)a0 geometry:(id)a1 storage:(id)a2;
+ (id)p_commentParagraphStyleForStylesheet:(id)a0 fontSize:(unsigned long long)a1;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)a0;
+ (id)p_defaultFill;
+ (id)p_defaultPadding;
+ (void)upgradeCommentInfoStorage:(id)a0;
+ (void)upgradeCommentInfoStyle:(id)a0;
+ (void)upgradeCommentParagraphStylesForStylesheet:(id)a0 withCommentScale:(double)a1;

- (id)typeName;
- (void).cxx_destruct;
- (Class)layoutClass;
- (unsigned int)elementKind;
- (id)creationDateString;
- (BOOL)isLockable;
- (id)annotationWithUUID:(id)a0;
- (Class)repClass;
- (Class)editorClass;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3 wpStorage:(id)a4;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)saveToArchiver:(id)a0;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (BOOL)isAllowedInGroups;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)commentWillBeAddedToDocumentRoot;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(id /* block */)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3 commentStorage:(id)a4;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3 wpStorage:(id)a4 commentStorage:(id)a5;
- (BOOL)isFloatingComment;
- (BOOL)isInDocument;
- (id)pathSourceForExportCommentOutline;
- (double)transformGeometryRatioForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
